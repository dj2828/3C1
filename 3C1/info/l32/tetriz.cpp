#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

const int r=10, c=5;

char Mat[r][c];

class blocco_base{
public:
    int riga, colonna;
    blocco(int r=r/2, int c=0){
        riga = r;
        colonna = c;
    }

};
blocco_base blocco;

void disp(){
    system("cls");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << Mat[i][j] << " ";
        }
        cout << endl;
    }
}

void genMat(){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            Mat[i][j] = '*';
        }
    }
}

void genBlocco(){
    blocco_base blocco = new blocco_base();
}

void sleep(int x){
    std::this_thread::sleep_for(std::chrono::milliseconds(x*1000));
}

int main(){
    genMat();
    while(true){
        cout << blocco.
        sleep(1);
    }

    system("pause");
    return 0;
}
