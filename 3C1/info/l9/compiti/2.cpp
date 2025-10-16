#include <iostream>
using namespace std;

int main(){
    int n, attuale=1, prima=0, dopo;
    cin >> n;

    for(int i=2;i<n;i++){
        dopo = prima + attuale;
        prima = attuale;
        attuale = dopo;
    }

    cout << attuale << endl;

    system("pause");
    return 0;
}
