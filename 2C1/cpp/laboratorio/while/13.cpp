#include <iostream>
using namespace std;

int main() {
    int n, num, i = 0;
    int positivi = 0, negativi = 0, pari = 0, dispari = 0;

    cout << "Quanti numeri vuoi inserire? ";
    cin >> n;

    while (i < n) {
        cout << "Inserisci un numero: ";
        cin >> num;

        if (num > 0) {
            positivi++;
        } else if (num < 0) {
            negativi++;
        }

        if (num % 2 == 0) {
            pari++;
        } else {
            dispari++;
        }

        i++;
    }

    cout << "Percentuale di numeri positivi: " << (float)positivi * 100 / n << "%" << endl;
    cout << "Percentuale di numeri negativi: " << (float)negativi * 100 / n << "%" << endl;
    cout << "Percentuale di numeri pari: " << (float)pari * 100 / n << "%" << endl;
    cout << "Percentuale di numeri dispari: " << (float)dispari * 100 / n << "%" << endl;

    system("pause");
    return 0;
}