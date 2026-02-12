/*
    mat char 4x6
    "b" "n" random
    se ci sono 1 n consecutive: "Isola"
    se ci sono 2 n consecutive: "Torpediniera"
    se ci sono 3 n consecutive: "Sottomarino"
    se ci sono 4 n consecutive: "corazzata"

*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    char Mat[4][6];
    int mare=0;

    for(int i=0; i<4; i++){
        for(int j=0; j<6; j++){
            Mat[i][j] = (rand()%2==0) ? 'b' : 'n';
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<6; j++){
            cout << Mat[i][j] << "\t";
        }
        cout << endl;
    }

    for(int i=0; i<4; i++){
        int conta=0;
        for(int j=0; j<6; j++){
            if(Mat[i][j]=='n') conta++;
            if(Mat[i][j]!='n' || j==5){
                switch(conta){
                case 1:
                    cout << "Isola" << endl;
                    break;
                case 2:
                    cout << "Torpediniera" << endl;
                    break;
                case 3:
                    cout << "Sottomarino" << endl;
                    break;
                case 4:
                    cout << "Corazzata" << endl;
                    break;
                }
                conta=0;
                if(Mat[i][j]!='n') mare++;
            }
        }
    }

    cout << "Mare: " << mare << endl;

    system("pause");
    return 0;
}
