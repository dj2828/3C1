#include <iostream>
using namespace std;

/*
    faccio inserire all utente la grandezza del vettore e poi il vettore
    assegno alla posizione n-1-i al vettore inverso, cosi parte dallultima posizione e gli assegno il valore di Array
    poi stampo l' arrai invertito
*/

int main(){
    int n;
    // inserimento grandezza del vettore
    cout << "Inserisci la grandezza del vettore: ";
    cin >> n;
    char Array[n], ArrayI[n];

    // input Array
    for (int i=0; i<n; i++){
        cout << "Inserisci il carattere in pos " << i << ": ";
        cin >> Array[i];
    }

    // visualizzazione Array
    for(int i=0; i<n; i++){
        cout << Array[i] << "\t";
    }
    cout << endl;

    // inversione array
    for(int i=0; i<n; i++){
        ArrayI[n-1-i] = Array[i];
    }

    // output array invertito
    for(int i=0; i<n; i++){
        cout << ArrayI[i] << "\t";
    }
    cout << endl;

    system("pause");
    return 0;
}
