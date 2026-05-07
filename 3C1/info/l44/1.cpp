#include <iostream>
using namespace std;

struct prodotto {
    int code;
    string nome;
    int qa;
    float prezzo;
};

prodotto prodotti[100] = {};
int n_prod = 0;

void dispMenu(){
    system("cls");
    cout <<"1) Aggiungere un prodotto\n" <<
    "2) Visualizzare tutti i prodotti\n" <<
    "3) Cercare un prodotto per codice\n" <<
    "4) Modificare la quantita di un prodotto\n" <<
    "5) Calcolare il valore totale del magazzino\n" <<
    "6) Uscire dal programma" << endl;
}

bool checkPresenzaCode(int code){
    int pos;
    for(int i=0; i<n_prod; i++){
        if(code == prodotti[i].code){
            return true;
        }
    }
    return false;
}

void aggiungi(){
    system("cls");
    int code;
    do{
        cout << "Code: ";
        cin >> code;
    }while(checkPresenzaCode(code));
    prodotti[n_prod].code = code;

    cout << "Nome: ";
    cin >> prodotti[n_prod].nome;
    cout << "Quantita: ";
    cin >> prodotti[n_prod].qa;
    cout << "Prezzo: ";
    cin >> prodotti[n_prod].prezzo;


    n_prod++;
}

void dispProd(int i){
    cout << "Code: " << prodotti[i].code << endl
        << "\tNome: " << prodotti[i].nome << endl
        << "\tQuantita: " << prodotti[i].qa << endl
        << "\tPrezzo: " << prodotti[i].prezzo << endl;
}

void dispAllProd(){
    for(int i=0; i<n_prod; i++){
        dispProd(i);
    }
    system("pause");
}

void cerca(){
    system("cls");
    int code, pos=-1;
    cout << "Code: ";
    cin >> code;
    for(int i=0; i<n_prod; i++){
        if(code == prodotti[i].code){
            pos = i;
            break;
        }
    }
    if(pos==-1){
        cout << "Non trovato" << endl;
        system("pause");
        return;
    }
    cout << "Trovato: " << endl;
    dispProd(pos);
    system("pause");
}

void editQa(){
    int scelta;
    for(int i=0; i<n_prod; i++){
        cout << i << ") " << prodotti[i].code << endl;
    }
    cin >> scelta;

    cout << "Vecchia quantita: " << prodotti[scelta].qa << endl;
    cout << "Nuova quantita: ";
    cin >> prodotti[scelta].qa;
}

void tot(){
    float somma = 0;
    for(int i=0; i<n_prod; i++){
        somma += prodotti[i].prezzo;
    }
    cout << "Somma: " << somma << endl;
    system("pause");
}

int main(){
    int scelta;

    do{
        dispMenu();
        cin >> scelta;
        if(scelta == 1) aggiungi();
        else if(scelta == 2) dispAllProd();
        else if(scelta == 3) cerca();
        else if(scelta == 4) editQa();
        else if(scelta == 5) tot();
    }while(scelta!=6);

    system("pause");
    return 0;
}