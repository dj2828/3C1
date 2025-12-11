/*
int mat caricata e visualizzata
somma e media
*/
#include <iostream>
// #include "C:\Users\mattia.fausti\Desktop\info\l20 ()\rand.cpp"
using namespace std;

int main(){
    int r, c, somma=0;

    cout << "Inserisci la grandezza della matrice:"<<endl;
    cout << "Righe: ";
    cin >> r;
    cout << "Colonna: ";
    cin >> c;

    int Mat[r][c];

    // input
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            /*
            cout << "Posizione " << i << " " << j << ": ";
            cin >> Mat[i][j];
            */
            Mat[i] = random(j);
        }
    }

    // visualizzazione
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << Mat[i][j] << "\t";
        }
        cout << endl;
    }

    // somma
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            somma += Mat[i][j];
        }
    }

    // output
    cout << "Somma: " << somma << endl;
    cout << "Media: " << (float)somma/r*c << endl;

    system("pause");
    return 0;
}
