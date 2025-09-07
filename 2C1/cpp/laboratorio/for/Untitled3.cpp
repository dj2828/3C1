/* dato l'elenco delle elaborazioni di tutti i dipendenti con codice dipendente e ore lavorate settimanali
ciascuno, calcola:
max ore
min ore
tot ore
med ore
ore lavorate da un dipendente di cui viene fornito il codice
n dipendenti che lavorano +20h*/

#include <iostream>
using namespace std;

int main()
{
    int n, h, hmax, hmin, tot=0, n20=0, cod;
    float hmed;

    cout << "Inserisci il numero di dipendenti: ";
    cin >> n;

    for(int i=0; i<n; i++){
        cout << endl;
        cout << "Inserisci il codice dipendente (0000): ";
        cin >> cod;
        cout << "Inserisci il numero di ore settimanali: ";
        cin >> h;

        if(i==0){
            hmax=h;
            hmin=h;
        }
        else if(n>hmax)
            hmax=n;
        else if(n<hmin)
            hmin=n;
        if(h>20)
            n20++;

        tot+=n;
    }

    hmed = (float)tot/n;

    cout << endl;
    cout << "Max: " << hmax << endl;
    cout << "Min: " << hmin << endl;
    cout << "Med: " << hmed << endl;
    cout << "Tot: " << tot << endl;
    cout << "N dipendenti >20h: " << n20 << endl;

    system("pause");
    return 0;
}
