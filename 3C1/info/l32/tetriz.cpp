#include <iostream>
#include <thread>
#include <chrono>
#include <conio.h>
#include <vector>
#include <cmath>
#include <cstdlib>
using namespace std;

const int r=15, c=10;

char Mat[r][c];

void sleep(int x){
    std::this_thread::sleep_for(std::chrono::milliseconds(x*1000));
}

struct blocco_base{
    int riga, colonna;
    vector<array<int,2>> forma;
    blocco_base(int forma_tipo=0){
        riga = 0;           // Inizializza SEMPRE a 0
        colonna = c / 2;    // Parte dal centro
        if(forma_tipo == 0){
            forma.push_back({0, 0}); // prima coordinata riga/colonna
        }
        else if(forma_tipo == 1){ //riga
            forma.push_back({0, 0}); // prima coordinata riga/colonna
            forma.push_back({0, 1}); // seconda coordinata riga/colonna
        }
        else if(forma_tipo == 2){ //quadrato
            forma.push_back({0, 0});
            forma.push_back({0, 1});
            forma.push_back({1, 0});
            forma.push_back({1, 1});
        }
    }
    void pos(int r, int c){
        riga = r;
        colonna = c;
    }
    bool posso_spostarmi(int x){
        if(x==1){ // destra
            if(Mat[riga][colonna+1] != '-' && colonna < c-1) return true;
        }
        else if(x==2){ // sinistra
            if(Mat[riga][colonna-1] != '-' && colonna > 0) return true;
        }

        return false;
    }
    void sposta(int direzione=0){
        if(direzione==1 && posso_spostarmi(1)) colonna++; // destra
        if(direzione==2 && posso_spostarmi(2)) colonna--; // sinistra
    }
    void scendi(){
        if(riga<=r-1 && Mat[riga][colonna] != '-') riga++;
    }
};
blocco_base blocco;

void genBlocco(){
    int random = rand()%3;
    cout << "RANDOM " << random << endl;
    blocco = blocco_base(random);
}

void check_in_fondo(){
    if(!(blocco.riga<=r-1 && Mat[blocco.riga][blocco.colonna] != '-')){
        Mat[(Mat[blocco.riga][blocco.colonna] == '-') ? blocco.riga-1 : r-1][blocco.colonna] = '-';
        genBlocco();
    }
}

bool check_se_ce_il_blocco(int i, int j){
    bool il_blocco_ce = false;
    for(int k=0; k<blocco.forma.size(); k++){
        if(blocco.riga + blocco.forma[k][0] == i && blocco.colonna + blocco.forma[k][1] == j)
            il_blocco_ce = true;
    }

    return il_blocco_ce;
}
void aggiorna_mat(){
    check_in_fondo();
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(Mat[i][j] == '-') Mat[i][j] = '-';
            Mat[i][j] = (check_se_ce_il_blocco(i, j)) ? 'X' : '*';
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
    srand(time(NULL));
    genMat();
    genBlocco();
    while(true){
        disp();
        input();
    }
    system("pause");
    return 0;
}
