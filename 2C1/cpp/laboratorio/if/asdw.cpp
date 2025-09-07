/* la compagnia elettrica applica le sseguenti tariffe:
0 -500 = 15$
501 - 1000 = 15$ + 0.02999$/kWh oltre i 500
oltre i 1001 = 29.995$ + 0.02889$/kWh oltre i 1000
dato il consumo mensile, calcola l'importo della bolletta
*/
#include <iostream>
using namespace std;

int main()
{
    float kwh, tot;

    cout << "Inserisci il consumo mensile ";
    cin >> kwh;

    if(kwh<=500){
        tot = 15;
    }
    else if(kwh<=1000){
        tot = 15 + 0.02889*(kwh-500);
    }
    else{
        tot = 29.995 + 0.02889*(kwh-1000);
    }
    cout << "Il prezzo della bolletta \212 " << tot << endl;
    system("PAUSE");
    return 0;
}
