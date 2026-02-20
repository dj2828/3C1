#include <iostream>
#include <thread>
#include <chrono>
#include <conio.h>
using namespace std;

const int r=15, c=10;

char Mat[r][c];

struct blocco_base{
    int riga, colonna;
    void pos(int r, int c){
        riga = r;
        colonna = c;
    }
    int posso_spostarmi(int x){
        
        return 1;
    }
    void sposta(int direzione=0){
        if(direzione==1 && colonna<c-1) colonna++; // destra
        if(direzione==2 && colonna>0) colonna--; // sinistra
    }
    void scendi(){
        if(riga<=r-1 && Mat[riga][colonna] != '-') riga++;
    }

};
blocco_base blocco;


void genBlocco(){
    blocco = blocco_base();
}

void check_in_fondo(){
    if(!(blocco.riga<=r-1 && Mat[blocco.riga][blocco.colonna] != '-')){
        Mat[(Mat[blocco.riga][blocco.colonna] == '-') ? blocco.riga-1 : r-1][blocco.colonna] = '-';
        genBlocco();
    }
}

void aggiorna_mat(){
    check_in_fondo();
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(Mat[i][j] == '-') Mat[i][j] = '-';
            else Mat[i][j] = (blocco.riga == i && blocco.colonna == j) ? 'X' : '*';
        }
    }
}


void disp(){
    aggiorna_mat();
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

void sleep(int x){
    std::this_thread::sleep_for(std::chrono::milliseconds(x*1000));
}
int input(int refresh_rate = 250){
    blocco.scendi();
    for (int i = 0; i < refresh_rate; i += 10) {
        std::this_thread::sleep_for(std::chrono::milliseconds(10));

        if (_kbhit()) {
            int ch = _getch();

            if (ch == 224) {
                ch = _getch();

                switch (ch) {
                    case 80: std::cout << "Freccia GIU\n"; blocco.scendi(); break;
                    case 75: std::cout << "Freccia SINISTRA\n"; blocco.sposta(2); break;
                    case 77: std::cout << "Freccia DESTRA\n"; blocco.sposta(1); break;
                }
                disp();
            }
        }
    }
    return 0;
}

int main(){
    genMat();
    while(true){
        disp();
        input();
    }
    system("pause");
    return 0;
}
