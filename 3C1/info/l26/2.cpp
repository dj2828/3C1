/*
    vettore char
    vocale = 1; consonante = 0
    quello in decimale
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, dec=0;
    cout << "Inserisci il numero dei caratteri: ";
    cin >> n;
    char Caratteri[n];
    int Binario[n];

    for(int i=0; i<n; i++){
        cout << "Inserisci il " << i+1 << " carattere: ";
        cin >> Caratteri[i];
    }

    for(char i: Caratteri)
        cout << i;
    cout << endl;

    for(int i=0; i<n; i++){
        Binario[i] = (Caratteri[i]=='a'||Caratteri[i]=='e'||Caratteri[i]=='i'||Caratteri[i]=='o'||Caratteri[i]=='u')? 1 : 0;
        cout << Binario[i] << " ";
    }
    cout << endl;

    for(int i=0; i<n; i++)
        dec += Binario[i]*pow(2, n-i-1);

    cout << "Numero decimale: " << dec << endl;

    system("pause");
    return 0;
}
