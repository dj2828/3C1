#include <iostream>
#include <vector>
using namespace std;

struct Prenotazione{
    string cognome;
    int data_in;
    int data_out;
    int eta;
    int prezzo;
};
struct Villaggio{
    string nome;
    int numero_camere;
    int prezzo_giorno;
    vector<Prenotazione> prenotazioni;
};
const int numero_villaggi = 2;
Villaggio villaggi[] = {{"Uno", 4, 2500}, {"Due", 10, 100}};


void dispVillaggi(){
    system("cls");
    for(int i=0; i<numero_villaggi; i++)
        cout << i+1 << ") " << villaggi[i].nome << ", " << villaggi[i].numero_camere << " camere, Euro " << villaggi[i].prezzo_giorno << endl;
}

void setPrenotazione(vector<Prenotazione>& pr, int indice_villaggio){
    if(villaggi[indice_villaggio].numero_camere == 0){
        cout << "Camere finite" << endl;
        system("pause");
    }
    string cognome;
    int data_in;
    int data_out;
    int eta;

    cout << "Cognome: ";
    cin >> cognome;
    cout << "Eta: ";
    cin >> eta;
    if(eta < 18){
        cout << "Non sei maggiorenne" << endl;
        system("pause");
        return;
    }
    cout << "Data in (giorno) ";
    cin >> data_in;
    cout << "Data out (giorno) ";
    cin >> data_out;

    int prezzo = data_out - data_in;
    prezzo = prezzo*villaggi[indice_villaggio].prezzo_giorno;

    cout << "Euro " << prezzo << endl;
    system("pause");

    villaggi[indice_villaggio].numero_camere--;

    pr.push_back({cognome, data_in, data_out, eta, prezzo});
}

int main(){
    int scelta;
    do{
        dispVillaggi();
        cout << "0) Prenotazioni" << endl;
        cout << "> ";
        cin >> scelta;

        if(scelta==0){
            dispVillaggi();
            cout << "Scegli prenotazione: ";
            cin >> scelta;
            cout << "Prenotazioni: " << endl;
            for(int i=0; i<villaggi[scelta-1].prenotazioni.size(); i++){
                cout << "\t Cognome: " << villaggi[scelta-1].prenotazioni[i].cognome << ", Data in: "
                << villaggi[scelta-1].prenotazioni[i].data_in << ", Data out: "
                << villaggi[scelta-1].prenotazioni[i].data_out << ", Eta: "
                << villaggi[scelta-1].prenotazioni[i].eta << ", Euro "
                << villaggi[scelta-1].prenotazioni[i].prezzo << endl;
            }
            system("pause");
        }
        else
            setPrenotazione(villaggi[scelta-1].prenotazioni, scelta-1);

    }while(true);

    system("pause");
    return 0;
}
