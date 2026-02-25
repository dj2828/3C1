#include <iostream>
using namespace std;
/*
    prendo in input n, Mat, A
    inizializzo int ris a 0, dove salverò le rispostea
    faccio la formula ris[i] = somma(matrice[i][j]*vettore[j]
    stampo i ris
*/
int main(){
    int n;
    cout << "N: ";
    cin >> n;
    int Mat[n][n];
    int A[n], ris[n] = {};

    cout << "Mat: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << i << ", " << j << ": ";
            cin >> Mat[i][j];
        }
    }
    cout << "Vettore: "<< endl;
    for(int i=0; i<n; i++){
        cout << i << ": ";
        cin >> A[i];
    }

    for(int i=0; i<n; i++){ // calcolo
        for(int j=0; j<n; j++){
            ris[i] += Mat[i][j] * A[j];
        }
    }

    cout << endl;
    for(int i=0; i<n; i++){
        cout << i << ": " << ris[i] << endl;
    }


    system("pause");
    return 0;
}
