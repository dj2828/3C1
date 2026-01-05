#include <iostream>
using namespace std;

int main(){
    int n, i, cont=0;
    
    cout << "Quanti caratteri: ";
    cin >> n;

    char v[n], x;

    for(i=0;i<n;i++){
        cout << "Inserisci carattere: ";
        cin >> v[i];
    }

    cout << "Vettore: ";
    for(i=0;i<n;i++)
        cout << v[i] << " ";
    cout << endl;

    cout << "Carattere da contare: ";
    cin >> x;

    for(i=0;i<n;i++){
        if(v[i]==x)
            cont++;
    }

    cout << "Carattere presente " << cont << " volte " << endl;

    system("pause");
    return 0;
}
