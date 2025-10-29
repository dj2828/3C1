#include <iostream>
using namespace std;

/*
controllo in un for se il numero è divisibile senza resto con per il valore di i non comprendendo se stesso
se si allora sommo i alla somma
se no non faccio niente
faccio un if per vedere se la somma è uguale al numero inziale e lo scrivo in output
*/

int main(){
    int num, somma=0;

    // input numero
    cout << "Inserisci il numero: ";
    cin >> num;

    for(int i=1; i<num; i++){
        // se resto tra numero e i è uguale zero
        if (num%i==0){
            // somma il valore di i, quindi il divisore
            somma += i;
        }
    }

    // se somma è uguale al numero iniziale
    if(somma==num){
        cout << "Il numero \212 un numero perfetto"<<endl;
    }
    // se somma NON è uguale al numero iniziale
    else{
        cout << "Il numero NON \212 un numero perfetto"<<endl;
    }

    system("pause");
    return 0;
}
