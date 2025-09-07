#include <iostream>
using namespace std;

int main(){
    int scelta;
    float tot=0;

    do{
        cout << "Prezzo attuale: " << tot << endl << endl;

        cout << "Scegli la pizza:" << endl;
        cout << "1. Margherita" << endl;
        cout << "2. Marinara" << endl;
        cout << "3. Patatine" << endl << endl;
        cout << "Scegli la bibita:" << endl;
        cout << "4. Acqua naturale" << endl;
        cout << "5. Acqua frizzante" << endl;
        cout << "6. Coca Cola" << endl;
        cout << endl << "7. Esci" << endl << endl;
        cin >> scelta;
        cout << endl;

        switch(scelta)
        {
        case 1:
            tot += 6;
            break;
        case 2:
            tot += 5;
            break;
        case 3:
            tot += 7;
            break;
        case 4:
            tot += 1.5;
            break;
        case 5:
            tot += 1.5;
            break;
        case 6:
            tot += 2.5;
            break;
        case 7:
            break;
        default:
            cout << "Scelta non valida" << endl;
            system("pause");
        }

    }while(scelta != 7);

    cout << "Prezzo totale: " << tot << endl;

    system("pause");
    return 0;
}
