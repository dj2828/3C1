/*
Chiedere all’utente di inserire N numeri interi, salvarli in un vettore e stamparli.
Calcolare e stampare la somma di tutti gli elementi di un vettore.
Calcolare la media degli elementi contenuti in un vettore di numeri interi.
Trovare il valore massimo e il valore minimo presenti nel vettore.
Contare quanti numeri pari e quanti dispari sono presenti nel vettore.
*/
#include <iostream>
using namespace std;

int main(){
    int n, somma=0, maxn, minn, pari=0, disp=0;
    float media;
    cout << "Inserisci il numero dei numeri: ";
    cin >> n;
    int A[n];

    for(int i=0; i<n; i++){
        cout << "Inserisci il " << i << " numero: ";
        cin >> A[i];
    }
    for(int i=0; i<n; i++){
        cout << A[i];
    }
    cout << endl;

    for(int i=0; i<n; i++){
        somma += A[i];
    }
    media = (float)somma/n;

    for(int i=0; i<n; i++){
        if(i==0){
            maxn = A[i];
            minn = A[i];
        }
        if(A[i]>maxn)
            maxn = A[i];
        else if(A[i]<minn)
            minn = A[i];
    }

    for(int i=0; i<n; i++){
        if(A[i]%2==0)
            pari++;
        else
            disp++;
    }

    cout << "Somma: " << somma << endl;
    cout << "Media: " << media << endl;
    cout << "Max: " << maxn << " Min: " << minn << endl;
    cout << "Pari: " << pari << " Dispari: " << disp << endl;

    system("pause");
    return 0;
}
