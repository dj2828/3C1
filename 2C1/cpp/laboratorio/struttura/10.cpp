// Dati due numeri interi calcolarne la divisione fra interi e il resto.

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n1, n2;
    float div, res;

    cout << "Inserisci il primo numero " << endl;
    cin >> n1;
    cout << "Inserisci il secondo numero " << endl;
    cin >>n2;

    div = n1/n2;
    res = n1%n2;

    cout << "La divisione \212 " << div << endl;
    cout << "Il resto \212 " << res << endl;

    system("PAUSE");
    return 0;
}
