// dato il prezzo di un prodotto e l'iva del 22%, calcolare il prezzo

#include <iostream>
using namespace std;

int main()
{
    float p, iva, tot;

    cout << "Inserisci il prezzo ";
    cin >> p;

    iva = (p*22)/100;
    tot = p + iva;

    cout << "Il prezzo totale \212 " << tot << endl;

system("PAUSE");
return 0;
}
