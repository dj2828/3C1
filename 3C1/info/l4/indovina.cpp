/*
il computer genera un rand tra 12..23, l'utente avra 3 tentativi per indovinare.
*/
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    int indovina, risp, vite=0;
    srand(time(NULL)); // inizializza rand num
    indovina = 12+(rand()%12);
    cout << "N generato: "<<indovina<<endl<<endl<<endl;
    cout << "Bnv nel gioco indovina il numero"<<endl;
    cout << "Inserisci la tua risposta: ";
    cin >> risp;

    if(risp==indovina){
        cout << "Hai indovinato il numero al " <<vite+1<< " tentativo"<<endl;
        system("pause");
        return 0;
    }
    else{
        cout << "Hai perso"<<endl;
        vite++;
    }

    cout << "Inserisci la tua risposta: ";
    cin >> risp;
    if(risp==indovina){
        cout << "Hai indovinato il numero al " <<vite+1<< " tentativo"<<endl;
        system("pause");
        return 0;
    }
    else{
        cout << "Hai perso"<<endl;
        vite++;
    }

    cout << "Inserisci la tua risposta: ";
    cin >> risp;
    if(risp==indovina){
        cout << "Hai indovinato il numero al " <<vite+1<< " tentativo"<<endl;
        system("pause");
        return 0;
    }
    else{
        cout << "Hai perso"<<endl;
        vite++;
    }


    system("pause");
    return 0;
}
