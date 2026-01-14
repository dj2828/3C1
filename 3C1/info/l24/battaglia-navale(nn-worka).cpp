/* questa versione non worka, proprio non ha senso per la battaglia navale,
pero si compila e va tutto quello che cè */

#include <iostream>
#include <vector>
#include <array>
using namespace std;

const int n1=4, n2=3, n3=2, n4=1, n5=1;

class Nave{
public:
    int dimensione, player;
    vector<array<int,2>> pos;
    Nave(int Dimensione, int Player) : dimensione(Dimensione), pos(Dimensione, {-1,-1}), player(Player) {}
    bool check_disp(int x, int y){
        for(int i=0; i<dimensione; i++){
            if(x == pos[i][0] && y == pos[i][1]) return false;
        }
        return true;
    }
};

vector<Nave> Navi;

int numero_navi;
int player=0;

void Crea_navi(){
    for(int i=0; i<n1; i++){
        Navi.push_back(Nave(1,player));
    }
    for(int i=0; i<n2; i++){
        Navi.push_back(Nave(2,player));
    }
    for(int i=0; i<n3; i++){
        Navi.push_back(Nave(3,player));
    }
    for(int i=0; i<n4; i++){
        Navi.push_back(Nave(4,player));
    }
    for(int i=0; i<n5; i++){
        Navi.push_back(Nave(5,player));
    }
}

void Disp(){
    for (int j=0; j<=10; j++){
        if(j==0){
            for(int k=0; k<10; k++){
                if(k==0) cout << "  ";
                cout << k << "\t";
            }
            cout << endl;
            continue;
        }
        cout << j-1 << "|";
        for(int k=0; k<10; k++){
            string scrivi = "0";
            
            for(int s=0; s<Navi.size(); s++){
                if(!Navi[s].check_disp(j,k))
                    scrivi = Navi[s].dimensione;
            }
            cout << scrivi << "\t";
        }
        cout << endl;
    }
}

void Disp_navi(){
    int j=0;
    for(int i=0; i<Navi.size(); i++){
        if(Navi[i].pos[0][0]!=-1)
            continue;
        cout << j++ << "|";
        for(int j=0; j<Navi[i].dimensione; j++)
            cout << "X ";
        cout << endl;
    }
}

vector<array<int,2>> Trova_cordinate(int x, int y, int direzione, int lunghezza){
    vector<array<int,2>> pos;
    pos.resize(lunghezza);
    switch(direzione){
    case 1:
        for(int i=0; i<lunghezza; i++){
            pos[i][0] = x;
            pos[i][1] = y+lunghezza;
        }
        break;
    case 2:
        for(int i=0; i<lunghezza; i++){
            pos[i][0] = x;
            pos[i][1] = y-lunghezza;
        }
        break;
    case 3:
        for(int i=0; i<lunghezza; i++){
            pos[i][0] = x+lunghezza;
            pos[i][1] = y;
        }
        break;
    case 4:
        for(int i=0; i<lunghezza; i++){
            pos[i][0] = x-lunghezza;
            pos[i][1] = y;
        }
        break;
    }
    return pos;
}

bool Check_cordinate_set_valide(vector<array<int,2>> pos){
    for(int k=0; k<Navi.size(); k++){
        for(int i=0; i<pos.size(); i++){
            for(int j=0; j<2; j++){
                if(pos[i][j]>=10 || pos[i][j]<0) return false;
                if(pos[i][j] == Navi[k].pos[i][j]) return false;
            }
        }
    }
    return true;
}

void Assegna_nave(int numero_nave){
    if(player==2) numero_nave+=numero_navi;
    int x, y, direzione;
    while(true){
        cout << "In che posizione la metti:"<<endl;
        cout << "X: ";
        cin >> x;
        cout << "Y: ";
        cin >> y;
        cout << "Inserisci la direzione(1su, 2giu, 3destra, 4sinistra): ";
        cin >> direzione;

        vector<array<int, 2>> cordinate = Trova_cordinate(x, y, direzione, Navi[numero_nave].dimensione);
        if(!Check_cordinate_set_valide(cordinate)){
            cout << "Cordinate non valide, reinseriscile" << endl;
        }
        else{
            Navi[numero_nave].player = player;
            Navi[numero_nave].pos = cordinate;
            return;
        }
    }
}

void Set_navi(){
    for(int i=0; i<Navi.size(); i++){
        cout << "Giocatore " << player << ":" << endl;
        Disp();
        Disp_navi();

        cout << "Che nave vuoi: ";
        int numero_nave;
        cin >> numero_nave;
        Assegna_nave(numero_nave);
    }
}

int main(){
    Crea_navi();
    Set_navi();
    do{
        if(player==0)
            player=1;
        else
            player=0;

    }while(true);

    system("pause");
    return 0;
}
