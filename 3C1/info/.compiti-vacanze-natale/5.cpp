#include <iostream>
using namespace std;

int main(){
    int n, x, cont=0;
    bool trovato;
    cout << "Inserisci il numero di elementi: ";
    cin >> n;
    int v[n], u[n], k=0;

    for(int i=0;i<n;i++){
        cout << "Inserisci l'elemento " << i << ": ";
        cin >> v[i];
    }

    for(int i=0;i<n;i++){
        trovato=false;
        for(int j=0;j<k;j++){
            if(v[i]==u[j]) trovato=true;
        }
        if(!trovato){
            u[k]=v[i];
            k++;
        }
    }

    for(int i=0;i<k;i++) 
        cout << u[i] << " ";
    cout << endl;

    cout << "Inserisci il numero da contare: ";
    cin >> x;
    for(int i=0;i<n;i++){
        if(v[i]==x)
            cont++;
    }
    cout << cont << endl;

    system("pause");
    return 0;
}
