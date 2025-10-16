/*
dati due num b|h
out>>scrivi un rettangolo di asterisci con base b e h altezza
*/

/*
ANALISI:
Il programma chiede all'utente la base (b) e l'altezza (h) di un rettangolo.
Stampa un rettangolo di asterischi (*) pieno, dove ogni asterisco ha un colore casuale.
Utilizza le funzioni di Windows.h (GetStdHandle, SetConsoleTextAttribute) per cambiare il colore del testo.
Viene utilizzato un ciclo for esterno per l'altezza (righe) e un ciclo for interno per la base (colonne).
Viene generato un colore casuale (1-15) per ogni asterisco stampato.
Al termine, il colore del testo viene riportato al valore predefinito (7, bianco).
*/
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <windows.h> // Libreria necessaria per manipolare i colori nella console Windows
using namespace std;

int main(){
    int b, h, k;
    // Inizializza il generatore di numeri casuali
    srand(time(NULL));
    // Ottiene l'handle della console
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    // Richiesta e acquisizione della base del rettangolo
    cout << "Base: ";
    cin >> b;
    // Richiesta e acquisizione dell'altezza del rettangolo
    cout << "Altezza: ";
    cin >> h;

    // Ciclo esterno per le righe (altezza)
    for(int i=0; i<h; i++){
        // Ciclo interno per le colonne (base)
        for(int j=0; j<b; j++){
            // Genera un numero casuale (colore) tra 1 e 15
            k = 1+(rand()%15);
            // Imposta il colore del testo sulla console
            SetConsoleTextAttribute(hConsole, k);
            // Stampa l'asterisco
            cout << "*";
        }
        // A capo per passare alla riga successiva
        cout<<endl;
    }

    // Ripristina il colore del testo al valore predefinito (bianco, codice 7)
    SetConsoleTextAttribute(hConsole, 7);
    system("pause");
    return 0;
}