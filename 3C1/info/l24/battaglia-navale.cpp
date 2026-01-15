/* output di gemini con probblemi che non riuscivo a fixare

Ecco il codice corretto e funzionante.

Il tuo codice originale aveva diversi problemi logici critici:

1. **Controllo Coordinate (Bug bloccante):** La condizione `pos[i][j] > 10 || pos[i][j] <= 0` era errata per una griglia di dimensione 3 (e gli array partono da 0).
2. **Sovrapposizione e Identità:** Usavi la *lunghezza* della nave come ID sulla mappa. Se avevi due navi lunghe 3, il gioco non poteva distinguerle per capire quale fosse affondata. Ho modificato il codice per usare un ID unico per ogni nave.
3. **Direzioni:** Le direzioni "Su" e "Giù" erano spesso invertite o gestite male rispetto agli assi X/Y standard delle matrici.
4. **Logica di Affondamento:** Il sistema `Get_nave` falliva perché, una volta colpita una parte della nave (sovrascritta con un simbolo di colpo), il gioco non riusciva più a "vedere" il resto della nave per controllare se fosse affondata.

Ecco la versione corretta (copia e incolla in `battaglia-navale.cpp`):

'codice'

### Principali Correzioni Effettuate:

1. **Limiti Griglia:** Ho cambiato i controlli `pos[i][j] > 10` in `pos[i][j] >= grandezza_griglia`. Ora non puoi mettere navi fuori dalla mappa o su coordinate negative.
2. **Identificazione Nave:**
* Invece di scrivere la lunghezza della nave sulla griglia (che creava confusione se due navi avevano la stessa lunghezza), ora scrivo un ID basato sull'indice (`'0'`, `'1'`, `'2'`...).
* Quando colpisci una cella contenente `'1'`, il codice trasforma quella cella in `'X'`.
* La funzione `Check_affondata` ora scansiona la griglia: se non trova più nessun carattere `'1'`, significa che tutta la nave è stata trasformata in `'X'`, quindi è affondata.


3. **Flusso di Gioco (Loop):**
* Ho riscritto `Set_navi` per obbligare il giocatore a piazzare *tutte* le navi presenti nel vettore `Navi`.
* Ho semplificato il `main` e la funzione di attacco (`Turno_Attacco`) per gestire meglio l'alternanza dei turni e i messaggi a schermo.


4. **Simboli Standard:**
* `.` = Acqua inesplorata.
* `X` = Colpito (Hit).
* `O` = Mancato (Miss).
*/
#include <iostream>
#include <vector>
#include <array>
#include <cstdlib> // Per system("cls")

using namespace std;

const int grandezza_griglia = 10; // Aumentato leggermente per giocabilità
char P1[grandezza_griglia][grandezza_griglia], P2[grandezza_griglia][grandezza_griglia];
char P1_att[grandezza_griglia][grandezza_griglia], P2_att[grandezza_griglia][grandezza_griglia];

// Configurazione flotta
const int n1=4, n2=3, n3=2, n4=1, n5=1;
vector<int> Navi; // Contiene le lunghezze
int navi_affondate_p1 = 0, navi_affondate_p2 = 0;

void Carica_navi(){
    Navi.clear(); // Pulisce in caso di riavvio
    for(int i=0; i<n1; i++) Navi.push_back(1);
    for(int i=0; i<n2; i++) Navi.push_back(2);
    for(int i=0; i<n3; i++) Navi.push_back(3);
    for(int i=0; i<n4; i++) Navi.push_back(4);
    for(int i=0; i<n5; i++) Navi.push_back(5);
}

void Genera_griglie(){
    // Inizializza tutte le griglie con acqua '0' o '.'
    for(int i=0; i<grandezza_griglia; i++){
        for(int j=0; j<grandezza_griglia; j++){
            P1[i][j] = '.';
            P2[i][j] = '.';
            P1_att[i][j] = '.';
            P2_att[i][j] = '.';
        }
    }
}

