#include <iostream>
using namespace std;

/*
controllo se il carattere è un simbolo matematico, lo stampo e aggiungo 1 a sim
se non lo è stampo il carattere e aggiungo 1 a car
poi calcolo le percentuali
*/

int main(){
    int n, sim=0, car=0;
    char carattere;
    float persim, percar;

    // input numero caratteri
    cout << "Inserisci il numero dei caratteri: ";
    cin >> n;

    for(int i=0; i<n; i++){
        // input carattere
        cout << "Inserisci il carattere: ";
        cin >> carattere;

        switch(carattere){
            // se carattere è +
            case '+':
                // output "Addizione"
                cout << "Addizione"<<endl;
                // aggiungo 1 al contatore dei simboli matematici
                sim++;
                break;
            // se carattere è -
            case '-':
                // output "Sottrazione"
                cout << "Sottrazione"<<endl;
                // aggiungo 1 al contatore dei simboli matematici
                sim++;
                break;
            // se carattere è *
            case '*':
                // output "Prodotto"
                cout << "Prodotto"<<endl;
                // aggiungo 1 al contatore dei simboli matematici
                sim++;
                break;
            // se carattere è /
            case '/':
                // output "Divisione"
                cout << "Divisione"<<endl;
                // aggiungo 1 al contatore dei simboli matematici
                sim++;
                break;
            // se carattere non è uno dei precedenti
            default:
                // output "Carattere"
                cout << "Carattere: "<<carattere<<endl;
                // aggiungo 1 al contatore dei caratteri
                car++;
        }
    }

        // calcolo percentuali
        persim = (float)sim/n*100;
        percar = (float)car/n*100;

        // output percentuali
        cout << "Percentuale simboli matematici: "<<persim<<endl;
        cout << "Percentuale caratteri: "<<percar<<endl<<endl;


    system("pause");
    return 0;
}
