/*
    vettore string con cognome nome di n alunni, ad ogni alunno sono associati 7 voti memorizzati in una matrice.
    topolino - 1 2 3 4 7 6 7.
    in un nuovo vettore viene memorizzato lesito dello scrutinio: promosso, bocciato, rimandato.
    promosso TUTTI >= 6
    rimandati max = 3
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Inserisci il numero degli alunni: ";
    cin >> n;
    string Nomi[n];
    int Voti[n][7];

    for(int i=0; i<n; i++){
        cout << "Inserisci il " << i << " nome: ";
        cin >> Nomi[i];
    }
    for(int i=0; i<n; i++){
        cout << "Inserisci i voti di " << Nomi[i] << endl;
        for(int j=0; j<7; j++){
            cout << j << ": ";
            cin >> Voti[i][j];
        }
        cout << endl;
    }

    for(int i=0; i<n; i++){
        int insuf=0;
        cout << Nomi[i] << ": ";
        for(int j=0; j<7; j++){
            cout << Voti[i][j] << " ";
            if(Voti[i][j] < 6) insuf++;
        }
        cout << " ";
        if(insuf == 0) cout << "Promosso";
        else if(insuf <=3) cout << "Rimandato";
        else cout << "Bocciato";
        cout << endl;
    }

    system("pause");
    return 0;
}
