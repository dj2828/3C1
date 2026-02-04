#include <iostream>
using namespace std;

int n = 8, righe_pedine = 3;
char M[8][8];

void disp(){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}

void genera_mat(){
    bool bianco=true;
    for(int i=0; i<n; i++){
        bianco = !bianco;
        for(int j=0; j<n; j++){
            bianco = !bianco;
            M[i][j] = (bianco) ? ' ' : '*';
        }
    }
    for(int i=0; i<righe_pedine; i++){
        for(int j=0; j<n; j++)
            if(M[i][j]=='*') M[i][j] = 'N';
    }
    for(int i=n; i>=n-righe_pedine; i--){
        for(int j=0; j<n; j++)
            if(M[i][j]=='*') M[i][j] = 'B';
    }
}

int controllo(int r, int c, int d, char g, bool damone=false){
    char nemico = (g='B') ? 'N' : 'B';
    (g=='B') ? r-- : r++;
    (d==1) ? c-- : c++;

    if(M[r][c]=='*') return 0;
    if(M[r][c]==nemico){
        (g=='B') ? r-- : r++;
        (d==1) ? c-- : c++;
        return (M[r][c]=='*') ? 1 : 2;
    }
s
    return 0;
}

void sposta(int r, int c, int d, char g, int cosa, bool damone=false){
    if(cosa==0){
        M[r][c] = '*';
        (g=='B') ? r-- : r++;
        (d==1) ? c-- : c++;
        M[r][c] = g;
    }
    if(cosa==1){
        M[r][c] = '*';
        (g=='B') ? r-- : r++;
        (d==1) ? c-- : c++;
        M[r][c] = '*';
        (g=='B') ? r-- : r++;
        (d==1) ? c-- : c++;
        M[r][c] = g;
    }
}

void turno(char g){
    int r, c, d;
    cout << g << " cosa vuoi muovere?\nRiga: ";
    do{
    cin >> r;
    cout << "Colonna: ";
    cin >> c;
    if(M[r][c] != g) cout << "ERRORE" << endl;
    }while(M[r][c] != g);
    cout << "Dove vuoi muovere?\n1-SX, 2-DX: ";
    cin >> d;
    sposta(r, c, d, g, controllo(r, c, d, g));
}

int main(){
    char p = 'N';
    genera_mat();

    while(true){
        //system("cls");
        disp();
        turno((p == 'B') ? 'N' : 'B');
    }

    system("pause");
    return 0;
}
