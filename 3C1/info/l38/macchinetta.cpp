#include <iostream>
#include <iomanip> // Necessario per setw e left
using namespace std;

const int PIENO_MAX = 8;
const int PIENO_MIN = 3;
const int RIGHE = 4;
const int COLONNE = 3;
float saldo = 1;

string Nomi[RIGHE][COLONNE] = {{"Acqua naturale","Acqua frizzante","Acqua naturale"},
                               {"Acqua frizzante","Acqua naturale","Acqua naturale"},
                               {"Coca-Cola","Coca-Cola","Fanta"},
                               {"Kinder pinguino","Biscotto generico","Ringo cioccolata"}};
int Quantita[RIGHE][COLONNE];
float Prezzi[RIGHE][COLONNE] = {{0.55, 0.55, 0.55},
                                {0.55, 0.55, 0.55},
                                {1.25, 1.25, 1.05},
                                {1.5, 1.2, 1.23}};

bool ricarica = false;

void disp(){
    const int width = 30;
    for (int i = -1; i < RIGHE; i++) {
        for (int j = -1; j < COLONNE; j++) {
            if (i == -1) {
                // Riga delle intestazioni (0, 1, 2)
                if (j == -1) cout << setw(5) << " ";
                else cout << left << setw(width) << j;
            }
            else if (j == -1) {
                // Colonna degli indici (0, 1, 2, 3)
                cout << left << setw(5) << i;
            }
            else {
                // Prodotto e Prezzo
                string cella = Nomi[i][j] + " (" + to_string(Prezzi[i][j]).substr(0,4) + ")" + "[" + to_string(Quantita[i][j]) + "]";
                cout << left << setw(width) << cella;
            }
        }
        cout << endl;

        // Linea separatrice opzionale per pulizia visiva
        if (i == -1) cout << string(width * 3 + 5, '-') << endl;
    }
}

int menu(){
    int scelta;
    cout << "Saldo: " << saldo << endl;
    cout << endl << "1) Compra" << endl;
    cout << "2) Ricarica saldo" << endl;
    cout << "3) Esci" << endl;
    if(ricarica) cout << "4) Ricarica" << endl;
    cin >> scelta;
    return scelta;
}

void compra(){
    int riga, colonna;
    cout << "Dove?" << endl;
    cout << "Riga: ";
    cin >> riga;
    cout << "Colonna: ";
    cin >> colonna;
    system("cls");

    float soldi_rimanenti = saldo - Prezzi[riga][colonna];
    if(Quantita[riga][colonna] < 1)
        cout << "La quantità non basta per essere erogata" << endl;
    else if(soldi_rimanenti < 0)
        cout << "SALDO INSUFFICIENTE: Mancanti " << soldi_rimanenti*-1 << endl;
    else{
        cout << "EROGAZIONE " << Nomi[riga][colonna] << " IN CORSO..." << endl;
        Quantita[riga][colonna]--;
        saldo = soldi_rimanenti;
        if(Quantita[riga][colonna] <= PIENO_MIN){
            cout << "ATTENZIONE! " << Nomi[riga][colonna] << " ARRIVATO A " << Quantita[riga][colonna] << endl;
            ricarica = true;
        }
    }
}

void ricaricaSoldi(){
    float soldi;
    cout << "Quanti soldi vuoi ricaricare? ";
    cin >> soldi;

    saldo += soldi;
}

void ricaricaCibo(){
    int k=1;
    system("cls");
    for(int i=0; i<RIGHE; i++){
        for(int j=0; j<COLONNE; j++){
            if(Quantita[i][j] <= PIENO_MIN) cout << k++ << " - " << Nomi[i][j] << ": " << Quantita[i][j] << endl;
        }
    }
    cout << "RICARICAMENTO IN CORSO..." << endl;
    for(int i=0; i<RIGHE; i++){
        for(int j=0; j<COLONNE; j++){
            if(Quantita[i][j] <= PIENO_MIN) Quantita[i][j] = PIENO_MAX;
        }
    }
    ricarica = false;
}

void initMacchinetta(){
    for(int i=0; i<RIGHE; i++){
        for(int j=0; j<COLONNE; j++){
            Quantita[i][j] = PIENO_MAX;
        }
    }
}

int main(){
    initMacchinetta();

    int scelta;
    do{
        disp();
        scelta = menu();
        if(scelta==1){
            compra();
        }
        else if(scelta==2){
            ricaricaSoldi();
        }
        else if(scelta==4){
            ricaricaCibo();
        }
    }while(scelta!=3);


    system("pause");
    return 0;
}
