/*
input array, visualizzalo
input intervallo di inizio e fine (a,b)
trova il max e pos nel intervallo
*/
#include <iostream>
using namespace std;

int main(){
    int n, maxn, maxpos, a, b;
    cout << "Inserisci la grandezza dell' Array: ";
    cin >> n;
    int A[n];
    for(int i=0; i<n; i++){
        cout << "Inserisci il "<<i+1<<" valore: ";
        cin >> A[i];
    }
    cout << "Posizione: \t";
    for(int i=0; i<n; i++){
        cout << i << "\t";
    }
    cout << endl<< "Valori: \t";
    for(int i: A){
        cout << i << "\t";
    }

    cout << endl << endl << "Inserisci l'inizio dell'intervallo: ";
    cin >> a;
    cout << "Inserisci la fine dell'intervallo: ";
    cin >> b;

    for(int i=a; i<=b; i++){
        if(i==a || A[i]>maxn){
            maxn=A[i];
            maxpos=i;
        }
    }

    cout << "Valore massimo: "<<maxn << " , Posizione: "<<maxpos<<endl;

    system("pause");
    return 0;
}
