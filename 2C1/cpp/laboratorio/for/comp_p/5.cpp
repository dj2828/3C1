#include <iostream>
using namespace std;

int main() {
    int n, cilindrata, Cilindrata50 = 0, Cilindrata50Prezzo2000 = 0, Cilindrata50OPrezzo2000 = 0;
    float prezzo, prezzoMax = 0, prezzoMin = 0, sommaPrezzi = 0, prezzoMedio;
    string nome, modelliPrezzo1000;

    cout << "Inserisci il numero di modelli: ";
    cin >> n;


    for (int i = 0; i < n; i++) {
        cout << "Inserisci il nome del modello: ";
        cin >> nome;
        cout << "Inserisci la cilindrata del modello: ";
        cin >> cilindrata;
        cout << "Inserisci il prezzo del modello: ";
        cin >> prezzo;

        if (i == 0) {
            prezzoMax = prezzo;
            prezzoMin = prezzo;
        } else {
            if (prezzo > prezzoMax) {
                prezzoMax = prezzo;
            }
            if (prezzo < prezzoMin) {
                prezzoMin = prezzo;
            }
        }

        sommaPrezzi += prezzo;

        if (cilindrata > 50) Cilindrata50++;

        if (cilindrata > 50 && prezzo > 2000) Cilindrata50Prezzo2000++;

        if (cilindrata > 50 || prezzo > 2000) Cilindrata50OPrezzo2000++;

        if (prezzo > 1000) {
            modelliPrezzo1000 += "| " + nome + " |";
        }
    }

    prezzoMedio = (float)sommaPrezzi / n;

    cout << "Prezzo massimo: " << prezzoMax << endl;
    cout << "Prezzo minimo: " << prezzoMin << endl;
    cout << "Prezzo medio: " << prezzoMedio << endl;
    cout << "Numero di ciclomotori con cilindrata > 50cc: " << Cilindrata50 << endl;
    cout << "Numero di ciclomotori con cilindrata > 50cc e prezzo > 2000 euro: " << Cilindrata50Prezzo2000 << endl;
    cout << "Numero di ciclomotori con cilindrata > 50cc o prezzo > 2000 euro: " << Cilindrata50OPrezzo2000 << endl;
    cout << "Modelli con prezzo maggiore di 1000 euro: " << modelliPrezzo1000 << endl;

    system("pause");
    return 0;
}