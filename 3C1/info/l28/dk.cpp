#include <iostream>
using namespace std;

char M[2][10]={};

void disp(){
    for(int i=0; i<2; i++){
        for(int j=0; j<10; j++){
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}

void genera_mat(){
    for(int i=0; i<10; i++)
        M[1][i] = '-';
}

int main(){
    genera_mat();
    disp();

    system("pause");
    return 0;
}
