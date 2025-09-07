#include <iostream>
using namespace std;

int main(){
    int peso;
    float costo;
    cout << "Inserire il peso ";
    cin >> peso;

    switch(peso){
        case 0 ... 3:
            costo = 5;
            break;
        case 4 ... 10:
            costo = 8;
            break;
        default:
            costo = 10;
    }

    cout << "Il costo \212 " << costo << endl;

    system("PAUSE");
    return 0;
}
