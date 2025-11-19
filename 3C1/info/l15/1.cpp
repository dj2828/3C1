/*
array int, caricato
appare:
1) visualizza
2) somma
3) ricerca di un numero dato e quante volte c'è
4) max e posizione
5) min e posizione
6) conta quanti pari/dispari ci sono (0 escluso)
7) media
8) crediti
9) exit
*/
#include <iostream>
using namespace std;

int main(){
    int s, n, somma=0, cerca, ncerca=0, maxn, maxpos, minn, minpos, pari=0, dispari=0;
    cout << "Inserisci la dimensione dell' array: ";
    cin >> n;
    int Numeri[n];

    for(int i=0; i<n; i++){
        cout << "Inserisci il numero in posizione " << i << ": ";
        cin >> Numeri[i];
    }

    system("cls");
    do{
        cout << endl <<endl << "1) Visualizza\n2) Somma\n3) Ricerca di un numero dato e quante volte c'\212\n4) Max e posizione\n5) Min e posizione\n6) Pari/dispari (0 escluso)\n7) Media\n8) Crediti\n9) Exit";
        cout << endl << "Inserisci la scelta: ";
        cin >> s;
        system("cls");
        switch(s){
        case 1:
            for(int i: Numeri)
                cout << i << " ";
            break;
        case 2:
            for(int i: Numeri)
                somma += i;
            cout << "Somma: " << somma;
            break;
        case 3:
            cout << "Inserisci il numero da cercare: ";
            cin >> cerca;
            for(int i: Numeri){
                if(cerca==i)
                    ncerca++;
            }
            cout << "Numero trovato " << ncerca << " volte";
            break;
        case 4:
            for(int i=0; i<n; i++){
                if(i==0){
                    maxn = Numeri[i];
                    maxpos = i;
                }
                if(Numeri[i]>maxn){
                    maxn = Numeri[i];
                    maxpos = i;
                }
            }
            cout << "Massimo: "<<maxn<<". Posizione: "<<maxpos;
            break;
        case 5:
            for(int i=0; i<n; i++){
                if(i==0){
                    minn = Numeri[i];
                    minpos = i;
                }
                if(Numeri[i]<minn){
                    minn = Numeri[i];
                    minpos = i;
                }
            }
            cout << "Massimo: "<<minn<<". Posizione: "<<minpos;
            break;
        case 6:
            for(int i: Numeri){
                if(i==0)
                    continue;
                if(i%2==0)
                    pari++;
                else
                    dispari++;
            }
            cout << "Pari: "<<pari<<". Dispari: "<<dispari;
            break;
        case 7:
            for(int i: Numeri){
                somma+=i;
            }
            cout << "Media: "<<(float)somma/n;
            break;
        case 8:
            cout <<""
                "   _____              _ _ _   _ \n"
                "  / ____|            | (_) | (_)\n"
                " | |     _ __ ___  __| |_| |_ _ \n"
                " | |    | '__/ _ \\/ _` | | __| |\n"
                " | |____| | |  __/ (_| | | |_| |\n"
                "  \\_____|_|  \\___|\\__,_|_|\\__|_|\n"
                "                                ";
            cout <<endl << "Made by Fausti Mattia\nCopyright 2025";
            break;
        case 9:
            break;
        default:
            cout << "Selta non valida";
        }
    }while(s!=9);

    return 0;
}
