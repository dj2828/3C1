#include <iostream>
using namespace std;

int main(){
    int n, i, k=0;
    
    cout << "Numero caratteri frase: ";
    cin >> n;

    char v[n], r[n];

    for(i=0;i<n;i++){
        cout << "Inserisci carattere: ";
        cin >> v[i];
    }

    for(i=0;i<n;i++){
        if(v[i] != ' '){
            r[k] = v[i];
            k++;
        }
    }

    for(i=0;i<k;i++)
        cout << r[i];

    system("pause");
    return 0;
}
