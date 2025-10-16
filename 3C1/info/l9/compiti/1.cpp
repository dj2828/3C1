// scrivi un proggramma che scrivi la figura di un triangolo con base

#include <iostream>
using namespace std;

int main(){
    int b;

    cin >> b;

    for(int i=0; i<b; i++){
        for(int j=b; j>i; j--){
            cout << "*";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}