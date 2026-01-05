/*
2. Chiedere all’utente di inserire N numeri interi, salvarli in un vettore e stamparli.

Contare quanti numeri sono:
• positivi
• negativi
• uguali a zero
Chiedere un numero all’utente e verificare se è presente nel vettore.
Stampare la posizione se trovato.
Invertire l’ordine degli elementi del vettore senza usare funzioni predefinite.
*/

#include <iostream>
using namespace std;

int main(){
    int n, pos=0, neg=0, zero=0, cerca, posizioneTrovata;
    bool trovato;
    cout << "Inserisci il numero dei numeri: ";
    cin >> n;

    int A[n], A2[n];

    cout << "Inserisci il numero da cercare: ";
    cin >> cerca;

    for(int i=0; i<n; i++){
        cout << "Inserisci il " << i << " numero: ";
        cin >> A[i];
    }

    for(int i=0; i<n; i++){
        cout << A[i] << "\t";
    }
    cout << endl;

    for (int i=0; i<n; i++){
        if(A[i]>0)
            pos++;
        else if(A[i]<0)
            neg++;
        else
            zero++;
        
        if (A[i] == cerca) {
            trovato = true;
            posizioneTrovata = i;
        }
    }

    for(int i=0; i<n; i++){
        A2[i] = A[n-i-1];
    }
    
    cout << "Positivi: " << pos << endl;
    cout << "Negativi: " << neg << endl;
    cout << "Zero: " << zero << endl;
    if (trovato) {
        cout << "Il numero " << cerca << " e' stato trovato in posizione: " << posizioneTrovata << endl;
    } else {
        cout << "Il numero " << cerca << " non e' presente nel vettore." << endl;
    }
    for(int i=0; i<n; i++){
        cout << A2[i] << "\t";
    }
    cout << endl;

    system("pause");
    return 0;
}