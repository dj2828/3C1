#include <iostream>
using namespace std;

int main(){
    int n, somma=0, suff=0, maxn, minn;
    cout << "Inserisci il numero di elementi: ";
    cin >> n;
    int v[n];

    for(int i=0;i<n;i++){
        cout << "Inserisci l'elemento " << i << " di v: ";
        cin >> v[i];
        somma+=v[i];
        if(v[i]>=6) suff++;
        if(i==0){maxn=minn=v[i];}
        else{
            if(v[i]>maxn) maxn=v[i];
            if(v[i]<minn) minn=v[i];
        }
    }

    cout << "somma" << (float)somma/n << endl;
    cout << "suff" << suff << endl;
    cout << "massimo" << maxn << " " << minn << endl;

    system("pause");
    return 0;
}
