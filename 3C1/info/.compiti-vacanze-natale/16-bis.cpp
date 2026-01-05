#include <iostream>
using namespace std;

int main(){
    int n, k=0;
    bool gia_messo;
    cout << "Inserisci la grandezza dell' Array: ";
    cin >> n;
    char A[n], A2[n]={};
    for(int i=0; i<n; i++){
        cout << "Inserisci il "<<i+1<<" carattere: ";
        cin >> A[i];
    }
    cout << "Caratteri: ";
    for(char i: A){
        cout << i << "\t";
    }
    cout << endl;

    for(int i=0; i<n; i++){
        gia_messo = false;
        for(int j=0; j<n; j++){
            if(A[i] == A2[j])
                gia_messo = true;
        }
        if(!gia_messo){
            A2[k] = A[i];
            k++;
        }
    }

    cout << "Caratteri 2: ";
    for(char i: A2){
        cout << i << "\t";
    }
    cout << endl;


    system("pause");
    return 0;
}
