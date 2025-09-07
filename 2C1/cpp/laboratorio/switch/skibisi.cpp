/* sullo stipendio dei dipendenti di una azzienda viene applicata una
trattenuta fiscale in base alla tebella
scaglione 1: 5%
scaglione 2: 10%
scaglione 3: 15%
scaglione 4: 25%
scaglione 5: 35%
scrivi un proggramma che dato in input lo stipendio e lo scaglione di
appartenenza di un dipendente, calcoli la trattenuta da versare.
*/

#include<iostream>
using namespace std;

int main()
{
    float s, t, sn;
    int sc;

    cout << "Inserisci lo stipendio ";
    cin >> s;
    cout << "Inserisci lo scaglione (1, 2, 3, 4, 5) ";
    cin >> sc;

    switch(sc)
    {
    case 1:
        t = s*0.05;
        break;
    case 2:
        t = s*0.10;
        break;
    case 3:
        t = s*0.15;
        break;
    case 4:
        t = s*0.25;
        break;
    case 5:
        t = s*0.35;
        break;
    default:
        cout << "Scaglione non valido" << endl;
    }

    sn = s-t;
    cout << "La trattenuta \212 " << t << endl;
    cout << "Lo stipendio netto \212 " << sn << endl;

    system("PAUSE");
    return 0;
}
