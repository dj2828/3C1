/*
    area 2p
*/
#include <iostream>
#include <cmath>
using namespace std;

float areaTriangolo(float l1, float l2){
    return l1 * l2 / 2;
}
float perimetroTriangolo(float l1, float l2){
    float ipo;
    ipo = pow(l1,2) + pow(l2, 2);
    return sqrt(ipo)+l1+l2;
}

float areaRettangolo(float l1, float l2){
    return l1*l2;
}
float perimetroRettangolo(float l1, float l2){
    return l1*2+l2*2;
}

int main(){
    int n;
    float area=0, pp=0;

    cout << "Inserisci in numero dei lati: ";
    cin >> n;

    int l1, l2;
    switch(n){
    case 3:
        cout << "l1 (base): ";
        cin >> l1;
        cout << "l2 (h): ";
        cin >> l2;
        area = areaTriangolo(l1, l2);
        pp = perimetroTriangolo(l1, l2);
        break;
    case 4:
        cout << "l1 : ";
        cin >> l1;
        cout << "l2 : ";
        cin >> l2;
        area = areaRettangolo(l1, l2);
        pp = perimetroRettangolo(l1, l2);
        break;
    default:
        cout << "Numero di lati non contemplato" << endl;
    }

    cout << "Area: " << area << endl;
    cout << "2p: " << pp << endl;

    system("pause");
    return 0;
}
