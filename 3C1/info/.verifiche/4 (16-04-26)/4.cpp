#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int Mat[20][20]={};
int n, m;
int Max[20]={};

void caricaMatrice(){ // riempie la matrice con numeri casuali da 0 a 20 (compresi)
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            Mat[i][j] = rand()%21;
    }
}

void disp(int mat[20][20]){ // scrive gli elementi di una matrice
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            cout << mat[i][j] << "\t";
        cout << endl;
    }
}

int maxRiga(int riga){ // trova il valore massimo della riga data come arcomento
    int maxn=0;
    for(int j=0; j<m; j++){
        if(j==0 || Mat[riga][j] > maxn)
            maxn = Mat[riga][j];
    }
    return maxn;
}

void copyVettoreMax(){ // scrive nel vettore Max il massimo di ogni riga
    for(int i=0; i<n; i++)
        Max[i] = maxRiga(i);
}

void dispVet(int vet[]){ // scrive gli elementi di un vettore
    cout << "Vettore: ";
    for(int i=0; i<n; i++){
        cout << vet[i] << " ";
    }
    cout << endl;
}

int valoreMedio(int vet[], int lunghezza = n){
    int medio;

    medio = vet[lunghezza/2];

    return medio;
}

void infoVet(int vet[]){
    int maxn, minn, valore;
    for(int i=0; i<n; i++){
        valore = vet[i];
        if(i==0){
            maxn = valore;
            minn = valore;
        }
        if(valore > maxn)
            maxn = valore;
        else if(valore < minn)
            minn = valore;
    }
    cout << "Massimo: " << maxn << " Minimo: " << minn << " Valore medio: " << valoreMedio(vet) << endl;
}

int main(){
    srand(time(NULL));

    cout << "N: ";
    cin >> n;
    cout << "M: ";
    cin >> m;

    caricaMatrice();
    disp(Mat);

    copyVettoreMax();
    dispVet(Max);

    infoVet(Max);

    system("pause");
    return 0;
}
