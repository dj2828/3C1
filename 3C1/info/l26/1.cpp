/*
    dato un vettore int, cariccato e visualizzato,
    chiedere un numero e contare quante volte il numero inserito e +-1 è presente nel vettore
*/
#include <iostream>
using namespace std;

int main(){
    int n, numero_da_cercare, trovato=0;
    cout << "Inserisci la grandezza del vettore: ";
    cin >> n;
    int A[n];

    for(int i=0; i<n; i++){
        cout << "Inserisci il "<<i+1<<" numero: ";
        cin >> A[i];
    }
    for(int i: A)
        cout << i;
    cout << endl;

    cout << "Inserisci il numero da cercare: ";
    cin >> numero_da_cercare;

    for(int i=0; i<n; i++){
        if(A[i] == numero_da_cercare || A[i] == numero_da_cercare+1 || A[i] == numero_da_cercare-1)
            trovato++;
    }

    cout << "Il numero e +-1 trovato " << trovato << " volte" << endl;

    system("pause");
    return 0;
}
