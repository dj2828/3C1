#include <iostream>
using namespace std;

int main()
{
    int num, n, max=0, i=0;

    cout << "Inserisci il numero di numeri ";
    cin >> n;

    while (i<n)
    {
        cout << "Inserisci un numero ";
        cin >> num;
        if (num>max)
        {
            max=num;
        }
        i++;
    }
    
    cout << "Il numero maggiore \212 " << max << endl;

    system("pause");
    return 0;
}
