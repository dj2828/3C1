#include <iostream>
using namespace std;

int main() {
    int n, num, som;

    cout << "Inserisci il numero dei numeri: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Inserisci il numero: ";
        cin >> num;
        if (num%2 !=0){
            som += num;
        }
    }

    cout << "Somma: " << som << endl;

    system("pause");
    return 0;
}