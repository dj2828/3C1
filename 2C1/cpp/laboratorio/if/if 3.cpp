//Dato un numero intero positivo dire se è pari o dispari.
#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Inserisci il numero ";
    cin >> n;

    if(n%2==0){
        cout<<"Il numero \212 pari"<<endl;
    }
    else{
        cout<<"Il numero \212 dispari"<<endl;
    }

    system("PAUSE");
    return 0;
}
