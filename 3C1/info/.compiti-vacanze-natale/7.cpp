#include <iostream>
using namespace std;

int main(){
    int n, ultimo;
    cout << "Inserisci il numero di elementi: ";
    cin >> n;
    int v[n];

    for(int i=0;i<n;i++){
        cout << "Inserisci l'elemento " << i << " di v: ";
        cin >> v[i];
    }

    ultimo=v[n-1];
    for(int i=n-1;i>0;i--)
        v[i]=v[i-1];
    v[0]=ultimo;

    for(int i=0;i<n;i++)
        cout << v[i] << " ";
    cout << endl;

    system("pause");
    return 0;
}
