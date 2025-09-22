/*
dati in input tre caratteri, dire quante vocali e consonanti sono state inserite,
esprimere il dato in percentuale
*/

/*
metto le 3 variabili char, poi con un if calcolo se sono vocali e aggiungo 1 alla variabile vocali.
poi calcolo la percentuale delle vocali e poi faccio la sottrazione per la percentuale delle consonanti.
*/

#include <iostream>
using namespace std;

int main(){
    //dichiarazione variabili
    char a, b, c;
    int vocali=0;
    float perv, perc;

    cout << "Inserisci il primo carattere: ";
    cin >> a;
    cout << "Inserisci il secondo carattere: ";
    cin >> b;
    cout << "Inserisci il terzo carattere: ";
    cin>> c;

    // controllo se a è una vocale
    if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
        // aggiungo 1 a vocali
        vocali ++;
    }
    // controllo se b è una vocale
    if (b=='a'||b=='e'||b=='i'||b=='o'||b=='u'){
        // aggiungo 1 a vocali
        vocali ++;
    }
    // controllo se c è una vocale
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        // aggiungo 1 a vocali
        vocali ++;
    }

    // percentuali
    perv = (float)vocali/3*100;
    perc = 100-perv;

    cout << endl << "Percentuale delle vocali: "<<perv<<"%"<<endl;
    cout << "Percentuale delle consonanti: "<<perc<<"%"<<endl;

    system("pause");
    return 0;
}
