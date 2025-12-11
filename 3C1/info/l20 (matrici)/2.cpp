/*
data una matrice ordine n
carica e visualizzata

pari dispare per
positivi negativi
max min e cordinate
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    srand(time(NULL));
    // system("color ac");
    int n, pari=0, disp=0, maxn, minn, pos=0, neg=0, cerca, inizio, fine;
    int posmax[2], posmin[2];

    cout << "Inserisci la dimensione della matrice ordinata: ";
    cin >> n;
    cout << "Inserisci il numero da cercare: ";
    cin >> cerca;
    cout << "Inserisci inizio intervallo: ";
    cin >> inizio;
    cout << "Inserisci fine intervallo: ";
    cin >> fine;

    int Mat[n][n];

    // input
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            Mat[i][j] = inizio+rand()%(fine-inizio+1);
        }
    }

    // visualizzazione
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << Mat[i][j] << "\t";
        }
        cout << endl;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(Mat[i][j]%2==0)
                pari++;
            else
                disp++;

            if(Mat[i][j]>0)
                pos++;
            else
                neg++;

            if(i==0 && j==0){
                maxn = Mat[i][j];
                posmax[0] = i;
                posmax[1] = j;
                minn = Mat[i][j];
                posmin[0] = i;
                posmin[1] = j;

            }
            if(Mat[i][j]>maxn){
                maxn = Mat[i][j];
                posmax[0] = i;
                posmax[1] = j;
            }
            else if(Mat[i][j]<minn){
                minn = Mat[i][j];
                posmin[0] = i;
                posmin[1] = j;
            }

            if(Mat[i][j]==cerca)
                cout << "Numero cercato trovato in: " << i << " " << j << endl;
        }
    }

    cout << "Pari: " << pari << " " << (float)pari/(n*n)*100 << endl;
    cout << "Dispari: " << disp << " " << (float)disp/(n*n)*100 << endl;
    cout << "Positivi: " << pos << endl;
    cout << "Negativi: " << neg << endl;
    cout << "Max: " << maxn << " (" << posmax[0] <<" "<< posmax[1] << ")" << endl;
    cout << "Min: " << minn << " (" << posmin[0] <<" "<< posmin[1] << ")" << endl;

    system("pause");
    return 0;
}
