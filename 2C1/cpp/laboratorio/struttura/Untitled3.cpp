// scrivi un proggramma che determini il numero di scatti effettuati da un utente telefonico e
// l'ammontare della sua bolletta
// cengono forniti in input i seguenti dati
// nome dell' utente
// numero di scatti emessi dalla bolletta precedente
// numero di scatti emessi dalla bolletta attuale
// il costo dello scatto
// si ricorda che per determinare il valore della bolletta occorre aggiungere un canone fisso
// il cui importo è fornito in input

#include <iostream>
using namespace std;

int main()
{
    string utente;
    int sbp, sba;
    float cscatto, canone, costob;

    cout<< "Inserisci il tuo nome " << endl;
    cin >> utente;
    cout << "Inserisci il numero di scatti della bolletta precedente " << endl;
    cin >> sbp;
    cout << "Inserisci il numero di scatti della bolletta attuale " << endl;
    cin >> sba;
    cout << "Inserisci il costo di uno scatto " << endl;
    cin >> cscatto;
    cout << "Inserisci il costo del canone " << endl;
    cin >> canone;

    system("PAUSE");
    return 0;
}
