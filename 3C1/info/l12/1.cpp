/*
dato un vettore di char dopo averlo caricato e visualizzato
visualizzare per ogni vocale la freq e relativa percentuale
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Inserisci il numero dei caratteri: ";
    cin >> n;
    char Inseriti[n];
    int Conta[6] = {};
    float Per[6] = {};

    for(int i=0; i<n; i++){
        cout << "Inserisci il carattere: ";
        cin >> Inseriti[i];
    }

    cout << "Caratteri inseriti: ";
    for(int i=0; i<n; i++){
        cout << Inseriti[i]<<", ";
    }
    cout << endl;

    for(int i=0; i<n; i++){
        switch(Inseriti[i]){
            case 'a':
                Conta[0] += 1;
                break;
            case 'e':
                Conta[1] += 1;
                break;
            case 'i':
                Conta[2] += 1;
                break;
            case 'o':
                Conta[3] += 1;
                break;
            case 'u':
                Conta[4] += 1;
                break;
            default:
                Conta[5] += 1;
        }
    }

    for(int i=0; i<6; i++){
        Per[i] = (float)Conta[i]/n*100;
    }

    cout <<"A: " << Conta[0] << " ("<<Per[0]<< "%)"<<endl;
    cout <<"E: " << Conta[1] << " ("<<Per[1]<< "%)"<<endl;
    cout <<"I: " << Conta[2] << " ("<<Per[2]<< "%)"<<endl;
    cout <<"O: " << Conta[3] << " ("<<Per[3]<< "%)"<<endl;
    cout <<"U: " << Conta[4] << " ("<<Per[4]<< "%)"<<endl;
    cout <<"Consonanti: " << Conta[5] << " ("<<Per[5]<< "%)"<<endl;


    system("pause");
    return 0;
}
