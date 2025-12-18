#include <iostream>
using namespace std;

char Tris[3][3] = {{' ', ' ', ' '},{' ', ' ', ' '},{' ', ' ', ' '}};
int giocate=0;

bool assegna(char player, int x, int y){
    if(Tris[y-1][x-1]!=' ')
        return true;
    Tris[y-1][x-1] = player;
    return false;
}

void disp(){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << Tris[i][j];
            if (j!=2)
                cout << " | ";
        }
        cout << endl;
    }
}

bool check(){
    char win=' ';

    // orizzontali
    for(int i=0; i<3; i++){
        if(Tris[i][0]==Tris[i][1] && Tris[i][1]==Tris[i][2] && Tris[i][2]!=' ')
            win = Tris[i][0];
    }

    // verticali
    for(int i=0; i<3; i++){
        if(Tris[0][i]==Tris[1][i] && Tris[1][i]==Tris[2][i] && Tris[2][i]!=' ')
            win = Tris[0][i];
    }

    // diagonali
    if(Tris[0][0]==Tris[1][1] && Tris[1][1]==Tris[2][2] && Tris[2][2]!=' '){
        win = Tris[0][0];
    }
    if(Tris[0][2]==Tris[1][1] && Tris[1][1]==Tris[2][0] && Tris[2][0]!=' '){
        win = Tris[0][2];
    }

    if(win!=' '){
        system("cls");
        disp();
        cout << "Vincitore " << win << endl;
        return false;
    }

    if(giocate==9){
        system("cls");
        disp();
        cout << "Pari" << endl;
        return false;
    }

    return true;
}

void turno(char player){
    cout << "Giocatore "<< player<<endl;
    disp();
    int x, y;
    cout << "Dove?"<<endl;
    cout << "Y: ";
    cin >> y;
    cout << "X: ";
    cin >> x;
    if(x>3||y>3){
        cout << "CORDINARE NON VALIDE" <<endl;
        turno(player);
    }

    if(assegna(player, x, y)){
        cout << "CORDINATE GIA PRESE"<<endl;
        turno(player);
    }
    system("cls");
}

int main(){
    char player='X';
    do{
        if(player=='X')
            player='O';
        else
            player='X';
        giocate++;
        turno(player);
    }while(check());

    system("pause");
    return 0;
}
