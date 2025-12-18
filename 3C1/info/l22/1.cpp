/*
    data una matrice di n righe (correntisti) e 12 colonne (mesi)
    inserisci i soldi che depositano/prelevano
    soldi=100
    random %61 -30

    totale per riga
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    srand(time(NULL));
    const bool debug=true;
    int n, somma;
    cout << "Inserisci il numero di righe: ";
    cin >> n;
    float Mat[n][12];
    string Nomi[n];

    for(int i=0; i<n; i++){
        if(debug){
            Nomi[i] = "sasso";
        }
        else{
            cout << "Inserisci il " << i+1 << " nome: ";
            cin >> Nomi[i];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<12; j++){
            Mat[i][j] = 30-rand()%61;
        }
    }

    cout << "\tGen\tFeb\tMar\tApr\tMag\tGiu\tLug\tAgo\tSet\tOtt\tNov\tDic\tTot"<<endl;
    for(int i=0; i<n; i++){
        somma=100;
        cout << Nomi[i];
        for(int j=0; j<12; j++){
            cout << "\t" << Mat[i][j];
            somma += Mat[i][j];
        }
        cout << "\t" << somma << endl;
    }

    system("pause");
    return 0;
}
