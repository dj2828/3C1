/*
chiede num poi estrai 5 num random 1-90(tombola)
out: se il numero è uscito.
*/

/*
ANALISI:
Il programma simula una mini-estrazione della tombola.
Chiede all'utente un numero (il proprio).
Estrae 5 numeri casuali compresi tra 1 e 90 (simulazione della tombola).
Verifica se il numero dell'utente è presente tra i 5 estratti.
Stampa i numeri estratti e un messaggio che indica se il numero dell'utente è uscito.
Viene utilizzata la funzione srand(time(NULL)) per inizializzare il generatore di numeri casuali.
*/
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    int num, numero;
    // Variabile booleana per tracciare se il numero dell'utente è stato estratto
    bool uscito = false; // Inizializzazione a false

    // Inizializza il generatore di numeri casuali con il tempo corrente
    srand(time(NULL));
    // Richiesta e acquisizione del numero dell'utente
    cout << "Inserisci il tuo numero (1-90): ";
    cin >> num;

    cout << "Numeri estratti: ";
    // Ciclo per estrarre 5 numeri casuali
    for(int i=0; i<5; i++){
        // Generazione di un numero casuale tra 1 e 90
        numero = 1+(rand()%90);
        // Stampa il numero estratto
        cout << numero<<" ";
        // Verifica se il numero estratto è uguale al numero dell'utente
        if(num==numero){
            uscito=true;
        }
    }
    cout <<endl;
    // Verifica finale e stampa del risultato
    if(uscito){
        cout<< "Un numero \212 uscito!"<<endl;
    } else {
        cout<< "Nessun numero e' uscito."<<endl;
    }

    system("pause");
    return 0;
}