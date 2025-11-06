/*
dati due array int dimensione uguale
fare la somma degli elementi di medesima posizione e memorizzare
il risultato nel vettore somma

crea un quarto vettore in cui vengono concatenati i primi 2

quale vettore ha il valore assoluto piu grande
*/
#include <iostream>
using namespace std;

int main(){
    int n, maxn, minn, num;

    cout << "Inserisci il numero dei numeri: ";
    cin >> n;

    int A1[n];
    int A2[n];
    int Somma[n];
    int Concat[n*2];

    // input
    cout << "Primo array: " <<endl;
    for(int i=0; i<n; i++){
        cout << "Inserisci il numero: ";
        cin >> A1[i];
    }
    cout << endl << "Secondo array: " <<endl;
    for(int i=0; i<n; i++){
        cout << "Inserisci il numero: ";
        cin >> A2[i];
    }

    // out array
    cout << endl << "Primo array: ";
    for(int i: A1){
        cout << i << ", ";
    }
    cout << endl << "Secondo array: ";
    for(int i: A2){
        cout << i << ", ";
    }

    // somma tra gli array
    for(int i=0; i<n; i++){
        Somma[i] = A1[i]+A2[i];
    }

    // concatenazione array
    for(int i=0; i<n; i++){
        Concat[i] = A1[i];
    }
    for(int i=0; i<n; i++){
        Concat[i+n] = A2[i];
    }

    // massimo minimo
    for(int i=0; i<n; i++){
        if(i==0){
            maxn=1;
            minn=1;
        }
        if(A1[i]<0)
            num = A1[i]*-1;
        else
            num = A1[i];

        if(num > maxn)
            maxn=1;
        else if (num < minn)
            minn=1;
    }
    for(int i=0; i<n; i++){
        if(A2[i]<0)
            num = A2[i]*-1;
        else
            num = A2[i];

        if(num > maxn)
            maxn=2;
        else if (num < minn)
            minn=2;
    }

    // fase output
    cout << endl << endl << "Somme: ";
    for(int i: Somma){
        cout << i << ", ";
    }
    cout << endl << "Concatenato: ";
    for(int i: Concat){
        cout << i << ", ";
    }
    cout <<endl<< "L'array con il numero con il valore assoluto piu grande \212 l'array "<<maxn << endl;
    cout << "L'array con il numero con il valore assoluto piu piccolo \212 l'array "<<minn << endl;


    system("pause");
    return 0;
}
