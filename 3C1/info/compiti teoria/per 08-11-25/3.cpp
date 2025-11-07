#include <iostream>
using namespace std;

int main(){
    int Mat[5][5] = {};

    for(int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            if(i==j)
                Mat[i][j] = 1;
        }
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout << Mat[i][j] << " ";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
