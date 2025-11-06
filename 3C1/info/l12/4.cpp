/*
dato un vettore di numeri interi dopo averlo caricato in modo randomico
con numeri che vanno da 1 a 90
estrarre tutti i numeri pari e ricopiarli in un vettore chiamato pari,
ripeti l'operazione per i numeri dispari.
ricercare nel vettore principale se esistono 2 celle adiacenti
che hanno i valori 19 - 72, se vero appare la scritta "nuovo record
del mondo"
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int main(){
    int n, prec, attu, pari=0, dispari=0, ipari=0, idispari=0;

    srand(time(NULL));
    cout << "Inserisci il numero dei numeri: ";
    cin >> n;

    int A[n];

    for(int i=0; i<n; i++){
        A[i] = 1+rand()%90;
    }

    cout << "Numeri generati: ";
    for(int i: A){
        cout << i << ", ";
    }
    cout << endl << endl;

    for(int i: A){
        if(i%2==0)
            pari++;
        else
            dispari++;
    }
    int Pari[pari], Dispari[dispari];
    for(int i: A){
        if(i%2==0)
            Pari[ipari++]=i;
        else
            Dispari[idispari++]=i;
    }

    for(int i=0; i<n; i++){
        prec = A[i-1];
        attu = A[i];

        if(prec==19 && attu==72)
            cout << "Nuovo record del mondo!"<<endl;
    }

    cout << "Pari: ";
    for(int i: Pari){
        cout << i << ", ";
    }
    cout <<endl<< "Dispari: ";
    for(int i: Dispari){
        cout << i << ", ";
    }
    cout <<endl;

    system("pause");
    return 0;
}
