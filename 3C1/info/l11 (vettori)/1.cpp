#include <iostream>
using namespace std;
/*
dato in input un vettore che contiene le et� di n giocatori
dopo averli caricato e visualizzato calcolare somma e media
*/
int main(){
    int n, somma=0;
    float media;

    cout << "Inserisci il numero dei giocatori: ";
    cin >> n;
    int Eta[n];

    for(int i=0; i<n; i++){
        cout << "Inserisci l'eta "<<i+1<<" : ";
        cin >> Eta[i];
    }

    for(int i=0; i<n; i++){
        cout << "Eta "<<i+1<<" : " << Eta[i] << endl;
    }

    for(int i=0; i<n; i++){
        somma += Eta[i];
    }
    media = (float) somma / n;

    cout << "Somma: "<<somma<<endl;
    cout << "Media: " << media<<endl;

    system("pause");
    return 0;
}
