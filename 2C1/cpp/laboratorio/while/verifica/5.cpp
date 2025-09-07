#include <iostream>
using namespace std;

int main(){
    int scelta;
    float soldi, tot=0, res;

    cout << "Inserisci il budget: ";
    cin >> soldi;

    do{
        cout << "Totale speso: "<< tot<<endl<<endl;
        cout << "Immetti la bibita scelta: \n1.Cocacola: 2.50\n2.Acqua: 0.50\n3.Fanta: 2.00\n4.Esci"<<endl;
        cin >> scelta;
        cout << endl;
        switch(scelta){
        case 1:
            tot+=2.50;
            break;
        case 2:
            tot+=0.50;
            break;
        case 3:
            tot+=2;
            break;
        case 4:
            break;
        default:
            cout<<"Numero non valido"<<endl<<endl;
        }
    }while(scelta!=4);

    res=soldi-tot;
    if (res<0){
        cout << "Il totale \212: "<<tot<<endl;
        cout << "Soldi insufficenti"<<endl;
    }else{
        cout << "Il totale \212: "<<tot<<endl;
        cout << "I soldi rimanenti sono: "<<res<<endl;
    }

    system("pause");
    return 0;
}
