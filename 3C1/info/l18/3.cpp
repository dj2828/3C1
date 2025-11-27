/*
    labirinto, prendi il valore comune per andare avanti
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    const int numero_array=3;
    const int numero_elementi=4;
    const int inizio_intervallo=1, fine_intervallo=10;

    int A1[numero_elementi]={}, A2[numero_elementi]={}, comune, appoggio, soldi=0;
    bool ok, perso=false;

    srand(time(NULL));

    // inizializza A1
    for(int j=0; j<numero_elementi; j++){
        do{
            ok=false;
            appoggio = inizio_intervallo+rand()%fine_intervallo;
            for(int i: A1){
                if(i==appoggio){
                    ok=true;
                    break;
                }
            }
            if(!ok)
                A1[j] = appoggio;
        }while(ok);
    }

    // gioco principale
    for(int i=0; i<numero_array; i++){
        // inizializza A2
        for(int j=0; j<numero_elementi; j++){
            do{
                ok=false;
                appoggio = inizio_intervallo+rand()%fine_intervallo;
                for(int x: A2){
                    if(x==appoggio){
                        ok=true;
                        break;
                    }
                }
                if(!ok)
                    A2[j] = appoggio;
            }while(ok);
        }
        ok=false;

        //controllo se numeri comuni sono presenti
        for(int j=0; j<numero_elementi; j++){
            for(int x=0; x<numero_elementi; x++){
                if(A1[j]==A2[x]){
                    ok=true;
                    break;
                }
            }
            if(ok)
                break;
        }
        if(ok){ // se i vettori hanno cose in comune
            ok=false;

            for(int j: A1)
                cout << j << "\t";
            cout << endl;
            for(int j: A2)
                cout << j << "\t";
            cout << endl;

            // input user
            do{
                cout << endl << "Inserisci il valore comune: ";
                cin >> comune;

                // controllo se inserito è giusto
                for(int j=0; j<numero_elementi; j++){
                    for(int x=0; x<numero_elementi; x++){
                        if(A1[j]==A2[x] && A1[j]==comune) // se giusto
                            ok = true;
                    }
                }
                if(ok){ // se giusto
                    for(int j=0; j<numero_elementi; j++){
                        // mette A2 in A1 e azzera A2
                        A1[j]=A2[j];
                        A2[j]=0;
                    }
                    soldi+=comune;
                }

            }while(!ok);
        }else{
            system("cls");
            cout << "SEI RIMASTO IN TRAPPOLA, HAHAHAhAHHAHAHAHAahaHAHAhhahahAaHahahAh" << endl;
            perso=true;
            break;
        }
    }

    if(!perso){
        system("cls");
        cout << "Sei uscito dal labirinto!!!" << endl;
        cout << "Hai totlaizzato Euro " << soldi << endl;
    }

    system("pause");
    return 0;
}
