/*
dati 2 vettori di numeri int
sommare i singoli elementi di posizione opposta
confronta gli elementi di posizione opposta, e il maggiore viene messo in un nuovo vettore
il primo vettore viene diviso in 2 parti, stabilire il max e il min delle due meta
*/
#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Inserisci il numero dei numeri: ";
    cin >>n ;

    int A1[n], A2[n], Somma[n], maxn=n, Meta1[n], Meta2[n], maxMeta1, maxMeta2, minMeta1, minMeta2, iM1=0, iM2=0;

    cout << "Primo array" << endl;
    for(int i=0; i<n; i++){
        cout << "Inserisci il " << i+1 << " numero: ";
        cin >> A1[i];
    }

    cout << endl << "Secondo array" << endl;
    for(int i=0; i<n; i++){
        cout << "Inserisci il " << i+1 << " numero: ";
        cin >> A2[i];
    }

    // conta il numero di elementi che servono nel' array
    for(int i=0; i<n; i++){
        if(A1[i]==A2[n-i])
            maxn--;
    }

    int Max[maxn];

    for(int i=0; i<n; i++){
        Somma[i] = A1[i]+A2[n-i];
        if(A1[i]>A2[n-i])
            Max[i] = A1[i];
        else if(A2[n-i]>A1[i])
            Max[i] = A2[n-i];
    }
    
    // divisione array
    for(int i=0; i<n; i++){
        if(i < n/2)
            Meta1[iM1++] = A1[i];
        else
            Meta2[iM2++] = A1[i];
    }

    for(int i=0; i<n/2; i++){
        if(i==0){
            maxMeta1 = Meta1[i];
            minMeta1 = Meta1[i];
        }
        if(Meta1[i]>maxMeta1)
            maxMeta1 = Meta1[i];
        if(Meta1[i]<minMeta1)
            minMeta1 = Meta1[i];
    }
    for(int i=0; i<n/2; i++){
        if(i==0){
            maxMeta2 = Meta2[i];
            minMeta2 = Meta2[i];
        }
        if(Meta2[i]>maxMeta2)
            maxMeta2 = Meta2[i];
        if(Meta2[i]<minMeta2)
            minMeta2 = Meta2[i];
    }

    cout << endl << "Array delle somme: ";
    for(int i=0; i<n; i++){
        cout << "Somma " << i+1 << " numero: "<< Somma[i] <<endl;
    }
    cout << endl << "Array dei massimi: ";
    for(int i=0; i<maxn; i++){
        cout << Max[i] << " ";
    }
    
    cout << endl << "Meta1: Massimo " << maxMeta1 << ", Minimo " << minMeta1 << endl;
    cout << "Meta2: Massimo " << maxMeta2 << ", Minimo " << minMeta2 << endl;

    system("pause");
    return 0;
}
