#include <iostream>
using namespace std;

int main(){
    int n;
    bool ok=true;
    cout << "Inserisci il numero di elementi: ";
    cin >> n;
    int v[n];
    
    for(int i=0;i<n;i++){
        cout << "Inserisci l'elemento " << i << " di v: ";
        cin >> v[i];
    }

    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]) ok=false;
    }

    if(ok) cout << "Il vettore e' ordinato in modo crescente" << endl;
    else cout << "Il vettore non e' ordinato in modo crescente" << endl;

    system("pause");
    return 0;
}
