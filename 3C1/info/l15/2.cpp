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
    int n, sommaEta=0, sommaH=0, maxE, maxH, minH, minE;
    float mediaEta, mediaH;
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

    for(int i=0; i<n; i+=2){
        sommaEta += A[i];
    }
    mediaEta = (float)sommaEta/n/2;

    for(int i=1; i<n; i+=2){
        sommaH += A[i];
    }
    mediaH = (float)sommaH/n/2;

    for(int i=1; i<n; i+=2){
        if(i==1){
            maxE = A[i-1];
            maxH = A[i];
        }
        if(A[i]>maxH){
            maxE = A[i-1];
            maxH = A[i];
        }
    }

    for(int i=0; i<n; i+=2){
        if(i==0){
            minE = A[i];
            minH = A[i+1];
        }
        if(A[i]<minE){
            minE = A[i];
            minH = A[i+1];
        }
    }

    cout << "Eta' media: " << mediaEta << endl;
    cout << "Altezza media: " << mediaH << endl;
    cout << "Altezza massima: " << maxH << ", Eta': " << maxE << endl;
    cout << "Eta' minima: " << minE << ", Altezza: " << minH << endl;

    system("pause");
    return 0;
}
