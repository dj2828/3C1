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
    if(!damone) r++;
    c = (d==1) ? c-- : c++;

    if(M[r][c]=='*') return 0;
    if(M[r][c]!=g){
        r++;
        c = (d==1) ? c-- : c++;

    }

    return 0;
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
    controllo(r, c, d, g);
}

int main(){
    genera_mat();
    disp();

    turno('B');

    system("pause");
    return 0;
}
