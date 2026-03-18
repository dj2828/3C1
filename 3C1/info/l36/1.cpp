/*
    data una mat int, caricata visualizzata
    menu:
        somma
        somma riga input
        type mat
        cerca quante volte numero input
        % n input (vedi punto 4 (?))
        copia dispari in mat2, disp
*/
#include <iostream>
using namespace std;

int r = 0, c = 0;
int mat[10][10] = {};
int matDisp[10][10] = {};

void inputMat(){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << "i" << i << " j" << j << ": ";
            cin >> mat[i][j];
        }
    }
}

void disp(int mat[10][10]){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
}

int menu(){
    disp(mat);
    int n;

    cout << "1) Somma" << endl;
    cout << "2) Somma riga input" << endl;
    cout << "3) Type mat" << endl;
    cout << "4) cerca quante volte numero input" << endl;
    cout << "5) % di (4)" << endl;
    cout << "6) copia dispari in mat2" << endl;
    cin >> n;
    system("cls");

    return n;
}

int somma(){
    int somma = 0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            somma += mat[i][j];
        }
    }
    return somma;
}

int sommaRiga(int riga){
    int somma = 0;
    for(int j=0; j<c; j++){
        somma += mat[riga][j];
    }

    return somma;
}

string typeMat(){
    if(r == c) return "quadrata";
    else return "rettangolare";
}

int cerca(int n){
    int somma = 0;

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(mat[i][j] == n) somma++;
        }
    }

    return somma;
}

void copyMatDisp(){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            matDisp[i][j] = (mat[i][j]%2!=0) ? mat[i][j] : 0;
        }
    }
}

int main(){
    bool esplodi;
    int trovato = 0;

    cout << "R: ";
    cin >> r;
    cout << "C: ";
    cin >> c;

    inputMat();

    while(!esplodi){
        switch(menu()){
        case 1:
            cout << "Somma: " << somma() << endl;
            break;
        case 2:
            int riga;
            cout << "Riga: ";
            cin >> riga;
            cout << "Somma di " << riga << ": " << sommaRiga(riga) << endl;
            break;
        case 3:
            cout << typeMat() << endl;
            break;
        case 4:
            int n;
            cout << "N: ";
            cin >> n;
            trovato = cerca(n);
            cout << n << " trovato " << trovato << " volte" << endl;
            break;
        case 5:
            cout << (float)trovato*(r*c) << "%" << endl;
            break;
        case 6:
            copyMatDisp();
            disp(matDisp);
            break;
        default:
            esplodi = true;
        }
    }

    system("pause");
    return 0;
}
