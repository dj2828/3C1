/*
bnv al luna park di gino
a cosa vuoi giocare
1 pallacanestro
2 butta giu i birilli

1: se indovini il numero(1-10) con range +-1 canestro, n +-2 ferro, 3 tiri. 1c vinci una busta pokemon, 2c auto rc, 3c pizza e bibita
2: 3 tiri, numero(0-5), chiedi user sei pronto?, se si premi 1 e viene generato un n da 0..5. sommati tutti. 0-6 null, 7-14 uno zaino, 15 peluche di panda gigante
*/
/*
    dichiaro le variabili int: gioco, randpalla, numpalla, canestri=0, randbi, punti=0
    chiedo che gioco vuole giocare e con un if li seleziono

    gioco 1:
        genero un numero casuale e faccio inserire il numero,
        con una serie di if controllo se:
            sono +-1 o = al numero casuale, se si aggiungo 1 a canestri
            sono +-2 ha preso il ferro
            qualsiasi altro numero è fuori
        ripeto quello tutto sopra per altre 2 volte
        poi con una serie di if controllo quanti canestri sono stati fatti e stampo il premio

    gioco 2:
        faccio premere un tasto per lanciare la palla.
        genera un numero casuale che viene sommato a punti.
        ripeto ciò per 3 volte
        con una serie di if stampo il premio corretto
*/
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    int gioco, randpalla, numpalla, canestri=0, randbi, punti=0;
    srand(time(NULL)); // inizializza rand num
    cout << "Benvenuto al luna park di Gino"<<endl;
    // scelta del gioco
    cout << "Che gioco vuoi giocare?\n1: pallacanestro\n2: butta giu i birilli"<<endl;
    cin >> gioco;

    // pallacanestro
    if(gioco==1){
        randpalla = 1+(rand()%10); // numero casuale

        // tentativo 1
        cout <<endl<< "Scegli un numero da 1 a 10: ";
        cin >> numpalla;
        // canestro con numpalla = al random con scarto +-1
        if(numpalla==randpalla-1 || numpalla==randpalla || numpalla==randpalla+1){
            cout << "Hai fatto canestro!"<<endl;
            canestri++;
        }
        // ferro con numpalla == +-2
        else if(numpalla==randpalla-2 || numpalla==randpalla+2){
            cout << "Hai preso il ferro!"<<endl;
        }
        // mancato con gli altri numeri
        else{
            cout << "Hai mancato il canestro!"<<endl;
        }

        // tentativo 2
        cout <<endl<< "Scegli un numero da 1 a 10: ";
        cin >> numpalla;
        if(numpalla==randpalla-1 || numpalla==randpalla || numpalla==randpalla+1){
            cout << "Hai fatto canestro!"<<endl;
            canestri++;
        }
        else if(numpalla==randpalla-2 || numpalla==randpalla+2){
            cout << "Hai preso il ferro!"<<endl;
        }
        else{
            cout << "Hai mancato il canestro!"<<endl;
        }

        // tentativo 3
        cout <<endl<< "Scegli un numero da 1 a 10: ";
        cin >> numpalla;
        if(numpalla==randpalla-1 || numpalla==randpalla || numpalla==randpalla+1){
            cout << "Hai fatto canestro!"<<endl;
            canestri++;
        }
        else if(numpalla==randpalla-2 || numpalla==randpalla+2){
            cout << "Hai preso il ferro!"<<endl;
        }
        else{
            cout << "Hai mancato il canestro!"<<endl;
        }

        cout <<endl<< "Hai fatto "<<canestri<<" canestri!"<<endl;
        if(canestri==1){
            cout << "Hai vinto una busta di carte Pokemon!"<<endl;
        }else if(canestri==2){
            cout << "Hai vinto una auto radiocomandata!"<<endl;
        }else if(canestri==3){
            cout << "Hai vinto una pizza + bibita!"<<endl;
        }else{
            cout << "Non hai vinto niente"<<endl;
        }
    }

    // birilli
    else if(gioco==2){
        // tentativo 1
        cout << "Premi invio per titare la palla"<<endl;
        system("pause");
        randbi = (rand()%6); // genera numero casuale
        punti += randbi; // aggiungi ai punti il numero casuale
        cout << "Hai colpito il birillo che vale "<<randbi<<" punti!"<<endl<<endl;

        // tentativo 2
        cout << "Premi invio per titare la palla"<<endl;
        system("pause");
        randbi = (rand()%6);
        punti += randbi;
        cout << "Hai colpito il birillo che vale "<<randbi<<" punti!"<<endl<<endl;

        // tentativo 3
        cout << "Premi invio per titare la palla"<<endl;
        system("pause");
        randbi = (rand()%6);
        punti += randbi;
        cout << "Hai colpito il birillo che vale "<<randbi<<" punti!"<<endl<<endl;

        cout << "Hai fatto "<<punti<<" punti"<<endl;
        if(punti<=6){
            cout << "Non hai vinto nulla"<<endl;
        }else if(punti>=7&&punti<=14){
            cout << "Hai vinto uno zaino!"<<endl;
        }else if(punti==15){
            cout << "Hai vinto un peluche di panda gigante!"<<endl;
        }
    }else{
        cout << "Numero non valido"<<endl;
    }

    system("pause");
    return 0;
}
