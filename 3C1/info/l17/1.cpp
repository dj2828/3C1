/*
dato un vettore contenente nomi di libri
un nettore contenente il numero di copie vendute (Milioni)
dopo averli visualizzati
calcola gli incassi dei singoli libri (prezzo viene generato casualmente, range 15-25)
cout:
nome libro
copie vendute
incasso totale
libro piu venduto, anche quello che ha incassato di piu?
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int n;
    cout << "Inserisci il numero dei libri: ";
    cin >> n;

    string N[n], maxcS, maxsS;
    float C[n], maxc, maxs;
    int P[n];

    for(int i=0; i<n; i++){
        cout << "Inserisci il nome del "<<i+1<<" libro: ";
        cin >> N[i];
        cout << "Inserisci il numero di copie vendute (Milioni): ";
        cin >> C[i];
        P[i] = 15+rand()%11;

        if(i==0){
            maxcS = N[i];
            maxsS = N[i];
            maxc = C[i];
            maxs = P[i]*C[i];
        }
        if(C[i] > maxc){
            maxcS = N[i];
            maxc = C[i];
        }
        if(C[i]*P[i] > maxs){
            maxsS = N[i];
            maxs = P[i]*C[i];
        }
    }

    for(int i=0; i<n; i++){
        cout << N[i] << "\t" << C[i] <<endl;
    }
    cout << endl;

    for(int i=0; i<n; i++){
        cout << "Nome: \t" << N[i] << endl;
        cout << "Copie vendute: \t" << C[i] <<"M" << endl;
        cout << "Incasso: \t" << C[i]*P[i] <<"M"<< endl;
    }

    cout << endl << "Libro piu venduto: " << maxcS << endl;
    if(maxcS == maxsS)
        cout << "E' anche il libro con incassi piu alti" << endl;

    system("pause");
    return 0;
}
