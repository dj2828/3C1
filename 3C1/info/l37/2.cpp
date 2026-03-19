/*
    vet string <-- nomi giocatori calcio
    mat n(vet.size)x38+1(tot) <-- rand 0-4 5-8 9-10
    listone finale ordinato per gol totali
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int dimensione_vettore;
int mat[10][39]={};
string vettore_ordinato_nomi[10] = {};
int vettore_ordinato_valori[10] = {};

int genGoal(){
    int n = rand()%11;
    switch(n){
    case 0 ... 4:
        return 0;
    case 5 ... 8:
        return 1;
    case 9 ... 10:
        return 2;
    }
}

void riempiMat(){
    for(int i=0; i<dimensione_vettore; i++){
        int somma=0;
        for(int j=0; j<38; j++){
            int n = genGoal();
            mat[i][j] = n;
            somma += n;
        }
        mat[i][38] = somma;
    }
}

void disp(string nomi[]){
    for(int i=0; i<dimensione_vettore; i++){
        cout << nomi[i] << "\t";
        for(int j=0; j<39; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void bubble(int A[], string nomi[]){
    int l = dimensione_vettore;
    for(int i=0;i<(l-1);i++){
        for(int j=0;j<(l-1-i);j++){
            if(A[j+1]>A[j]){
                int temp=A[j+1];
                string nome = nomi[j+1];
                A[j+1]=A[j];
                nomi[j+1]=nomi[j];
                A[j]=temp;
                nomi[j]=nome;
            }
        }
    }

    for(int i=0; i<dimensione_vettore; i++){
        vettore_ordinato_nomi[i] = nomi[i];
        vettore_ordinato_valori[i] = A[i];
    }
}

void getVettoreSomma(string nomi[]){
    int v[dimensione_vettore];
    for(int i=0; i<dimensione_vettore; i++){
        v[i] = mat[i][38];
    }

    bubble(v, nomi);
}

void dispMega(){
    for(int i=0; i<dimensione_vettore; i++){
        cout << vettore_ordinato_nomi[i] << "\t" << vettore_ordinato_valori[i] << endl;
    }
}

int main(){
    srand(time(NULL));
    cout << "n: ";
    cin >> dimensione_vettore;
    string nomi[dimensione_vettore];
    for(int i=0; i<dimensione_vettore; i++){
        cout << i << ": ";
        cin >> nomi[i];
    }

    riempiMat();

    disp(nomi);

    getVettoreSomma(nomi);

    cout << endl;
    dispMega();


    system("pause");
    return 0;
}
