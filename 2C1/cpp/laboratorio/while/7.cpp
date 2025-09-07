/* Realizzare un programma che, data in input una sequenza di numeri chiusa dallo
zero, determini la loro somma e la loro media.*/

#include <iostream>
using namespace std;

int main()
{
    int num, somma=0, i=1;
    float media;

    cout << "Inserisci il numero, cond di uscita 0 ";
    cin >> num;

    while(num!=0){
        somma = somma+num;
        cout << "Inserisci il numero ";
        cin >> num;
        i++;
    }

    media = float(somma)/i;

    cout << "La somma \212 " << somma << endl;
    cout << "La media \212 " << media << endl;

    system("pause");
    return 0;
}
