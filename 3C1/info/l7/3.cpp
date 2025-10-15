/*
data una sequenza di caratteri random che converte in asci
*/
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    int num, n;
    srand(time(NULL));

    cin >> n;
    for(int i=1; i<=n; i++){
        num = (rand()%26);
        cout << 'a' + num <<endl;
    }


    system("pause");
    return 0;
}
