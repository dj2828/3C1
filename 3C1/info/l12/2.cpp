/*
chiedi in in un numero e scrivi quante volte è presente questo numero
pari dispari
*/
#include <iostream>
using namespace std;

int main(){
    int n, pari=0, dispari=0, c, trovato=0;

    cout << "Inserisci il numero dei numeri: ";
    cin >> n;

    int Numeri[n];
    for(int i=0; i<n; i++){
        cout << "Inserisci il numero: ";
        cin >> Numeri[i];

        if(Numeri[i]%2==0)
            pari++;
        else
            dispari++;
    }

    cout << "Numeri: ";
    for(int i=0; i<n; i++){
        cout << Numeri[i] << " ";
    }
    cout << endl;

    cout << "Inserisci il numero da cercare: ";
    cin >> c;
    for(int i=0; i<n; i++){
        if(Numeri[i]==c){
            trovato++;
        }
    }

    cout << "Pari: "<<pari<<endl;
    cout << "Dispari: "<<dispari<<endl;
    cout << "Numero inserito: " <<trovato<<endl;

    system("pause");
    return 0;
}
