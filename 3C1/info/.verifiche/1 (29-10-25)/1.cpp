#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

/*
genero il numero randomicamente per ogni ciclo del for
poi controllo il voto e stampo i vari voti in parole
inizializzo il massimo ed il minimo
se il numero è maggiore aggiorna il maxn e posmax
se il numero è minore aggiorna il minn e posmin
*/

int main(){
    // inizializzazione variabili
    int n, num, maxn, minn, posmax, posmin;
    // inizializzazione random
    srand(time(NULL));

    // input numero voti
    cout << "Inserisci il numero dei voti: ";
    cin >> n;

    for(int i=0; i<n; i++){
        // generazione numero random
        num = 12+rand()%19;
        cout << "Voto: "<<num<<" ";
        // se numero minore di 18
        if (num < 18){
            cout << "Insufficiente"<<endl;
        }
        // se numero uguale a 18
        else if (num == 18){
            cout << "Sufficiente"<<endl;
        }
        // se numero compreso tra 19 e 24
        else if (num >= 19 && num <= 24){
            cout << "Buono"<<endl;
        }
        // se numero compreso tra 25 e 30
        else if (num >= 25 && num <=30){
            cout << "Distinto - Ottimo"<<endl;
        }

        // inizializzazione massimo e minimo
        if(i==0){
            maxn = num;
            minn = num;
            posmax = i+1;
            posmin = i+1;
        }

        // se numero è maggiore di massimo
        if (num > maxn){
            maxn = num;
            posmax = i+1;
        }
        // se numero è minore di minimo
        else if (num < minn){
            minn = num;
            posmin = i+1;
        }
    }

    // output massimo e minimo
    cout <<endl<< "Voto massimo: "<<maxn<<". Posizione: "<< posmax<<endl;
    cout << "Voto minimo: "<<minn<<". Posizione: "<< posmin<<endl;

    system("pause");
    return 0;
}
