/*
    due mat int, n n
    confronto elementi di coordinate uguali e --> unaltra mat il max
    della nuova mat:
    max pos riga
    min pos riga

*/
#include <iostream>
using namespace std;

int main(){
    int n, nmax, nmin;
    string posmax, posmin;
    cout << "Inserisci n: ";
    cin >> n;

    int mat1[n][n], mat2[n][n], mat3[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "Inserisci il numero in " << i << " " << j << ": ";
            cin >> mat1[i][j];
        }
    }cout << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "Inserisci il numero in " << i << " " << j << ": ";
            cin >> mat2[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            mat3[i][j] = (mat1[i][j]>mat2[i][j]) ? mat1[i][j] : mat2[i][j];
        }
    }

    cout << "Mat 3:" << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << mat3[i][j] << "\t";
        }
        cout << endl;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j==0){
                nmax = mat3[i][j];
                nmin = mat3[i][j];
                posmax = i + " " + j;
                posmin = i + " " + j;
            }
            if(mat3[i][j]>nmax){
                nmax = mat3[i][j];
                posmax = i + " " + j;
            }
            if(mat3[i][j]<nmin){
                nmin = mat3[i][j];
                posmin = i + " " + j;
            }
        }
        cout << "Max: " << nmax << " Pos: " << posmax << endl;
        cout << "Min: " << nmin << " Pos: " << posmin << endl;
    }

    system("pause");
    return 0;
}
