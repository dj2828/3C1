/*Realizzare un programma che, dati in input N numeri interi, stampi la loro somma e la
media.*/

#include <iostream>
using namespace std;

int main()
{
    int num, n, somma=0, i=1;
    float media;

    cout<<"Inserisci il numero di numeri ";
    cin >> n;

    while(i<=n){
        cout << "Inserisci il numero da sommare ";
        cin >> num;
        somma = somma + num;
        i++;
    }

    media=float(somma)/n;

    cout << "La somma \212 " << somma<<endl;
    cout << "La media \212 " << media<<endl;

    system("pause");
    return 0;
}
