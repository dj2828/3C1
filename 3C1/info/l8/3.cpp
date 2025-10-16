/*
data una classe di n alunni: chiede quanti voti ha, li fa inserire, calcola la media per alunno, quante insufficenze
dopo inseriti i voti per tutti gli alunni, il proggramma dice quanti voti insufficenti in tutto ci sono stati
e quanti alunni hanno una media <6
*/

/*
ANALISI:
Il programma gestisce i voti di una classe di 'n' alunni.
Chiede il numero totale di alunni (n).
Cicla per ogni alunno:
  Chiede il numero di voti per l'alunno (nvoti).
  Cicla per inserire i voti, accumulando la somma e contando le insufficienze (voto < 6) per il singolo alunno.
  Calcola e stampa la media e il conteggio delle insufficienze per l'alunno.
  Tiene traccia del totale delle insufficienze della classe (ins_tot) e del numero di alunni con media insufficiente (ins_media < 6).
Infine, stampa il totale delle insufficienze e il numero di medie insufficienti.
*/
#include <iostream>
using namespace std;

int main(){
    // n: numero alunni, nvoti: numero voti per alunno
    // ins_alunno: insufficienze per singolo alunno (resetta ad ogni alunno)
    // ins_tot: insufficienze totali della classe
    // ins_media: alunni con media insufficiente
    int n, nvoti, ins_alunno=0, ins_tot=0, ins_media=0;
    // voto: voto inserito
    // tot_alunno: somma dei voti dell'alunno (resetta ad ogni alunno)
    // media_alunno: media dell'alunno
    float voto, tot_alunno=0, media_alunno;
    // Richiesta e acquisizione del numero di alunni
    cout << "Inserisci quanti alunni: ";
    cin >> n;

    // Ciclo principale per iterare su tutti gli alunni
    for(int i=1; i<=n; i++){
        // Reset dei totali e contatori per il nuovo alunno
        tot_alunno=0;
        media_alunno=0;
        ins_alunno=0;

        cout << "Alunno "<<i<<endl;
        // Richiesta e acquisizione del numero di voti per l'alunno
        cout<<"Numero voti: ";
        cin >> nvoti;

        // Ciclo interno per l'inserimento e l'elaborazione dei voti dell'alunno
        for(int j=1; j<=nvoti; j++){
            cout << "Inserisci il voto "<<j<<": ";
            cin >> voto;

            // Aggiorna la somma totale dei voti dell'alunno
            tot_alunno+=voto;

            // Verifica se il voto è insufficiente (<6)
            if(voto<6){
                ins_alunno++; // Incrementa il contatore delle insufficienze dell'alunno
            }
        }
        // Aggiorna il totale delle insufficienze della classe
        ins_tot += ins_alunno;
        // Calcola la media dell'alunno
        media_alunno = tot_alunno/nvoti;

        // Verifica se la media dell'alunno è insufficiente
        if(media_alunno<6){
            ins_media++; // Incrementa il contatore degli alunni con media insufficiente
        }

        // Stampa i risultati per l'alunno corrente
        cout << "Voti insufficenti: "<<ins_alunno<<endl;
        cout << "Media: " << media_alunno<<endl<<endl;

    }

    // Stampa i risultati finali per l'intera classe
    cout << "Voti insufficenti totali: " << ins_tot<<endl;
    cout << "Medie insufficenti: "<<ins_media<<endl;

    system("pause");
    return 0;
}