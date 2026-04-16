#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int Vet[10];

void caricaVettore(){ // riempie il vettore con numeri casuali da 0 a 20 (compresi)
    for(int i=0; i<10; i++){
        Vet[i] = rand()%21;
    }
}

void disp(int vet[]){ // scrive gli elementi di un vettore
    cout << "Vettore: ";
    for(int i=0; i<10; i++){
        cout << vet[i] << " ";
    }
    cout << endl;
}

int searchN(int n){ // cerca la posizione di un numero dato come argomento
    for(int i=0; i<10; i++){
        if(Vet[i] == n)
            return i;
    }
    return -1;
}

int contaN(int n){ // conta la presenza di un numero dato come argomento
    int conta=0;
    for(int i=0; i<10; i++){
        if(Vet[i] == n)
            conta++;
    }
    return conta;
}

float perc(int n, int tot=10){ // calcola la percentuale
    return n*tot;
}

int main(){
    srand(time(NULL));

    caricaVettore();
    disp(Vet);

    int n;
    cout << "Numero da cercare: ";
    cin >> n;
    cout << n << " trovato in posizione " << searchN(n) << endl;
    int trovato = contaN(n);
    cout << n << " trovato " << trovato << " volte (" << perc(trovato) << "%)" << endl;

    system("pause");
    return 0;
}
