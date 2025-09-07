/* ricevuti in ingresso n numeri positivi conta il numero di valori multipli
di un numero X intero positivo ricevuto in ingresso */

#include <iostream>
using namespace std;

int main()
{
    int n, num, x, con=0;

    cout << "Inserisci il numero dei numeri: ";
    cin >> n;
    cout << "Inserisci il numero X: ";
    cin >> x;

    for(int i=0; i<n; i++){
        cout << "Inserisci il numero: ";
        cin >> num;

        if(num%x==0){
            con++;
        }
    }

    cout << "Il numero dei multipli di " << x << " \212: " << con << endl;

    system("pause");
    return 0;
}
