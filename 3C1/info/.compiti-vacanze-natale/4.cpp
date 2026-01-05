#include <iostream>
using namespace std;

int main(){
    int n, somma=0, t;
    float media;
    cout << "Inserisci il numero di elementi: ";
    cin >> n;
    int v[n];

    for(int i=0;i<n;i++){
        cout << "Inserisci l'elemento " << i << ": ";
        cin >> v[i];
        somma+=v[i];
    }

    media=(float)somma/n;
    for(int i=0;i<n;i++){
        if(v[i]>media) cout << v[i] << " ";
    }
    cout << endl;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]>v[j]){
                t=v[i];
                v[i]=v[j];
                v[j]=t;
            }
        }
    }

    for(int i=0;i<n;i++) 
        cout << v[i] << " ";
    cout << endl;

    for(int i=n-1;i>=0;i--) 
        cout << v[i] << " ";
    cout << endl;
    
    system("pause");
    return 0;
}
