/*
gestire le prenotazioni di un hotel,
per cliente richiedi cose?
calcolato il costo totale del soggiorno + eventuali sconti (professione/durata soggiorno)
3 type di camere: singola 50/notte, doppia 80/notte, suite? 120/notte.
categorie professionali: insegnante 15%, studente 10%, medico 20%, altro 0%.

allinizio il progr chiede quanti user registrare, min 1 max 20.
per cliente devono rischiedere: nome, professione, type camera, num notti.
ptot con sconto.
se lo user fa almeno 7 notti 5% sul ptot
se suite almeno 3 notti, lultia è gratuita.

riepilogo nome cliente, type camera prezzo notte, notti pagate, sconti extra, ptot,
tot incasso dell hotel alla fine
*/
#include <iostream>
using namespace std;

const float prezzo_camera_singola = 50;
const float prezzo_camera_doppia = 80;
const float prezzo_camera_suite = 120;

const int sconto_insegnanti = 15;
const int sconto_studenti = 10;
const int sconto_medici = 20;
const int sconto_settimana = 5;

int main(){
    int prof, camera, notti, n;
    float pcamera, sconto, ptot, psconto, incasso=0;
    string nome, type_camera;

    cout << "Inserisci quanti clienti (min:1, max:20): ";
    cin >> n;
    if(n<1||n>20)
        cout << "Numero clienti non valido"<<endl;
    else{
        for(int i=1; i<=n; i++){
            cout <<endl<< "Inserisci il nome del cliente: ";
            cin >> nome;
            cout << "Inserisci la professione:\n1) Insegnate\n2) Studente\n3) Medico\n4) Altro"<<endl;
            cin >> prof;
            cout << "Inserisci il tipo di camera:\n1) Singola 50/notte\n2) Doppia 80/notte\n3) Suitte 120/notte"<<endl;
            cin >> camera;
            cout << "Inserisci il numero di notti: ";
            cin >> notti;

            switch(camera){
                case 1:
                    pcamera = prezzo_camera_singola;
                    type_camera = "Singola";
                    break;
                case 2:
                    pcamera = prezzo_camera_doppia;
                    type_camera = "Doppia";
                    break;
                case 3:
                    pcamera = prezzo_camera_suite;
                    type_camera = "Suite";
                    if(notti>=3){
                        notti--;
                    }
                    break;
            }
            switch(prof){
                case 1:
                    sconto = sconto_insegnanti;
                    break;
                case 2:
                    sconto = sconto_studenti;
                    break;
                case 3:
                    sconto = sconto_medici;
                    break;
                default:
                    sconto = 0;
            }
            ptot = notti * pcamera;
            psconto = sconto*ptot/100;
            ptot -= psconto;
            if(notti>7){
                ptot = ptot-(sconto_settimana*ptot/100);
                psconto += sconto_settimana*ptot/100;
            }
            incasso += ptot;

            cout << "Nome: " << nome << endl;
            cout << "Tipo camera: " << type_camera << " " << pcamera << "/notte" << endl;
            cout << "Notti pagate: " << notti << endl;
            cout << "Totale sconti: " << psconto << endl;
            cout << "Prezzo totale: " << ptot << endl;
        }
        cout <<endl<<"Incasso: "<< incasso<<endl;
    }
    system("pause");
    return 0;
}
