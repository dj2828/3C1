/*
data una sequenza di caratteri stabilire se la sequenza ha la alternanza vocale-consonante e viceversa
HO FATTO CONSECUTIVI E NON ALTERNANZA
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    char car;
    bool voc, cons, voc_prima, cons_prima;
    cout << "Inserisci il numero dei caratteri: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        cout << "Inserisci il carattere: ";
        cin >> car;
        // controlla se il carattere è una lettera o una consonante
        if(car=='a'||car=='e'||car=='i'||car=='o'||car=='u'){
            voc = true;
        }else{
            cons=true;
        }
        // se la vocale attuale e la consonante prima sono vere allora cè un alternanza (e viceversa)
        if(voc && cons_prima || voc_prima && cons){
            cout << "Alternanza vocale-carattere trovata"<<endl;
        }
        // le _prima vengono assegnate alle loro corrispettive attuali per il prossimo ciclo
        voc_prima=voc;
        cons_prima=cons;
        // resetta le attuali per il nuovo ciclo
        voc=false;
        cons=false;
    }

    system("pause");
    return 0;
}
