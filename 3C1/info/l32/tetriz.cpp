#include <iostream>
#include <thread>
#include <chrono>
#include <conio.h>
using namespace std;

const int r=10, c=5;

char Mat[r][c];

struct blocco_base{
    int riga, colonna;
    void pos(int r, int c){
        riga = r;
        colonna = c;
    }
    void scendi(int direzione=0){
        riga++;
        if(direzione==1) colonna++;
        if(direzione==2) colonna--;
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
    blocco = blocco_base();
}

void sleep(int x){
    for (int i = 0; i < x*1000; i += 10) {
        std::this_thread::sleep_for(std::chrono::milliseconds(10));

        if (_kbhit()) {
            char c = _getch();
            std::cout << "Premuto: " << c << "\n";
        }
    }
}
int input(){
    for (int i = 0; i < x*1000; i += 10) {
        std::this_thread::sleep_for(std::chrono::milliseconds(10));

        if (_kbhit()) {
            int ch = _getch();

            if (ch == 224) {
                ch = _getch();

                switch (ch) {
                    case 72: std::cout << "Freccia SU\n"; break;
                    case 80: std::cout << "Freccia GIU\n"; break;
                    case 75: std::cout << "Freccia SINISTRA\n"; break;
                    case 77: std::cout << "Freccia DESTRA\n"; break;
                }
            }
        }
    }

    return 0;
}

int main(){
    genMat();
    while(true){
        cout << blocco.riga << " " << blocco.colonna << endl;
        sleep(1);
        blocco.scendi(input());
    }

    system("pause");
    return 0;
}
