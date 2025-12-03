/*
dati due vettori, il primo con nomi, il secondo con stipendi
carica i vettori

cout
chi quadagna di piu
stipendio termina con 1
*/
#include <iostream>
using namespace std;

int main(){
    int n, maxs;

    cout << "Inserisci il numero di persone: ";
    cin >> n;

    string Nomi[n], maxn;
    int S[n];

    for(int i=0; i<n; i++){
        cout << "Nome " << i << ": ";
        cin >> Nomi[i];
        cout << "Stipendio " << i << ": ";
        cin >> S[i];
    }

    for(int i=0; i<n; i++){
        cout << endl;
        cout << Nomi[i];
        cout << S[i];
    }
    cout << endl << endl;

    for(int i=0; i<n; i++){
        if(i==0){
            maxn = Nomi[i];
            maxs = S[i];
        }
        if(S[i]>maxs){
            maxn = Nomi[i];
            maxs = S[i];
        }
    }

    for(int i=0; i<n; i++){
        if ((S[i]-1)%10==0){
            cout << "Stipendio che finisce con 1: " << endl;
            cout << Nomi[i] << ": " << S[i] << endl;
        }
    }
    cout << "Massimo: " << maxn << ", " << maxs <<endl;

    system("pause");
    return 0;
}