void Disp(int player, bool att=false){
    char (*A)[grandezza_griglia];
    char (*A_att)[grandezza_griglia];

    if(player == 0){ A = P1; A_att = P1_att; }
    else           { A = P2; A_att = P2_att; }

    cout << "   TUA FLOTTA";
    if(att) cout << "             RADAR ATTACCHI";
    cout << endl;

    // Header X
    cout << "   ";
    for(int j=0; j<grandezza_griglia; j++) cout << j << " ";
    if(att) {
        cout << "   ";
        for(int j=0; j<grandezza_griglia; j++) cout << j << " ";
    }
    cout << endl;

    for(int i=0; i<grandezza_griglia; i++){
        // Griglia navi
        cout << i << "| ";
        for(int j=0; j<grandezza_griglia; j++){
            // Nascondiamo l'ID specifico (A, B, C) e mostriamo solo 'S' per Ship se non in debug
            // Ma per ora mostriamo l'ID per capire
            cout << A[i][j] << " ";
        }

        // Griglia attacchi
        if(att){
            cout << "   " << i << "| ";
            for(int j=0; j<grandezza_griglia; j++){
                cout << A_att[i][j] << " ";
            }
        }
        cout << endl;
    }
}

vector<array<int,2>> Trova_cordinate(int x, int y, int direzione, int lunghezza){
    vector<array<int,2>> pos;
    // Controllo preventivo per non creare vettori enormi se lunghezza è sbagliata
    if (lunghezza <= 0) return pos;

    pos.resize(lunghezza);

    for(int i=0; i<lunghezza; i++){
        switch(direzione){
        case 0: // Punto singolo (nave da 1)
            pos[i][0] = y; pos[i][1] = x;
            break;
        case 1: // Su (Y diminuisce)
            pos[i][0] = y - i; pos[i][1] = x;
            break;
        case 2: // Giu (Y aumenta)
            pos[i][0] = y + i; pos[i][1] = x;
            break;
        case 3: // Destra (X aumenta)
            pos[i][0] = y; pos[i][1] = x + i;
            break;
        case 4: // Sinistra (X diminuisce)
            pos[i][0] = y; pos[i][1] = x - i;
            break;
        }
    }
    return pos;
}

bool Check_cordinate_set_valide(vector<array<int,2>> pos, int player){
    char (*A)[grandezza_griglia];
    if(player == 0) A = P1; else A = P2;

    for(int i=0; i<pos.size(); i++){
        int r = pos[i][0]; // Y (riga)
        int c = pos[i][1]; // X (colonna)

        // Controllo Limiti (Bounds Check) CORRETTO
        if(r < 0 || r >= grandezza_griglia || c < 0 || c >= grandezza_griglia)
            return false;

        // Controllo Sovrapposizione
        if(A[r][c] != '.')
            return false;
    }
    return true;
}

bool Metti_nave(int x, int y, int direzione, int indice_nave, int player){
    char (*A)[grandezza_griglia];
    if(player == 0) A = P1; else A = P2;

    int lun = Navi[indice_nave];
    // Se la nave è lunga 1, la direzione è ininfluente (0)
    if(lun == 1) direzione = 0;

    vector<array<int,2>> cordinate = Trova_cordinate(x, y, direzione, lun);

    if(!Check_cordinate_set_valide(cordinate, player)){
        cout << "Coordinate non valide o spazio occupato! Riprova." << endl;
        return false;
    }

    // Usiamo un char ID basato sull'indice ('0', '1', '2'...) per distinguere le navi
    char id_nave = '0' + indice_nave;

    for(int i=0; i<cordinate.size(); i++){
        A[cordinate[i][0]][cordinate[i][1]] = id_nave;
    }
    return true;
}

