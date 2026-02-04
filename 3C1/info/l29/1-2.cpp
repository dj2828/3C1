/*
    incrocio
    mat 4x4, int, diagonale1=0
    capacita[] = {15, 12, 18, 10}
    n 0 4 5 6
    s 1 4 3 6
    e 2 4 4 9
    o 3 4 8 9
    somma n, maggiore di capacita (n), sovracarrico
    COLONNE
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int n=4, somma;
    int Mat[n][n];
    int capacita[] = {15, 12, 18, 10};

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            Mat[i][j] = (i==j) ? 0 : 1+rand()%10;
        }
    }

    for(int i=0; i<n; i++){
            cout << i << " ";
        for(int j=0; j<n; j++){
            cout << Mat[i][j] << "\t";
        }
        cout << endl;
    }

    for(int i=0; i<n; i++){
        somma=0;
        for(int j=0; j<n; j++){
            somma += Mat[j][i];
        }
        switch(i){
            case 0:
                cout << "Nord: ";
                break;
            case 1:
                cout << "Sud: ";
                break;
            case 2:
                cout << "Est: ";
                break;
            case 3:
                cout << "Ovest: ";
                break;
        }
        cout << somma << " macchine, " << capacita[i] << " capacita, ";
        if(somma > capacita[i])
            cout << somma-capacita[i] << " macchine rimanenti, " << "SOVRACCARICO" << endl;
        else
            cout << "OK" << endl;
    }

    system("pause");
    return 0;
}
