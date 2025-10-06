/*
prendere in input n caretteri, contare quante vocali(suddivise per tipo(a:n_a; b:...)) e consonanti
esprimere il valore in percentuale.
controllare se sono state immesse 2 vocali consecutivamente.
*/
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    int n, numerornd, na=0, ne=0, ni=0, no=0, nu=0, cons=0;
    float per_a, per_e, per_i, per_o, per_u, per_cons;
    char lettera, prec;

    srand(time(NULL)); // inizializza rand num

    // inserire quanti lettere
    cout << "Quante lettere vuoi inserire: ";
    cin >> n;
    for(int i=0; i<n; i++){
        numerornd = rand()%26; // numero casuale tra 0 e 25
        // converto in lettera
        lettera = 'a' + numerornd;

        // controllo se la lettera � stata insterita prima
        if (prec==lettera){
            cout << "Vocale '"<<lettera<<"' gia inserita precedentemente"<<endl;
        }
        switch(lettera){
            case 'a':
                na++;
                prec = lettera;
                break;
            case 'e':
                ne++;
                prec = lettera;
                break;
            case 'i':
                ni++;
                prec = lettera;
                break;
            case 'o':
                no++;
                prec = lettera;
                break;
            case 'u':
                nu++;
                prec = lettera;
                break;
            default:
                cons++;
        }
    }

    // calcolo percenetuali
    per_a = (float)na/n*100;
    per_e = (float)ne/n*100;
    per_i = (float)ni/n*100;
    per_o = (float)no/n*100;
    per_u = (float)nu/n*100;
    per_cons = (float)cons/n*100;

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
