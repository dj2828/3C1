/*
dati due num b|h
out>>scrivi un rettangolo di asterisci con base b e h altezza
*/

/*
ANALISI:
Il programma chiede all'utente la base (b) e l'altezza (h) di un rettangolo.
Stampa un rettangolo di asterischi (*) pieno.
Viene utilizzato un ciclo for esterno per l'altezza (righe) e un ciclo for interno per la base (colonne).
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

    // Ciclo for per le righe (altezza)
    for(int i=0; i<h; i++){
        // Ciclo for per le colonne (base)
        for(int j=0; j<b; j++){
            // Stampa un asterisco per ogni colonna
            cout << "*";
        }
        // A capo per passare alla riga successiva
        cout<<endl;
    }

    system("pause");
    return 0;
}