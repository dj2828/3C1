#include <iostream>
using namespace std;

int main(){
    int eta;
    float costo;
    cout << "Inserire l' et\205 ";
    cin >> eta;

    switch(eta){
        case 0 ... 2:
            costo = 0;
            break;
        case 3 ... 12:
            costo = 5;
            break;
        case 13 ... 17:
            costo = 7.5;
            break;
        default:
            costo = 10;
    }

    cout << "Il costo \212: " << costo << endl;

    system("PAUSE");
    return 0;
}
