/*
    matrice int di n righe m colonne, caricata e visualizzata
    controllare se allinterno della matrice sono presenti almeno una volta
    i numeri 13, 12, 25.
    se si cout << "Grazie JC"
    altrimenti "Non vivi nel'universo 0"

    ricopiare tutti i numeri pari in un vettore
    dispari
*/
#include <iostream>
using namespace std;

int main(){
    int n, m, jc=1, ip=0, id=0;
    cout << "Inserisci le righe della matrice: ";
    cin >> n;
    cout << "Inserisci le colonne della matrice: ";
    cin >> m;
    int Mat[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << "Inserisci il valore in " << i << ", " << j << ": ";
            cin >> Mat[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << Mat[i][j] << "\t";
        }
        cout << endl;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(Mat[i][j]==13 || Mat[i][j]==12 || Mat[i][j]==25){
                jc++;
            }
        }
    }
    if(jc>=3)
        cout << "Grazie JC" << endl;
    else
        cout << "Non vivi nel'universo 0" << endl;

    // pari dispari
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(Mat[i][j]%2==0)
                ip++;
            else
                id++;
        }
    }
    int Pari[ip], Disp[id];
    ip=0, id=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(Mat[i][j]%2==0){
                Pari[ip] = Mat[i][j];
                ip++;
            }
            else{
                Disp[id] = Mat[i][j];
                id++;
            }
        }
    }
    cout << "Pari: ";
    for(int i=0; i<ip; i++){
        cout << Pari[i] << " ";
    }
    cout << endl << "Dispari: ";
    for(int i=0; i<id; i++){
        cout << Disp[i] << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}
