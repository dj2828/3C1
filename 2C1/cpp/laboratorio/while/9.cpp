#include <iostream>
using namespace std;

int main()
{
    int num, n, min, i = 1;

    cout << "Inserisci il numero di numeri: ";
    cin >> n;

    cout << "Inserisci un numero: ";
    cin >> num;
    min = num;

    while (i < n)
    {
        cout << "Inserisci un numero: ";
        cin >> num;
        if (min > num)
        {
            min = num;
        }
        i++;
    }
    
    cout << "Il numero minore \212 " << min << endl;

    system("pause");
    return 0;
}
