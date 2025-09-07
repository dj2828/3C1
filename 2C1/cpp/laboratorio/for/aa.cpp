/* dato un elenco n di computer di cui si conosce il tipo(desktop, notebook, tablet),
il modello,
prezzo,

visualizza il pmax, pmin, pmed
visualizza il pmed dei desktop
quanti notebook ci sono
e quanti tablet hanno un prezzo maggiore di 500
quanti pc hanno un prezzo tra 500 e 1500 */

#include <iostream>
using namespace std;

int main()
{
    float p, pmax, pmin, pmed, pmedd, tot=0, totds=0;
    int n, tipo, nd=0, note=0, t500=0, pc500=0;
    string modello, maxmodello;

    cout << "Inserisci il numero dei computer: ";
    cin >> n;

    for(int i=0; i<n; i++){
        cout <<"Inserisci il tipo (1.desktop, 2.notebook, 3.tablet): ";
        cin >> tipo;
        cout << "Inserisci il modello: ";
        cin >> modello;
        cout << "Inserisci il prezzo: ";
        cin >> p;

        if(i==0){
            pmax=p;
            pmin=p;
        }else if(p>pmax){
            pmax=p;
            maxmodello=modello;
        }else if(p<pmin)
            pmin=p;

        tot+=p;

        if(tipo==1){
            totds+=p;
            nd++;
        }else if(tipo==2)
            note++;
        else if(tipo==3 && p>500)
            t500++;

        if(p>500 && p<1500)
            pc500++;
    }

    pmed= tot/n;
    pmedd= totds/nd;

    cout << "Prezzo max: " << pmax << "; Modello: " << maxmodello << endl;
    cout << "Prezzo min: " << pmin << endl;
    cout << "Prezzo med: " << pmed << endl;
    cout << "Prezzo med dei desktop: " << pmedd<< endl;
    cout << "N notebook: " << note << endl;
    cout << "N tablet prezzo>500: " << t500 << endl;
    cout << "N computer prezzo tra 500/1500: " << pc500 << endl;



    system("pause");
    return 0;
}
