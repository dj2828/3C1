/* data base altezza calcola area rettangolo */

/* dichiarare 4 int b/h/ar/aat;
prendere in input le var b/h;
poi calcolare l'area con b*h/(b*h)/2;
poi scrivere l'area */

#include <iostream>
using namespace std;

int main(){
    int b, h, ar;
    float aat;
    cout << "Iserisci la base: ";
    cin >> b;
    cout << "Inserisci l'altezza: ";
    cin >> h;
    ar=b*h;
    aat=float(b*h)/2;
    cout << "L'area del rettangole \212: " << ar << endl;
    cout << "L'area del triangolo \212: " << aat << endl;
    system("pause");
    return 0;
}
