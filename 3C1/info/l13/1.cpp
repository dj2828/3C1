/*
pag.146 libro
input array int, somma elementi
se presente la seq 12-11
se vero appare "Auguri buon compleanno Guene" solo una volta
altrimenti "Guene auguri lo stesso"
*/
#include <iostream>
using namespace std;

int main(){
    int n, somma=0, attuale, precedente;
    bool g;
    cout << "Inserisci la grandezza dell' Array: ";
    cin >> n;
    int A[n];
    for(int i=0; i<n; i++){
        cout << "Inserisci il "<<i+1<<" valore: ";
        cin >> A[i];
    }
    for(int i=0; i<n; i++){
        somma += A[i];
        attuale = A[i];
        if(i!=0)
            precedente = A[i-1];
        else
            continue;

        if(precedente==12 && attuale==11)
            g=true;
    }

    if(g)
        cout << "Auguri buon compleanno Guene" <<endl;
    else
        cout << "Guene auguri lo stesso" << endl;
    cout << "Somma: "<<somma<<endl;

    system("pause");
    return 0;
}
