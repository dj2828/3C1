/*
    dato un vettore di cognomi con associato un vettore che contiene gli stipendi
    max
    min
    media
    divisibile per 23
*/
#include <iostream>
using namespace std;

int main(){
    int n, maxn, minn, somma=0, div=0;
    cout << "Inserisci il numero dei cognomi: ";
    cin >> n;
    string Cognomi[n];
    int Stipendi[n];

    for(int i = 0; i < n; i++){
        cout << "Inserisci il " << i+1 << " cognome: ";
        cin >> Cognomi[i];
        cout << "Inserisci lo stipendio: ";
        cin >> Stipendi[i];
    }

    for (int i = 0; i < n; i++){
        if(i == 0){
            maxn = Stipendi[i];
            minn = Stipendi[i];
        }else if(Stipendi[i] > maxn)
            maxn = Stipendi[i];
        else if(Stipendi[i] < minn)
            minn = Stipendi[i];
        somma += Stipendi[i];
        if(Stipendi[i]%23==0) div++;
    }

    cout << "Lo stipendio massimo \212 di: " << maxn << endl;
    cout << "Lo stipendio minimo \212 di: " << minn << endl;
    cout << "Lo stipendio medio \212 di: " << (float)somma/n << endl;
    cout << "Gli stipendi divisibili per 23 sono: " << div << endl;
    

    system("pause");
    return 0;
}
