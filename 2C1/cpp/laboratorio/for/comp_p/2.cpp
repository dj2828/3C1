#include <iostream>
using namespace std;

int main() {
    int n, num, som;
    float med;

    cout << "Inserisci il numero dei numeri: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Inserisci il numero: ";
        cin >> num;
        som += num;
    }

    med = (float)som / n;

    cout << "Somma: " << som << endl;
    cout << "Media: " << med << endl;

    

    system("pause");
    return 0;
}