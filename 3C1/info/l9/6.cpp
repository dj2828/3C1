/*
in numero
pari aaaaaaaaaaaaaaaaaaaa = meta numero
dispari zzzzzzzzzzz = numero
0, -292929980213 = explode
*/
#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "Inserisci il numero: ";
    cin >> num;

    if(num <=0){
        cout << "Numero <=0: "<<endl;
    }
    else if(num%2==0){
        for(int i=0; i<num/2; i++){
            cout << "a";
        }
    }
    else{
        for(int i=0; i<num; i++){
            cout << "z";
        }
    }

    cout << endl;

    system("pause");
    return 0;
}
