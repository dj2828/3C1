/*
dati due vettori di stessa grandezz, dopo averli caricati e visualizzati
confronta i numeri di medesima posizione e dice se maggiore o minore
esempio:
3-5-8
2-6-7
apparira nel cout:
3 è maggiore di 2
5 è minore di 6
8 è maggiore di 7

se il n del primo vettore è divisibile per il secondo
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int n, rmi, rma;
    srand(time(NULL));

    cout << "Inserisci il numero dei numeri: ";
    cin >> n;

    cout << "Inserisci il numero minimo del range: ";
    cin >> rmi;
    cout << "Inserisci il numero massimo del range: ";
    cin >> rma;

    int A1[n], A2[n];

    for(int i=0; i<n; i++){
        A1[i] = rmi+rand()%(1+rma-rmi);
        A2[i] = rmi+rand()%(1+rma-rmi);
    }

    for(int i: A1)
        cout << i << " ";
    cout << endl;

    for(int i: A2)
        cout << i << " ";
    cout << endl<<endl;

    for(int i=0; i<n; i++){
        if(A1[i]==A2[i])
            cout << A1[i] << " == " << A2[i];
        else if(A1[i]>A2[i])
            cout << A1[i] << " > " << A2[i];
        else
            cout << A1[i] << " < " << A2[i];

        if(A1[i]%A2[i]==0)
            cout << ", \212 divisibile" << endl;
        else
            cout << ", NON \212 divisibile" << endl;
    }

    system("pause");
    return 0;
}
