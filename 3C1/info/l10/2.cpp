/*
in budget iniziale e numero spese
for spese:
    importo
    categoria: alimentari, trasporti, utenze, divertimento, altro;
somma per categoria
ptot
saldo > 0: ottima gestione
saldo = 0: hai speso tutto
saldo < 0: Hai sforato il budget!
*/
#include <iostream>
using namespace std;

int main(){
    float bg, spesa, alimentari=0, trasporti=0, utenze=0, div=0, altro=0, tot;
    int n, type;
    cout << "Inserisci il budget: ";
    cin >> bg;
    cout << "Inserisci il numero delle spese (3-20): ";
    cin >> n;

    if(n<3||n>20)
        cout << "Numeri non validi"<<endl;
    else{
        for(int i=0; i<n; i++){
            cout << "Inserisci la spesa: ";
            cin >> spesa;
            cout << "Inserisci la categoria:\n1) Alimentari\n2) Trasporti\n3) Utenze\n4) Divertimento\n5) Altro\n";
            cin >> type;

            switch(type){
                case 1:
                    alimentari+=spesa;
                    break;
                case 2:
                    trasporti+=spesa;
                    break;
                case 3:
                    utenze+=spesa;
                    break;
                case 4:
                    div+=spesa;
                default:
                    altro+=spesa;
            }
        }
        tot = alimentari+trasporti+utenze+div+altro;
        cout << "Alimentari: "<<alimentari<<endl;
        cout << "Trasporti: "<<trasporti<<endl;
        cout << "Utenze: "<<utenze<<endl;
        cout << "Divertimento: "<<div<<endl;
        cout << "Altro: "<<altro<<endl;
        cout << "Totale: " << tot<<endl;

        bg-=tot;

        cout << "Budget rimanente: "<<bg<<endl;

        if(bg>0)
            cout << "Ottima gestione"<<endl;
        else if(bg=0)
            cout << "Hai speso tutto"<<endl;
        else
            cout << "Hai sforato il budget!"<<endl;
    }

    system("pause");
    return 0;
}
