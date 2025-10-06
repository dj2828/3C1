/*
dati n numeri int dopo aver contato quanti numeri sono positive/negative, quanti pari/dispari;
visualizzare i dati ed esprimerli in %.
I n pari sono 5 (67%)
*/
#include <iostream>
using namespace std;

int main(){
    int n_num, num, pos=0, neg=0, pari=0, dispari=0;
    float per_pos, per_neg, per_pari, per_dispari;
    // inserire quanti numeri
    cout << "Quanti numeri vuoi inserire: ";
    cin >> n_num;

    for(int i=0; i<n_num; i++){
        // inserire il numero
        cout << "Inserisci il "<<i+1<<" numero: ";
        cin >> num;

        // numero positivo
        if(num>0){
            pos++;
        }
        // numero negativo
        else if(num<0){
            neg++;
        }
        // se 0
        else{}

        // se 0
        if(num==0){}
        // numero pari
        else if(num%2==0){
            pari++;
        }
        // numero dispari
        else{
            dispari++;
        }
    }

    // calcolo percentuali
    per_pos = (float)pos/n_num*100;
    per_neg = (float)neg/n_num*100;
    per_pari = (float)pari/n_num*100;
    per_dispari = (float)dispari/n_num*100;

    // output
    cout << "Positivi: "<< pos<<" ("<<per_pos<<"%)"<<endl;
    cout << "Negativi: "<< neg<<" ("<<per_neg<<"%)"<<endl;
    cout << "Positivi: "<< pari<<" ("<<per_pari<<"%)"<<endl;
    cout << "Positivi: "<< dispari<<" ("<<per_dispari<<"%)"<<endl;

    system("pause");
    return 0;
}
