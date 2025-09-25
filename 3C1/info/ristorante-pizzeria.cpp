/*
Ristorante Pizzeria
"bnv (nome)"
cos vuoi mangiare
1pizza
2ristorante

"tipo pizza"
1 margherita 8 Euro
2 diavola 9.5 Euro
3 skibidu pizza
4 crocco-pizza 12 Euro

bibite:
a-acqua 1.5 Euro
b-birra 2.5 Euro
c-cocacola 5 Euro
f-fanta 2 Euro

dolce (5 Euro):
1 tiramisù
2 crema catalana
3 profitterol
4 pastiera
-----------------------------------------
ristorante:

primo:
1 scialatiello ai frutti di mare 22 Euro
2 gnocchi 10 Euro
3 lasagne 8 Euro
4 skibidi piatto

secondo:
1 pesce fresco 25 Euro
2 fiorentina 50 Euro
3 tagliata 23 Euro
4 frittura di pesce 15 Euro

bibite:
a-acqua 1.5 Euro
b-birra 2.5 Euro
c-cocacola 5 Euro
v-vino 22 Euro

dolce (5 Euro):
1 tiramisù
2 crema catalana
3 profitterol
4 pastiera
---------------------
iva=
bancomat -10%
*/

/*
creo le variabili float tot=0, sconto
creo le variabili int scelta1, sceltapizza, sceltadolce, sceltaprimo, sceltasecondo, metodopag
creo la variabile char sceltabibita

primo switch tra pizzeria/ristorante con 2 case
nel case 1:
switch per la scelta della pizza dove si aggiorna il prezzo
switch per la scelta della bibita dove si aggiorna il prezzo
switch per la scelta del dolce dove si aggiorna il prezzo

nel case 2:

switch per la scelta del primo dove si aggiorna il prezzo
switch per la scelta del secondo dove si aggiorna il prezzo
switch per la scelta della bibita dove si aggiorna il prezzo
switch per la scelta del dolce dove si aggiorna il prezzo

switch per rischiesta di cosa pagare
stampo scontrino con totale ed eventuale sconto
*/

#include <iostream>
using namespace std;

int main(){
    float tot=0, sconto;
    int scelta1, sceltapizza, sceltadolce, sceltaprimo, sceltasecondo, metodopag;
    char sceltabibita;
    // scelta ristorante/pizzeria
    cout << "Benvenuto nel Ristorante-Pizzeria di Gino"<<endl;
    cout << "1) Pizzeria\n2) Ristorante"<<endl;
    cin >> scelta1;
    cout << endl;

    switch(scelta1){
    // pizzeria
    case 1:
        cout << "Menu Pizze:"<<endl;
        cout << "1) Margherita 8 Euro\n2) Diavola 9.5 Euro\n3) Patatine fritte 10 Euro\n4) Crocco-pizza 12 Euro"<<endl;
        cin >> sceltapizza;
        switch(sceltapizza){
        case 1:
            tot+=8;
            break;
        case 2:
            tot+=9.5;
            break;
        case 3:
            tot+=10;
            break;
        case 4:
            tot+=12;
            break;
        default:
            cout << "Valore non valido"<<endl;
        }
        cout << "Totale speso: "<<tot<<" Euro"<<endl<<endl;
        // bibite
        cout << "Menu Bibite:"<<endl;
        cout << "a) Acqua 1.5 Euro\nb) Birra 2.5 Euro\nc) Coca-Cola 5 Euro\nf) Fanta 2 Euro"<<endl;
        cin >> sceltabibita;
        switch(sceltabibita){
        case 'a':
            tot+=1.5;
            break;
        case 'b':
            tot+=2.5;
            break;
        case 'c':
            tot+=5;
            break;
        case 'f':
            tot+=2;
            break;
        default:
            cout << "Valore non valido"<<endl;
        }
        cout << "Totale speso: "<<tot<<" Euro"<<endl<<endl;
        // dolce
        cout << "Menu Dolce (5 Euro):"<<endl;
        cout << "1) Tiramisu'\n2) Crema catalana\n3) Profitterol\n4) Pastiera"<<endl;
        cin >> sceltadolce;
        switch(sceltapizza){
        case 1:
            tot+=5;
            break;
        case 2:
            tot+=5;
            break;
        case 3:
            tot+=5;
            break;
        case 4:
            tot+=5;
            break;
        default:
            cout << "Valore non valido"<<endl;
        }
        cout << "Totale speso: "<<tot<<" Euro"<<endl<<endl;
        break;
    // ristorante
    case 2:
        // primi
        cout << "Primi:"<<endl;
        cout << "1) Scialatiello ai frutti di mare 22 Euro\n2) Gnocchi 10 Euro\n3) Lasagne 8 Euro\n4) Pasta in bianco 5 Euro"<<endl;
        cin >> sceltaprimo;
        switch(sceltaprimo){
        case 1:
            tot+=22;
            break;
        case 2:
            tot+=10;
            break;
        case 3:
            tot+=8;
            break;
        case 4:
            tot+=5;
            break;
        default:
            cout << "Valore non valido"<<endl;
        }
        cout << "Totale speso: "<<tot<<" Euro"<<endl<<endl;
        // secondi
        cout << "Secondi:"<<endl;
        cout << "1) Pesce fresco 25 Euro\n2) Fiorentina 50 Euro\n3) Tagliata 23 Euro\n4) Frittura di pesce 15 Euro"<<endl;
        cin >> sceltasecondo;
        switch(sceltasecondo){
        case 1:
            tot+=25;
            break;
        case 2:
            tot+=50;
            break;
        case 3:
            tot+=23;
            break;
        case 4:
            tot+=15;
            break;
        default:
            cout << "Valore non valido"<<endl;
        }
        cout << "Totale speso: "<<tot<<" Euro"<<endl<<endl;
        // bibite
        cout << "Menu Bibite:"<<endl;
        cout << "a) Acqua 1.5 Euro\nb) Birra 2.5 Euro\nc) Coca-Cola 5 Euro\nv) Vino 22 Euro"<<endl;
        cin >> sceltabibita;
        switch(sceltabibita){
        case 'a':
            tot+=1.5;
            break;
        case 'b':
            tot+=2.5;
            break;
        case 'c':
            tot+=5;
            break;
        case 'v':
            tot+=22;
            break;
        default:
            cout << "Valore non valido"<<endl;
        }
        cout << "Totale speso: "<<tot<<" Euro"<<endl<<endl;
        // dolce
        cout << "Menu Dolce (5 Euro):"<<endl;
        cout << "1) Tiramisu'\n2) Crema catalana\n3) Profitterol\n4) Pastiera"<<endl;
        cin >> sceltadolce;
        switch(sceltadolce){
        case 1:
            tot+=5;
            break;
        case 2:
            tot+=5;
            break;
        case 3:
            tot+=5;
            break;
        case 4:
            tot+=5;
            break;
        default:
            cout << "Valore non valido"<<endl;
        }
        break;
    default:
        cout << "Valore non valido"<<endl;
    }
    cout << "Totale speso: "<<tot<<" Euro"<<endl<<endl;

    // scontrino
    cout << "Come si desidera pagare:\n1) Contanti\n2) Carte"<<endl;
    cin >> metodopag;
    switch(metodopag){
    case 1:
        break;
    case 2:
        sconto=0.1*tot;
        tot -= sconto;
        cout << "Sconto di "<<sconto<<" Euro"<<endl;
        break;
    }
    cout << "Totale speso: "<<tot<<" Euro"<<endl;

    system("pause");
    return 0;
}
