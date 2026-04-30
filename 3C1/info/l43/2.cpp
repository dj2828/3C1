#include <iostream>
#include <vector>
using namespace std;

struct Indirizzo{
    string via;
    string citta;
    int cap;
};
struct Studente{
    string nome;
    string cognome;
    int eta;
    Indirizzo indirizzo;
};

void set_studente(Studente& studente){
    string nome, cognome, via, citta;
    int eta, cap;

    cout << "Nome: ";
    cin >> nome;
    cout << "Cognome: ";
    cin >> cognome;
    cout << "Eta: ";
    cin >> eta;
    cout << "Via: ";
    cin.ignore();
    getline(cin, via);
    cout << "Citta: ";
    cin.ignore();
    getline(cin, citta);
    cout << "CAP: ";
    cin >> cap;

    studente.nome = nome;
    studente.cognome = cognome;
    studente.eta = eta;
    studente.indirizzo.via = via;
    studente.indirizzo.citta = citta;
    studente.indirizzo.cap = cap;
    cout << endl;
}

void disp_studente(const Studente& studente){
    cout << "Nome: " << studente.nome << endl
    << "Cognome: " << studente.cognome << endl
    << "Eta: " << studente.eta << endl
    << "Indirizzo: " << endl
    << "\tVia: " << studente.indirizzo.via << endl
    << "\tCitta: " << studente.indirizzo.citta << endl
    << "\tCAP: " << studente.indirizzo.cap << endl << endl;
}

int main(){
    int n;
    cout << "N: ";
    cin >> n;
    Studente studenti[n] = {};

    for(int i=0; i<n; i++){
        set_studente(studenti[i]);
    }

    for(int i=0; i<n; i++){
        disp_studente(studenti[i]);
    }

    system("pause");
    return 0;
}
