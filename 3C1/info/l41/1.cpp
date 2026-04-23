/*
    struct autosalone:
        marca, cilindrata, prezzo, alimentazione(benzina disel gpl)
    visualizzata --> systme pause --> systme cls
    menu:
        1) Acquista no filtro
        2) Filtra marca
            marca --> scegli macchina (i basicissimo)
        3) Filtra alimentazione
            same thigh
        4) Filtra range cilindrata

    carta, contanti, finanziamento
    (+iva btw)
*/
#include <iostream>
using namespace std;

struct Automobile{
    string marca;
    int cilindrata;
    float prezzo;
    string alimentazione;
};
Automobile cars[] = {
    {"BMW", 1200, 50000, "Benzina"},
    {"Audi", 1500, 50001, "Gpl"}
};
int n;

void dispMacchine(){
    for(int i=0; i<n; i++){
        cout << "Marca: " << cars[i].marca;
        cout << " | Cilindrata: " << cars[i].cilindrata;
        cout << " | Prezzo: " << cars[i].prezzo;
        cout << " | Alimentazione: " << cars[i].alimentazione << endl;
    }
}

void dispMenu(){
    cout << "1) Acquista" << endl;
    cout << "2) Filtra marca" << endl;
    cout << "3) Filtra alimentazione" << endl;
    cout << "4) Filtra range cilindrata" << endl;
}

void acquista(int macchina){
    int scelta;
    cout << cars[macchina].marca << " Prezzo: " << cars[macchina].prezzo+(float)(cars[macchina].prezzo*22)/100 << endl;
    cout << "Tipo di pagamento: " << endl
    << "1) Carta" << endl
    << "2) Contanti" << endl
    << "3) Finanziamento" << endl;
    cin >> scelta;

    cout << "Acquistata con successo" << endl;
}

int scegliNoFiltro(){
    int scelta;
    for(int i=0; i<n; i++){
        cout << i << ") " << cars[i].marca << " " << cars[i].cilindrata << " " << cars[i].alimentazione << " " << cars[i].prezzo << endl;
    }
    cin >> scelta;
    return scelta;
}

int filtraMarca(){
    string sceltaM;
    int scelta;
    cout << "Che marca? ";
    cin >> sceltaM;

    for(int i=0; i<n; i++){
        if(cars[i].marca == sceltaM)
        cout << i << ") " << cars[i].marca << " " << cars[i].cilindrata << " " << cars[i].alimentazione << " " << cars[i].prezzo << endl;
    }
    cin >> scelta;
    return scelta;
}

int filtraAli(){
    string sceltaS;
    int scelta;
    cout << "Che alimentazione? " << endl;
    cout << "1) Benzina" << endl << "2) Disel" << endl << "3) Gpl" << endl;
    cin >> scelta;
    if(scelta == 1)
        sceltaS = "Benzina";
    else if(scelta == 2)
        sceltaS = "Disel";
    else if(scelta == 3)
        sceltaS = "Gpl";

    for(int i=0; i<n; i++){
        if(cars[i].alimentazione == sceltaS)
        cout << i << ") " << cars[i].marca << " " << cars[i].cilindrata << " " << cars[i].prezzo << " " << cars[i].prezzo << endl;
    }
    cin >> scelta;
    return scelta;
}

int filtraCilindro(){
    int scelta, minn, maxn;
    cout << "Minimo: ";
    cin >> minn;
    cout << "Massimo: ";
    cin >> maxn;

    for(int i=0; i<n; i++){
        if(cars[i].cilindrata > minn && cars[i].cilindrata < maxn)
            cout << i << ") " << cars[i].marca << " " << cars[i].cilindrata << " " << cars[i].alimentazione << " " << cars[i].prezzo << endl;
    }
    cin >> scelta;
    return scelta;
}

int main(){
    cout << "N: ";
    cin >> n;

    dispMacchine();
    system("pause");
    system("cls");

    int scelta;
    dispMenu();
    cin >> scelta;

    if(scelta == 1) acquista(scegliNoFiltro());
    else if(scelta == 2) acquista(filtraMarca());
    else if(scelta == 3) acquista(filtraAli());
    else if(scelta == 4) acquista(filtraCilindro());

    system("pause");
    return 0;
}
