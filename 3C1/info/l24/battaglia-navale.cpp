#include <iostream>
#include <vector>
#include <array>
using namespace std;

const int grandezza_griglia = 3;
char P1[grandezza_griglia][grandezza_griglia], P2[grandezza_griglia][grandezza_griglia];
const int n1=1, n2=0, n3=0, n4=0, n5=0;
vector<int> Navi;

void Carica_navi(){
    for(int i=0; i<n1; i++)
        Navi.push_back(1);
    for(int i=0; i<n2; i++)
        Navi.push_back(2);
    for(int i=0; i<n3; i++)
        Navi.push_back(3);
    for(int i=0; i<n4; i++)
        Navi.push_back(4);
    for(int i=0; i<n5; i++)
        Navi.push_back(5);
    return;
}

void Genera_griglie(){
    int k = 0;
    char (*A)[grandezza_griglia];
    do{
        if(k == 0) A = P1;
        else A = P2;
        for(int i=0; i<grandezza_griglia; i++){
            for(int j=0; j<grandezza_griglia; j++){
                A[i][j] = '0';
            }
        }
        k++;
    }while(k<2);
}

void Disp(int player){
    char (*A)[grandezza_griglia];
    if(player == 0) A = P1;
    else A = P2;
    for(int i=0; i<grandezza_griglia+1; i++){
        if(i==0){
            for(int j=0; j<grandezza_griglia; j++){
                if(j==0) cout << "   ";
                cout << j << " ";
            }
            cout << endl;
            continue;
        }
        cout << i-1 << "| ";
        for(int j=0; j<grandezza_griglia; j++){
            cout << A[i-1][j] << " ";
        }
        cout << endl;
    }
}

bool Disp_navi(){
    if(Navi.size() == 0) return false;
    for(int i=0; i<Navi.size(); i++){
        cout << i << " ";
        for(int j=0; j<Navi[i]; j++)
            cout << "X";
        cout << endl;
    }
    return true;
}

vector<array<int,2>> Trova_cordinate(int x, int y, int direzione, int lunghezza){
    vector<array<int,2>> pos;
    pos.resize(lunghezza);
    switch(direzione){
    case 0:
        pos[0][0] = y;
        pos[0][1] = x;
        break;
    case 1:
        for(int i=0; i<lunghezza; i++){
            pos[i][0] = y+i;
            pos[i][1] = x;
        }
        break;
    case 2:
        for(int i=0; i<lunghezza; i++){
            pos[i][0] = y-i;
            pos[i][1] = x;
        }
        break;
    case 3:
        for(int i=0; i<lunghezza; i++){
            pos[i][0] = y;
            pos[i][1] = x+i;
        }
        break;
    case 4:
        for(int i=0; i<lunghezza; i++){
            pos[i][0] = y;
            pos[i][1] = x-i;
        }
        break;
    }
    return pos;
}

bool Check_cordinate_set_valide(vector<array<int,2>> pos, int player){
    char (*A)[grandezza_griglia];
    if(player == 0) A = P1;
    else A = P2;
    for(int i=0; i<pos.size(); i++){
        for(int j=0; j<2; j++){
            if(pos[i][j]>10 || pos[i][j]<=0) return false;
            if(A[i][j] != '0') return false;
        }
    }
    return true;
}

bool Metti_nave(int x, int y, int direzione, int numero_nave, int player){
    char (*A)[grandezza_griglia];
    if(player == 0) A = P1;
    else A = P2;
    vector<array<int,2>> cordinate = Trova_cordinate(x, y, direzione, Navi[numero_nave]);
    if(!Check_cordinate_set_valide(cordinate, player)){
        cout << "Riprovare qualcosaltro" << endl;
        return false;
    }
    for(int i=0; i<cordinate.size(); i++){
        A[cordinate[i][0]][cordinate[i][1]] = '0' + Navi[numero_nave];
    }
    Navi.erase(Navi.begin() + numero_nave);
    return true;
}

void Set_navi(int player){
    int numero_nave, x, y, direzione=0;
    system("cls");
    cout << "Giocatore " << player+1 << endl;
    do{
        Disp(player);
        if(!Disp_navi()) return;
        cout << "Che nave vuoi? ";
        cin >> numero_nave;
        cout << "X: ";
        cin >> x;
        cout << "Y: ";
        cin >> y;
        if(Navi[numero_nave] != 1){
            cout << "Inserisci la direzione(1-su, 2-giu, 3-destra, 4-sinistra): ";
            cin >> direzione;
        }
    }while(Metti_nave(x, y, direzione, numero_nave, player));
}

int main(){
    int player = 0;
    Genera_griglie();

    Carica_navi();
    Set_navi(player);

    player = 1;
    Carica_navi();
    Set_navi(player);

    system("pause");
    return 0;
}