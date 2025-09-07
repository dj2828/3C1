//Dati due numeri stamparli in ordine crescente.
#include<iostream>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Metti il primo numero ";
    cin >> n1;
    cout << "Metti il secondo numero ";
    cin >> n2;

    if (n1<n2){
        cout << n1 << " " << n2 << endl;
    }
    else{
        cout << n2 << " " << n1 << endl;
    }

    system("PAUSE");
    return 0;
}
