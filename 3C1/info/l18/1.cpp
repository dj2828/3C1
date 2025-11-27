/*
    mastermind
    rosso, verde, bianco, giallo

    chi gioca dice la sua sequenza
    master risponde 2 giusti 2 sbagliati

    tipo i tiktok di minecraft
*/
#include <iostream>
using namespace std;

char List[] = {'r', 'v', 'b', 'g'};
const int numero_colori=4;

char Master[numero_colori];
char Giocatore[numero_colori];

int corretti=0, sbagliato=0;

void InputMaster(){
    char appoggio, Appoggio[numero_colori];
    for(int i=0; i<numero_colori; i++)
        Appoggio[i] = List[i];
    bool ok;
    cout << "Bnv Master\nInserisci il colore"<<endl;
    for(int i=0; i<numero_colori; i++){
        ok = false;
        for(char i: Appoggio){
            cout << i << "\t";
        }
        cout << endl;
        do{
            cout << "Posizione " << i<<": ";
            cin >> appoggio;
            for(int j=0; j<numero_colori; j++){
                if(Appoggio[j]==appoggio){
                    ok = true;
                    Master[i] = Appoggio[j];
                    Appoggio[j] = ' ';
                }
            }
            if(!ok){
                cout << "INSERITO CARATTERE SBAGLIATO"<<endl;
            }
        }while(!ok);
    }
}

void InputG(){
    char appoggio, Appoggio[numero_colori];
    for(int i=0; i<numero_colori; i++)
        Appoggio[i] = List[i];
    bool ok;
    cout << "Inserisci il colore"<<endl;
    for(int i=0; i<numero_colori; i++){
        ok = false;
        for(char i: Appoggio){
            cout << i << "\t";
        }
        cout << endl;
        do{
            cout << "Posizione " << i<<": ";
            cin >> appoggio;
            for(int j=0; j<numero_colori; j++){
                if(Appoggio[j]==appoggio){
                    ok = true;
                    Giocatore[i] = Appoggio[j];
                    Appoggio[j] = ' ';
                }
            }
            if(!ok){
                cout << "INSERITO CARATTERE SBAGLIATO"<<endl;
            }
        }while(!ok);
    }
}

bool ceck(){
    corretti=0;
    sbagliato=0;
    for(int i=0; i<numero_colori; i++){
        if (Master[i] == Giocatore[i])
            corretti++;
        else
            sbagliato++;
    }

    if(corretti==numero_colori)
        return true;
    else
        return false;
}
int main(){
    bool prima_volta=true;
    InputMaster();

    do{
        system("cls");
        if(!prima_volta){
            if(sbagliato>0){
                cout << "Colori giusti: " << corretti << endl;
                cout << "Colori sbagliati: " << sbagliato << endl;
            }
            cout << "Inserito precedentemente: ";
            for(char i: Giocatore){
                cout << i << "\t";
            }
            cout << endl << endl;
        }else
            cout << "Bnv Giocatore" <<endl;
        InputG();
        prima_volta=false;
    }while(!ceck());

    cout << endl << "Risposta corretta!!!" << endl;

    system("pause");
    return 0;
}
