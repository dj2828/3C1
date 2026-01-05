#include <iostream>
using namespace std;

int main(){
    int n, k=0;
    cout << "Inserisci il numero di elementi: ";
    cin >> n;
    int v[n], q[n];

    for(int i=0;i<n;i++){
        cout << "Inserisci l'elemento " << i << ": ";
        cin >> v[i];
        q[i]=v[i]*v[i];
    }

    for(int i=0;i<n;i++)
        cout << q[i] << " ";
    cout << endl;

    for(int i=0;i<n;i++){
        if(v[i]>=0){
            v[k]=v[i];
            k++;
        }
    }

    for(int i=0;i<k;i++)
        cout << v[i] << " ";
    cout << endl;

    system("pause");
    return 0;
}
