#include <iostream>
using namespace std;

int main() {
int n, num, sommaPositivi = 0, sommaNegativi = 0, contPositivi = 0, contNegativi = 0, i = 0;

    cout << "Inserisci il numero dei numeri ";
    cin >> n;

    while(i<n) {
        cout << "Inserisci un numero ";
        cin >> num;

        if (num > 0) {
            contPositivi++;
            sommaPositivi += num;
        } else if (num < 0) {
            contNegativi++;
            sommaNegativi += num;
        }
        i++;
    }

    cout << "Numeri positivi: " << contPositivi << ", Somma: " << sommaPositivi << endl;
    cout << "Numeri negativi: " << contNegativi << ", Somma: " << sommaNegativi << endl;    

    system("pause");
    return 0;
}