#include <iostream>
using namespace std;

char r1[3] = {' ',' ',' '};
char r2[3] = {' ',' ',' '};
char r3[3] = {' ',' ',' '};
int giocate=0;

bool assegna(char player, int x, int y){
    if(y==1){
        if(r1[x-1]!=' ')
            return true;
        r1[x-1] = player;
    }
    else if (y==2){
        if(r2[x-1]!=' ')
            return true;
        r2[x-1] = player;
    }
    else if (y==3){
        if(r3[x-1]!=' ')
            return true;
        r3[x-1] = player;
    }
    return false;
}

void disp(){

    for(int i=0; i<3; i++){
        cout << r1[i];
        if (i!=2)
            cout << " | ";
    }
    cout << endl;
    for(int i=0; i<3; i++){
        cout << r2[i];
        if (i!=2)
            cout << " | ";
    }
    cout << endl;
    for(int i=0; i<3; i++){
        cout << r3[i];
        if (i!=2)
            cout << " | ";
    }
    cout << endl;
}

bool check(){
    char win=' ';

    // orizzontali
    if(r1[0] == r1[1] && r1[1] == r1[2] && r1[0] != ' ')
        win = r1[0];
    else if(r2[0] == r2[1] && r2[1] == r2[2] && r2[0] != ' ')
        win = r2[0];
    else if(r3[0] == r3[1] && r3[1] == r3[2] && r3[0] != ' ')
        win = r3[0];
    
    // verticali
    else if(r1[0] == r2[0] && r2[0] == r3[0] && r1[0] != ' ')
        win = r1[0];
    else if(r1[1] == r2[1] && r2[1] == r3[1] && r1[1] != ' ')
        win = r1[1];
    else if(r1[2] == r2[2] && r2[2] == r3[2] && r1[2] != ' ')
        win = r1[2];

    // diagonali
    else if(r1[0] == r2[1] && r2[1] == r3[2] && r1[0] != ' ')
        win = r1[0];
    else if(r1[2] == r2[1] && r2[1] == r3[0] && r1[2] != ' ')
        win = r1[2];

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
    cout << "X: ";
    cin >> x;
    cout << "Y: ";
    cin >> y;
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
