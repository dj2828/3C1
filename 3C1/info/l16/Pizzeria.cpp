/*
gestione di una pizzeria
pizze
bibite
dolci

input n* persone
appare menu:
    1) Pizze
    2) Bibite
    3) Dolci
stampa scontrino:
    Pizze:
    7
    6
    8
    Bibite:
    3
    2
    3
    Dolci:
    5
    5
    6
    Tot: 4000000000000000000000000000000
*/
#include <iostream>
using namespace std;

int main(){
    const int num_pizze=4, num_bibite=4, num_dolci=3;
    const string Pizzen[]={"Margherita", "Diavola", "Patatine fritte", "Napoli"},
                 Bibiten[]={"Acqua naturale", "Acqua frizzante", "Coca-cola", "Fanta"},
                 Dolcin[]={"Tiramisu", "Meringata", "Gelato di spiderman"};
    const float Pizzep[]={4,6,5,6.7}, Bibitep[]={2,2.5,3.5,3}, Dolcip[]={5,4,10};

    int n, s, s2;
    float tot=0;

    cout << "Inserisci il numero di persone: ";
    cin >> n;

    string Pizzesn[n]={}, Bibitesn[n]={}, Dolcisn[n]={};
    float Pizzes[n]={}, Bibites[n]={}, Dolcis[n]={};

    // Menu
    for(int i=0; i<n; i++){
        do{
            // Menu scelta categoria
            cout << "Persona "<<i+1<<endl;
            cout << "1) Pizze"<<endl<<"2) Bibite"<<endl<<"3) Dolci"<<endl<<"4) Prossima persona"<<endl;
            cin >> s;

            system("cls");
            switch(s){
            case 1:
                // Menu pizze
                if(Pizzesn[i]!="")
                    cout << "Attuale: " << Pizzesn[i] << endl;
                for(int j=0; j<num_pizze; j++){
                    cout << j+1 << ") "<< Pizzen[j] << ": \t" << Pizzep[j] << endl;
                }
                cin >> s2;
                s2 = s2-1;

                if(s2>num_pizze)
                    break;
                Pizzes[i] = Pizzep[s2];
                Pizzesn[i] = Pizzen[s2];
                break;
            case 2:
                // Menu bibite
                if(Bibitesn[i]!="")
                    cout << "Attuale: " << Bibitesn[i] << endl;
                for(int j=0; j<num_bibite; j++){
                    cout << j+1 << ") "<< Bibiten[j] << ": \t" << Bibitep[j] << endl;
                }
                cin >> s2;
                s2 = s2-1;

                if(s2>num_bibite)
                    break;
                Bibites[i] = Bibitep[s2];
                Bibitesn[i] = Bibiten[s2];
                break;
            case 3:
                // Menu dolci
                if(Dolcisn[i]!="")
                    cout << "Attuale: " << Dolcisn[i] << endl;
                for(int j=0; j<num_dolci; j++){
                    cout << j+1 << ") "<< Dolcin[j] << ": \t" << Dolcip[j] << endl;
                }
                cin >> s2;
                s2 = s2-1;

                if(s2>num_dolci)
                    break;
                Dolcis[i] = Dolcip[s2];
                Dolcisn[i] = Dolcin[s2];
                break;
            }

            system("cls");
        }while(s!=4);
    }
    system("cls");

    // Calcolo totale
    for (int i=0; i<n; i++){
        tot += Pizzes[i];
        tot += Bibites[i];
        tot += Dolcis[i];
    }

    // Scontrino
    cout << "Scontrino:"<<endl;
    cout << "   Pizze:"<<endl;
    for (int i=0; i<n; i++){
        if(Pizzes[i]==0)
            Pizzesn[i] = "NA";
        cout << "   |" << i+1 << " " << Pizzesn[i] << ": \t" << Pizzes[i] << endl;
    }
    cout << "   Bibite:"<<endl;
    for (int i=0; i<n; i++){
        if(Bibites[i]==0)
            Bibitesn[i] = "NA";
        cout << "   |" << i+1 << " " << Bibitesn[i] << ": \t" << Bibites[i] << endl;
    }
    cout << "   Dolci:"<<endl;
    for (int i=0; i<n; i++){
        if(Dolcis[i]==0)
            Dolcisn[i] = "NA";
        cout << "   |" << i+1 << " " << Dolcisn[i] << ": \t" << Dolcis[i] << endl;
    }
    cout << endl << "   Totale: " << tot<<endl;


    system("pause");
    return 0;
}
