#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    // dichiarazione variabili
    // s: scelta
    // numero: il numero da convertire
    int s, numero;

    // input scelta conversione
    cout << "1) Decimale --> Binario"<<endl;
    cout << "2) Binario --> Decimale"<<endl;
    cin >> s;

    // conversione da Decimale a Binario
    if(s==1){
        // dichiarazione vettore risultato
        vector<int> risultato;

        // input del numero
        cout << "Inserisci il numero: ";
        cin >> numero;

        // continua fino a quando il numero è positivo
        while(numero > 0){
            risultato.insert(risultato.begin(), numero%2); // aggiunge il resto del numero diviso per 2 all'inizio del vettore
            numero = numero/2; // divide il numero per 2 e lo salva in numero
        }

        // output risultato
        cout << "Il numero \212: ";
        for(int i=0; i<risultato.size(); i++){
            cout << risultato[i];
        }
    }
    // conversione da Binario a Decimale
    else if(s==2){
        // dichiarazione variabili
        int risultato=0;
        vector<int> cifre;

        // input numero
        cout << "Inserisci il numero: ";
        cin >> numero;

        // continua fino a quando il numero è positivo
        while (numero > 0) {
            int cifra = numero % 10;  // prende l'ultima cifra del numero
            cifre.push_back(cifra); // aggiunge l'ultima cifra alla fine del vettore
            numero /= 10;               // elimina l'ultima cifra del numero
        }

        for(int i=0; i<cifre.size(); i++){
            // per ogni cifra la moltiplica per 2 alla posizione nel vettore e lo somma a risultato
            risultato += cifre[i]*pow(2,i);
        }

        // output risultato
        cout << "Il numero \212: " << risultato;
    }

    cout <<endl;

    system("pause");
    return 0;
}
