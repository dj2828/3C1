#include <iostream>
using namespace std;

int main() {
    int eta, n, maxEta, minEta, sommaEta = 0, maggiorenni = 0, bambini = 0, i = 0;
    float etaMedia;

    cout << "Inserisci il numero di persone: ";
    cin >> n;

    while (i < n) {
        cout << "Inserisci l'eta di una persona ";
        cin >> eta;

        if (i == 0) {
            maxEta = eta;
            minEta = eta;
        }
        else if (eta > maxEta) {
            maxEta = eta;
        }
        else if (eta < minEta) {
            minEta = eta;
        }

        sommaEta += eta;

        if (eta >= 18){
            maggiorenni++;
        }
        if (eta >= 3 && eta <= 6){
            bambini++;
        } 

        i++;
    }

    etaMedia = (float)sommaEta / n;

    cout << "Eta massima: " << maxEta << endl;
    cout << "Eta minima: " << minEta << endl;
    cout << "Eta media: " << etaMedia << endl;
    cout << "Numero di maggiorenni: " << maggiorenni << endl;
    cout << "Numero di bambini tra 3 e 6 anni: " << bambini << endl;

    return 0;
}