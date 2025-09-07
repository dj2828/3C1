#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int num1, num2, somma, differenza, moltiplicazione, scelta, potenza;
    float divisione;
    char a;

    cout << "Inserisci il primo numero ";
    cin >> num1;
    cout << "Inserisci il secondo numero ";
    cin >> num2;
    do{
    cout << "1.somma" << endl;
    cout << "2.differenza" << endl;
    cout << "3.moltiplicazione" << endl;
    cout << "4.divisione" << endl;
    cout << "5.potenza" << endl;
    cout << "Che scelta vuoi fare?" << endl;
    cin >> scelta;

        switch(scelta){
        case 1:
            somma = num1+num2;
            cout << "la somma \212 " << somma << endl;
            break;
        case 2:
            differenza = num1-num2;
            cout << "la differenza \212 " << differenza << endl;
            break;
        case 3:
            moltiplicazione = num1*num2;
            cout << "la moltiplicazione \212 " << moltiplicazione << endl;
            break;
        case 4:
            divisione = num1/num2;
            cout << "la divisione \212 " << divisione << endl;
            break;
        case 5:
            potenza = pow(num1, num2);
            cout << "la potenza \212 " << potenza << endl;
            break;
        default:
            cout << "Numero non valido" << endl;
        }

        cout << "Fare un'altra operazione s/n ";
        cin >> a;

    }while(a=='s'||a=='S');

    system("PAUSE");
    return 0;
}
