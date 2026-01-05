#include <iostream>
using namespace std;

int main(){
    int n, i, maiuscole=0, minuscole=0;
    
    cout << "Quanti caratteri: ";
    cin >> n;

    char v[n];

    for(i=0;i<n;i++){
        cout << "Inserisci carattere: ";
        cin >> v[i];
    }

    for(i=0;i<n;i++){
        if(v[i]>='A' && v[i]<='Z')
            maiuscole++;
        if(v[i]>='a' && v[i]<='z')
            minuscole++;
    }

    cout << "Maiuscole: " << maiuscole << endl;
    cout << "Minuscole: " << minuscole << endl;

    system("pause");
    return 0;
}
