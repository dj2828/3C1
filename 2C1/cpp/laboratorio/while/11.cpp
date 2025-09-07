#include <iostream>
using namespace std;

int main() {
    int num, n, x, maggiore = 0, minore = 0, uguale = 0, i = 0;
    cout << "Inserisci il numero dei numeri ";
    cin >> n;

    cout << "Inserisci il valore di X ";
    cin >> x;

    while (i < n) {

        cout << "Inserisci un numero: ";
        cin >> num;

        if (num > x) {
            maggiore++;
        } else if (num < x) {
            minore++;
        } else {
            uguale++;
        }
        i++;
    }

    cout << "Numeri maggiori di X: " << maggiore << endl;
    cout << "Numeri minori di X: " << minore << endl;
    cout << "Numeri uguali a X: " << uguale << endl;

    return 0;
}