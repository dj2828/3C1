/*
    ci sono 3 chirurghi che ogni settimana effettano un determinato numero di interventi
    (1 settimana lavorativa è di 5 giorni),
    il vettore è di 7 elementi i due giorni non lavorativi valgono 0
    i tre non hanno gli stessi giorni non lavorativi
    dopo averli caricati e visualizzati con valori che vanno da 1 a 6
    trovare
    - quale dei 3 medici ha effettuato il maggior numero di interventi e in che giorno della
    settimana
    - calcolare il totale di operazioni svolte nella settimana di ogni medico
    - quale dei  3 ha dovuto operare di più
    - quale dei  3 ha dovuto operare di meno
*/
#include <iostream>
using namespace std;

void carica(int v[7]) {
    for(int i = 0; i < 7; i++) {
        cout << "Inserisci interventi giorno " << i << ": ";
        cin >> v[i];
    }
}

void stampa(int v[7]) {
    for(int i = 0; i < 7; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int totale(int v[7]) {
    int somma = 0;

    for(int i = 0; i < 7; i++) {
        somma = somma + v[i];
    }

    return somma;
}

int maxGiorno(int v[7]) {
    int nmax = v[0];

    for(int i = 1; i < 7; i++) {
        if(v[i] > nmax) {
            nmax = v[i];
        }
    }

    return nmax;
}

int giornoMax(int v[7]) {
    int nmax = v[0];
    int giorno = 0;

    for(int i = 1; i < 7; i++) {
        if(v[i] > nmax) {
            nmax = v[i];
            giorno = i;
        }
    }

    return giorno;
}

int main() {
    int m1[7];
    int m2[7];
    int m3[7];

    cout << "Medico 1\n";
    carica(m1);

    cout << "Medico 2\n";
    carica(m2);

    cout << "Medico 3\n";
    carica(m3);

    cout << "\nValori inseriti:\n";
    stampa(m1);
    stampa(m2);
    stampa(m3);

    int tot1 = totale(m1);
    int tot2 = totale(m2);
    int tot3 = totale(m3);

    cout << "\nTotali settimanali:\n";
    cout << "Medico 1: " << tot1 << endl;
    cout << "Medico 2: " << tot2 << endl;
    cout << "Medico 3: " << tot3 << endl;

    int max1 = maxGiorno(m1);
    int max2 = maxGiorno(m2);
    int max3 = maxGiorno(m3);

    int g1 = giornoMax(m1);
    int g2 = giornoMax(m2);
    int g3 = giornoMax(m3);

    cout << "\nMassimo interventi in un giorno:\n";
    cout << "Medico 1: " << max1 << " giorno " << g1 << endl;
    cout << "Medico 2: " << max2 << " giorno " << g2 << endl;
    cout << "Medico 3: " << max3 << " giorno " << g3 << endl;

    int maxTot = tot1;
    int minTot = tot1;
    int medicoMax = 1;
    int medicoMin = 1;

    if(tot2 > maxTot) {
        maxTot = tot2;
        medicoMax = 2;
    }

    if(tot3 > maxTot) {
        maxTot = tot3;
        medicoMax = 3;
    }

    if(tot2 < minTot) {
        minTot = tot2;
        medicoMin = 2;
    }

    if(tot3 < minTot) {
        minTot = tot3;
        medicoMin = 3;
    }

    cout << "\nHa operato di piu: Medico " << medicoMax << endl;
    cout << "Ha operato di meno: Medico " << medicoMin << endl;

    system("pause");
    return 0;
}
