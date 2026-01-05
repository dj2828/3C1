#include <iostream>
using namespace std;

int main(){
    int n, i;
    
    cout << "Quanti caratteri: ";
    cin >> n;

    char v[n];

    for(i=0;i<n;i++){
        cout << "Inserisci carattere: ";
        cin >> v[i];
    }

    for(i=0;i<n;i++){
        if(v[i]=='a') v[i]='*';
    }

    for(i=0;i<n;i++)
        cout << v[i] << " ";

    system("pause");
    return 0;
}
