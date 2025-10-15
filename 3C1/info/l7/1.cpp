/*
dati in input marca modello prezzo di n auto a carbone e derivati
restituite:
piu costosa ecc
piu eco ecc
tot prezzo
conta quante auto hanno un prezzo pari/dispari %
media
*/
#include <iostream>
using namespace std;

int main(){
    int n, pari=0, disp=0, prezzo, pmax, pmin, tot=0;
    float media, perpari, perdisp;
    string marca, modello, mamax, momax, mamin, momin;
    cout << "Inserisci quante auto: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        cout << "Marca auto "<<i<<": ";
        cin >> marca;
        cout << "Modello auto "<<i<<": ";
        cin >> modello;
        cout << "Prezzo auto "<<i<<": ";
        cin >> prezzo;

        if(i==1){
            pmax = prezzo;
            mamax = marca;
            momax = modello;
            pmin = prezzo;
            mamin = marca;
            momin = modello;
        }
        else if(prezzo>pmax){
            pmax = prezzo;
            mamax = marca;
            momax = modello;
        }
        else if(prezzo<pmin){
            pmin = prezzo;
            mamin = marca;
            momin = modello;
        }

        tot+=prezzo;

        if(prezzo%2==0){
            pari++;
        }else{
            disp++;
        }
    }

    perpari = (float)pari/n*100;
    perdisp = (float)disp/n*100;

    media = (float)tot/n;

    cout << "Piu costosa: "<<mamax<<", "<<momax<<", "<<pmax<<endl;
    cout << "Meno costosa: "<<mamin<<", "<<momin<<", "<<pmin<<endl;
    cout << "Prezzo totale: "<<tot<<endl;
    cout << "Pari: "<<perpari<<"%"<<endl;
    cout << "Dispari: "<<perdisp<<"%"<<endl;

    system("pause");
    return 0;
}
