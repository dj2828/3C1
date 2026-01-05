#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Inserisci il numero di elementi: ";
    cin >> n;
    int a[n], b[n], c[n];

    for(int i=0;i<n;i++){
        cout << "Inserisci l'elemento " << i << " di a: ";
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cout << "Inserisci l'elemento " << i << " di b: ";
        cin >> b[i];
    }

    for(int i=0;i<n;i++){
        c[i]=a[i]+b[i];
        cout << c[i] << " ";
    }
    cout << endl;

    for(int i=0;i<n;i++){
        if(a[i]%2==0) cout << a[i] << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}
