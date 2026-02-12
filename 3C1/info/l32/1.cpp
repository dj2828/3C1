/*
    vettore di n numeri (n>=9)
    in base a n, dichiarare una matrice che riesca a contenere gli elementi
*/
#include <iostream>
using namespace std;

int main(){
    int n, righe=1, colonne=1, k=0;
    do{
        cout << "Inserisci n: ";
        cin >> n;
    }while(n<9);

    int A[n];

    for(int i=0; i<n; i++){
        cout << "Inserisci A["<<i<<"]: ";
        cin >> A[i];
    }

    while(righe*colonne<n)
        (righe != colonne) ? righe++ : colonne++;

    int Mat[righe][colonne];

    for(int i=0; i<righe; i++){
        for(int j=0; j<colonne; j++){
            Mat[i][j] = 0;
        }
    }

    for(int i=0; i<righe; i++){
        for(int j=0; j<colonne; j++){
            Mat[i][j] = A[k++];
        }
    }

    for(int i=0; i<righe; i++){
        for(int j=0; j<colonne; j++){
            cout << Mat[i][j] << "\t";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
