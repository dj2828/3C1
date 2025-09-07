/* Scrivi un programma che stampi una serie di numeri e termini quando il numero
immesso è multiplo di 10.*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Inserisci il numero, condizione di uscita numero multiplo di 10 ";
    cin>>n;

    while(n%10!=0){
        cout<<n<<endl;
        cout<<"Inserisci il numero, condizione di uscita numero multiplo di 10 ";
        cin>>n;
    }

    system("pause");
    return 0;
}
