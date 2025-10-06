/* calc in 2 int; out:
addizione
sottrazione
prod
dividione
in esponente da dare ad ognuno dei 2 valori
calcola la radice(sqrt())*/

/*
creo le variabili int n1, n2, s, sot, p, esp, pow1, pow2;
creo le variabili float d, rad1, rad2;
richiedo in input le variabili n1, n2, esp;
faccio somma sott...
faccio l'output di tutto
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n1, n2, s, sot, p, esp, pow1, pow2;
    float d, rad1, rad2;
    cout << "Inserisci il primo numero: ";
    cin >> n1;
    cout << "Inserisci il secondo numero: ";
    cin >> n2;
    cout << "Inserisci l'esponente: ";
    cin >> esp;

    s=n1+n2;
    sot=n1-n2;
    p=n1*n2;
    d=(float)n1/n2;
    pow1=pow(n1, esp);
    pow2=pow(n2, esp);
    rad1=sqrt(n1);
    rad2=sqrt(n2);

    cout << "Addizione: " << s << endl;
    cout << "Sottrazione: " << sot << endl;
    cout << "Prodotto: " << p << endl;
    cout << "Divizione: " << d << endl;
    cout << "Potenza: " << pow1 << ", " << pow2 << endl;
    cout << "Radice quadrata: " << rad1 << ", " << rad2 << endl;


    system("pause");
    return 0;
}
