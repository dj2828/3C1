#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int Mat[20][20]={};
int n, m;
int Somme[20]={};

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

int sommaRiga(int riga){ // somma la riga data come argomento della matrice Mat
    int somma=0;
    for(int j=0; j<m; j++)
        somma += Mat[riga][j];
    return somma;
}

void copyVettoreSomme(){ // scrive nel vettore Somme la somma della riga
    for(int i=0; i<n; i++)
        Somme[i] = sommaRiga(i);
}

void dispVet(int vet[]){ // scrive gli elementi di un vettore
    cout << "Vettore: ";
    for(int i=0; i<n; i++){
        cout << vet[i] << " ";
    }
    cout << endl;
}

int main(){
    srand(time(NULL));

    cout << "N: ";
    cin >> n;
    cout << "M: ";
    cin >> m;

    caricaMatrice();
    disp(Mat);

    copyVettoreSomme();
    dispVet(Somme);

    system("pause");
    return 0;
}
