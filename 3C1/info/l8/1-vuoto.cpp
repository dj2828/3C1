/*
dati due num b|h
out>>scrivi un rettangolo di asterisci con base b e h altezza
*/

/*
ANALISI:
Il programma chiede all'utente la base (b) e l'altezza (h) di un rettangolo.
Stampa un rettangolo di asterischi (*) cavo (vuoto all'interno).
Viene utilizzato un ciclo for esterno per l'altezza (righe) e un ciclo for interno (implicito/esplicito) per la base (colonne).
Le righe superiore (i=0) e inferiore (i=h-1) sono riempite interamente di asterischi.
Le righe intermedie (else) stampano un asterisco all'inizio, b-2 spazi vuoti e un asterisco alla fine.
*/

#include <iostream>
using namespace std;

int main(){
    int b, h;
    // Richiesta e acquisizione della base del rettangolo
    cout << "Base: ";
    cin >> b;
    // Richiesta e acquisizione dell'altezza del rettangolo
    cout << "Altezza: ";
    cin >> h;

    // Ciclo esterno per l'altezza (righe)
    for(int i=0; i<h; i++){
        // Condizione per disegnare la riga superiore (i==0) o inferiore (i==h-1)
        if(i==0||i==h-1){
            // Ciclo interno per stampare la riga interamente riempita di asterischi
            for(int j=0; j<b; j++){
                cout << "*";
            }
        }
        // Condizione per disegnare le righe intermedie (cavo)
        else{
            // Stampa l'asterisco iniziale
            cout<<"*";
            // Ciclo interno per stampare gli spazi vuoti (b-2)
            for(int j=0; j<b-2; j++){
                cout<<" ";
            }
            // Stampa l'asterisco finale
            cout<<"*";
        }
        // A capo per passare alla riga successiva
        cout<<endl;
    }

    system("pause");
    return 0;
}