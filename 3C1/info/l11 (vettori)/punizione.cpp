#include <iostream>
using namespace std;
/*
dato un vettore di int dopo caricato e visualizzato,
trovare il valore di moda e il max, min e poss
*/
int main(){
    int numero, n, maxn, minn, posmax, posmin, moda, posmoda;
    cout << "Inserisci il numero dei numeri: ";
    cin >> n;
    int Numeri[n];

    for(int i=0; i<n; i++){
        cout << "Inserisci un numero: ";
        cin >> numero;

        if(i==0){
            maxn=numero;
            minn=numero;
            posmax=i;
            posmin=i;
        }
        if(numero > maxn){
            maxn=numero;
            posmax=i;
        }
        else if(numero < minn){
            minn=numero;
            posmin=i;
        }
        Numeri[i] = numero;
    }

    int Mode[maxn];

    for(int i=0; i<n; i++){
        if(Mode[Numeri[i]]==0){
            Mode[Numeri[i]] = 1;
        }
        else{
            Mode[Numeri[i]] ++;
        }
    }

    for(int i=0; i<n; i++){
        if(i==0){
            moda=Numeri[i];
            posmoda=Mode[i];
        }
        if(Mode[i] > moda){
            moda=Numeri[i];
            posmoda=Mode[i];
        }
    }

    cout << "Max " <<maxn<<" Pos: "<<posmax<<endl;
    cout << "Min "<<minn<<" Pos: "<<posmin<<endl;
    cout << "Moda " << moda <<endl;

    system("pause");
    return 0;
}
