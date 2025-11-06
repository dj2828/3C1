#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int s, numero;

    cout << "1) Decimale --> Binario"<<endl;
    cout << "2) Binario --> Decimale"<<endl;
    cin >> s;

    if(s==1){
        vector<int> risultato;

        cout << "Inserisci il numero: ";
        cin >> numero;

        while(numero!=0){
            risultato.insert(risultato.begin(), numero%2);
            numero = numero/2;
        }

        cout << "Il numero \212: ";
        for(int i=0; i<risultato.size(); i++){
            cout << risultato[i];
        }
    }
    else if(s==2){
        int risultato=0;
        vector<int> cifre;

        cout << "Inserisci il numero: ";
        cin >> numero;

        while (numero > 0) {
            int cifra = numero % 10;  // ultima cifra
            cifre.push_back(cifra);
            numero /= 10;               // elimina l'ultima cifra
        }

        for(int i=0; i<cifre.size(); i++){
            risultato += cifre[i]*pow(2,i);
        }

        cout << "Il numero \212: " << risultato;
    }

    cout <<endl;

    system("pause");
    return 0;
}
