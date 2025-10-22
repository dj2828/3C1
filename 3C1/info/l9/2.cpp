/*
su dei binari rispetto alla tariffa full, i pensionati hanno -10%, gli studenti del 15%,
i disoccupati del 25%
in costo biglietto e condizione delluser out costo tot
*/
#include <iostream>
using namespace std;

int main(){
    float costo, tot;
    int stato;

    cout << "Inserisci il costo del biglietto: ";
    cin >> costo;
    cout << "Inserisci lo stato:\n1-pensionato\n2-studente\n3-disoccupato"<<endl;
    cin >> stato;

    switch(stato){
    case 1:
        tot = costo * 0.9;
        break;
    case 2:
        tot = costo * 0.85;
        break;
    case 3:
        tot = costo * 0.75;
        break;
    }
    cout << "Prezzo con sconto: "<<tot<<endl;

    system("pause");
    return 0;
}
