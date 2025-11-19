/*
vettore altezze e eta
eta-altezza

eta media
h media
chi è il piu alto && eta
chi piu giovane && h
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Inserisci il numero delle persone: ";
    cin >> n;
    n = n*2;

    int A[n];

    for(int i=0; i<n; i+=2){
        cout << "Inserisci l'eta: ";
        cin >> A[i];
        cout << "Inserisci l'altezza: ";
        cin >> A[i+1];
    }

    system("pause");
    return 0;
}
