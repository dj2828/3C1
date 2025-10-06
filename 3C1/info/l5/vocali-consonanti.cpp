/*
prendere in input n caretteri, contare quante vocali(suddivise per tipo(a:n_a; b:...)) e consonanti
esprimere il valore in percentuale.
controllare se sono state immesse 2 vocali consecutivamente.
*/
#include <iostream>
using namespace std;

int main(){
    int n, na=0, ne=0, ni=0, no=0, nu=0, cons=0, voc=0;
    float per_a, per_e, per_i, per_o, per_u, per_cons;
    char lettera;
    bool due_vocali_consecutive = false, ultima_vocale = false, attuale_vocale = false;

    // inserire quanti lettere
    cout << "Quante lettere vuoi inserire: ";
    cin >> n;
    for(int i=0; i<n; i++){
        // inserire la lettera
        cout << "Inserisci la lettera "<<i+1<<": ";
        cin >> lettera;

        switch(lettera){
            case 'a':
                na++;
                voc++;
                attuale_vocale = true;
                break;
            case 'e':
                ne++;
                voc++;
                attuale_vocale = true;
                break;
            case 'i':
                ni++;
                voc++;
                attuale_vocale = true;
                break;
            case 'o':
                no++;
                voc++;
                attuale_vocale = true;
                break;
            case 'u':
                nu++;
                voc++;
                attuale_vocale = true;
                break;
            default:
                cons++;
                attuale_vocale = false;
        }
        // controllo se ci sono due vocali consecutive
        if (attuale_vocale && ultima_vocale) {
            due_vocali_consecutive = true;
        }
        ultima_vocale = attuale_vocale;
    }

    // calcolo percenetuali
    per_a = (float)na/n*100;
    per_e = (float)ne/n*100;
    per_i = (float)ni/n*100;
    per_o = (float)no/n*100;
    per_u = (float)nu/n*100;
    per_cons = (float)cons/n*100;

    // controllo se ci sono due vocali consecutive
    if (due_vocali_consecutive){
        cout << "Sono state inserite 2 vocali consecutive" << endl;
    }

    // percentuali
    cout << "A: "<<per_a<<"%"<<endl;
    cout << "E: "<<per_e<<"%"<<endl;
    cout << "I: "<<per_i<<"%"<<endl;
    cout << "O: "<<per_o<<"%"<<endl;
    cout << "U: "<<per_u<<"%"<<endl;
    cout << "Consonanti: "<<per_cons<<"%"<<endl;

    system("pause");
    return 0;
}
