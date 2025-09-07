#include <iostream>
using namespace std;

int main(){
    int sc;
    float p, s, tot;
    char a;

    do{
        cout << "Inserisci il prezzo del biglietto: ";
        cin >> p;

        cout << endl << "Inserisci:" << endl;
        cout << "1. Pensionati" << endl;
        cout << "2. Studenti" << endl;
        cout << "3. Disoccupati" << endl;
        cin >> sc;

        switch(sc)
        {
            case 1:
                s=10*p/100;
                break;
            case 2:
                s=15*p/100;
                break;
            case 3:
                s=25*p/100;
                break;
            default:
                cout << "Numero inserito non valido"<<endl;
        }

        tot=p-s;

        cout << "Il prezzo con lo sconto \212 " << tot << endl;

        cout << endl << "Vuoi inserirne un'altro? (s/n) ";
        cin >> a;
        cout << endl;
    }while(a=='s');


    system("pause");
    return 0;
}
