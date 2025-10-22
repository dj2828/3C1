#include <iostream>
using namespace std;

char r1[3] = {' ',' ',' '};
char r2[3] = {' ',' ',' '};
char r3[3] = {' ',' ',' '};

void assegna(char player, int x, int y){
    if(y==1){
        r1[x-1] = player;
    }
    else if (y==2){
        r2[x-1] = player;
    }
    else if (y==3){
        r3[x-1] = player;
    }
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

void turno(char player){
    cout << "Giocatore "<< player<<endl;
    disp();
    int x, y;
    cout << "Dove?: ";
    cin >> x;
    cin >> y;

    assegna(player, x, y);

}

int main(){
    char player;
    while(true){
        if(player=='X')
            player='O';
        else
            player='X';
        turno(player);
    }

    disp();

    system("pause");
    return 0;
}
