#include <iostream>
using namespace std;

int main() {

    int num=1, prodotto=1;

    do{
        prodotto = prodotto * num;
        cout << "Inserisci un numero (condizione di uscita multiplo di 7) ";
        cin >> num;
    }while(num%7!=0);

    cout << "Il prodotto \212 " << prodotto << endl;

    system("pause");
    return 0;
}