void Set_navi(int player){
    int x, y, direzione;
    system("cls");
    cout << "=== TURN SETUP GIOCATORE " << player+1 << " ===" << endl;

    // Iteriamo su tutte le navi da piazzare
    for(int i=0; i < Navi.size(); i++){
        bool piazzata = false;
        while(!piazzata){
            Disp(player);
            cout << "Piazza Nave " << i << " (Lunghezza: " << Navi[i] << ")" << endl;
            cout << "X (0-" << grandezza_griglia-1 << "): "; cin >> x;
            cout << "Y (0-" << grandezza_griglia-1 << "): "; cin >> y;

            direzione = 0;
            if(Navi[i] > 1){
                cout << "Direzione (1-Su, 2-Giu, 3-Destra, 4-Sinistra): ";
                cin >> direzione;
            }

            if(Metti_nave(x, y, direzione, i, player)){
                piazzata = true;
                system("cls");
            }
        }
    }
}

// Verifica se una specifica nave è affondata controllando se il suo ID esiste ancora
bool Check_affondata(char id_nave, int player_difensore){
    char (*A)[grandezza_griglia];
    if(player_difensore == 0) A = P1; else A = P2;

    // Scansiona tutta la griglia. Se troviamo ancora l'ID della nave, NON è affondata.
    for(int i=0; i<grandezza_griglia; i++){
        for(int j=0; j<grandezza_griglia; j++){
            if(A[i][j] == id_nave) return false;
        }
    }
    return true;
}

// Ritorna true se il gioco continua, false se qualcuno ha vinto
bool Check_vittoria(){
    if(navi_affondate_p1 >= Navi.size()) return false; // P2 vince (ha affondato tutto a P1)
    if(navi_affondate_p2 >= Navi.size()) return false; // P1 vince
    return true;
}

void Turno_Attacco(int player_att){
    int player_dif = (player_att == 0) ? 1 : 0;

    // Puntatori per comodità
    char (*GrigliaDif)[grandezza_griglia] = (player_dif == 0) ? P1 : P2;
    char (*RadarAtt)[grandezza_griglia]   = (player_att == 0) ? P1_att : P2_att;

    int x, y;
    bool valid_shot = false;

    while(!valid_shot){
        cout << "Giocatore " << player_att+1 << " attacca!" << endl;
        Disp(player_att, true);

        cout << "Coordinate attacco X: "; cin >> x;
        cout << "Coordinate attacco Y: "; cin >> y;

        if(x < 0 || x >= grandezza_griglia || y < 0 || y >= grandezza_griglia){
            cout << "Fuori bersaglio!" << endl;
            continue;
        }
        if(RadarAtt[y][x] != '.'){
            cout << "Hai gia' sparato qui!" << endl;
            continue;
        }
        valid_shot = true;
    }

    char target = GrigliaDif[y][x];

    if(target != '.' && target != 'X' && target != 'O'){
        // COLPITO
        cout << "COLPITO!" << endl;
        GrigliaDif[y][x] = 'X'; // Segna sulla griglia del difensore (Danno)
        RadarAtt[y][x]   = 'X'; // Segna sul radar dell'attaccante

        // Controlla se affondata
        if(Check_affondata(target, player_dif)){
            cout << "AFFONDATO!" << endl;
            if(player_att == 0) navi_affondate_p2++;
            else navi_affondate_p1++;
        }
    } else {
        // MANCATO
        cout << "MANCATO!" << endl;
        // Non sovrascriviamo le navi colpite, solo l'acqua
        if(GrigliaDif[y][x] == '.') GrigliaDif[y][x] = 'O';
        RadarAtt[y][x] = 'O';
    }
    system("pause");
}

int main(){
    Genera_griglie();
    Carica_navi();

    // Setup P1
    Set_navi(0);
    // Setup P2
    Set_navi(1);

    int turno = 0;
    while(Check_vittoria()){
        system("cls");
        Turno_Attacco(turno);
        turno = (turno == 0) ? 1 : 0; // Cambio turno
    }

    system("cls");
    cout << "GAME OVER!" << endl;
    if(navi_affondate_p2 >= Navi.size()) cout << "Vince Giocatore 1!" << endl;
    else cout << "Vince Giocatore 2!" << endl;

    system("pause");
    return 0;
}
