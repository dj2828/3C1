/*
appare la scritta: Benvenuto nelle 4 stagioni 25/26
dato il seguente menu:
    1) autunno
    2) inverno
    3) primavera
    4) estate
dopo aver scelto visualizza il periodo di inizio e fine della stagione selezionata
a=22/9 21/12
i=22/12 21/3
p=22/3 21/6
e=22/6 21/9
*/

/*
prima creo la variabile scelta di tipo int per la selezione del menu
poi scrivo il menu e prendo il valore input e lo salvo in scelta
uso uno switch per scrivere i vari mesi
*/
#include <iostream>
using namespace std;

int main(){
    int scelta;

    // inizio input
    cout << "Benvenuto nelle 4 stagioni 25/26" <<endl<<endl;
    cout << "1)Autunno\n2)Inverno\n3)Primavera\n4)Estate" << endl;
    cin >> scelta;
    cout << endl;
    // fine input

    // switch
    switch(scelta){
    case 1:
        cout << "Autunno\nInizio: 22 Settembre 2025\nFine: 21 Dicembre 2025"<<endl;
        break;
    case 2:
        cout << "Inverno\nInizio: 22 Dicembre 2025\nFine: 21 Marzo 2026"<<endl;
        break;
    case 3:
        cout << "Primavera\nInizio: 22 Marzo 2026\nFine: 21 Giugno 2026"<<endl;
        break;
    case 4:
        cout << "Estate\nInizio: 22 Giugno 2026\nFine: 21 Settembre 2026"<<endl;
        break;
    default:
        cout << "Valore non valido"<<endl;
    }

    system("pause");
    return 0;
}
