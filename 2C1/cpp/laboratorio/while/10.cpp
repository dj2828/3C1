#include <iostream>
using namespace std;

int main(){
    int num, n, somma=0,i=0;

    cout << "Inserisci il numero dei numeri ";
    cin >> n;

    while(i<n){
        cout << "Inserisci il numero ";
        cin >> num;

        if (num%2 != 0){
            somma = somma + num;
        }
        i++;
    }

    cout << "La somma dei numeri dispari \212 " << somma << endl;

    system("pause");
    return 0;
}
