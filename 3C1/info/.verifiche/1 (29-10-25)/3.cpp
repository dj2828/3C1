#include <iostream>
using namespace std;

/*
divido il numero per 10, cosi sposta la virgola di una cifra a sinistra e conto la cifra
il ciclo finisce quando il numero è minore di 0, quindi non ci sono piu cifre rimaste
*/

int main(){
    int num, cifre=0;

    // input numero
    cout << "Inserisci il numero: ";
    cin >> num;

    do{
        // divido numero per 10
        num = num/10;
        // aggiungo uno al numero delle cifre
        cifre++;
    // eseguo fino a quando il numero è maggiore di 0
    }while(num>0);

    // output numero delle cifre
    cout << "Il numero contiene: " << cifre <<" cifre"<<endl;

    system("pause");
    return 0;
}
