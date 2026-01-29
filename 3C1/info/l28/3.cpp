/*
    costruire la tavola pitagorica
*/
#include <iostream>
using namespace std;

int main(){
    int Mat[11][11];

    for(int i=0; i<11; i++){
        for(int j=0; j<11; j++){
            Mat[i][j] = i*j;
        }
    }

    for(int i=0; i<11; i++){
        for(int j=0; j<11; j++){
            if(i==0 && j==0){
                cout << "X\t";
                continue;
            }
            cout << Mat[i][j] << "\t";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
