#include <iostream>
using namespace std;

char A[3][3] = {};
int giocate=0;

bool assegna(char player, int x){
    A[x-1] =
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
        for(int j=0; i<3; i++){
            cout << r1[i];
            if (i!=2)
                cout << " | ";
        }
        cout << endl;
    }
}

bool check(){
    char win=' ';
    for(char i: A){
        if(i[0]==i[1]==i[2]&&i[0]!=' ')
            win = i[0];
    }

    for(int i=0; i<3; i++){
        if(A[0][i]==A[1][i]==A[2][i]&&A[0][i]!=' ')
            win = A[0][i];
    }

    if(A[0][0]==A[1][1]==A[2][2]&&A[0][0]!=' ')
        win = A[0][0];
    else if(A[2][0]==A[1][1]==A[0][2]&&A[2][0]!=' ')
        win = A[2][0];

    cout << "win "<<win<<endl;

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
    int x;
    cout << "Dove?"<<endl;
    cin >> x;
    if(x>9||x<=0){
        cout << "CORDINARE NON VALIDE" <<endl;
        turno(player);
    }

    if(assegna(player, x)){
        cout << "CORDINATE GIA PRESE"<<endl;
        turno(player);
    }
    system("cls");
}

int main(){
    char player;
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
