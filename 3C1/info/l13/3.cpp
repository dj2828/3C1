/*
input array char, visualizzalo
dire se il contenuto è palindromo (anna)
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Inserisci la grandezza dell' Array: ";
    cin >> n;
    char A[n];
    for(int i=0; i<n; i++){
        cout << "Inserisci il "<<i+1<<" carattere: ";
        cin >> A[i];
    }
    cout << "Valori: ";
    for(char i: A){
        cout << i << "\t";
    }
    cout << endl;

    for(int i=0; i<n; i++){
        if(A[i]==A[n-1-i]){
            if(i==n-1)
                cout << "L' array \212 palindromo"<<endl;
            continue;
        }
        else
            cout << "L'array NON \212 palindromo"<<endl;
            break;
    }


    system("pause");
    return 0;
}
