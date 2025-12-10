#include <iostream>
using namespace std;

int main(){
    int n, s, sette=0, tre=0, somma=0;
    // inserimento grandezza del vettore
    cout << "Inserisci la grandezza del vettore: ";
    cin >> n;
    int Array[n];

    // input Array
    for (int i=0; i<n; i++){
        cout << "Inserisci il numero in pos " << i << ": ";
        cin >> Array[i];
    }

    // visualizzazione Array
    for(int i=0; i<n; i++){
        cout << Array[i] << "\t";
    }
    cout << endl;

    // menu
    do{
        cout << "1) Numeri divisibili per 7"<<endl;
        cout << "2) Valori che terminano per 3"<<endl;
        cout << "3) Media"<<endl;
        cout << "4) Esci"<<endl;
        cin >> s;

        // Numeri divisibili per 7
        if(s==1){
            for(int i=0; i<n; i++){
                if(Array[i]%7==0) // controlla se il resto è 0
                    sette++;
            }
            // output
            cout <<endl << "Numeri divisibili per sette: " << sette << ", " << (float)sette/n*100 <<"%"<< endl;
        }
        // Valori che terminano per 3
        else if(s==2){
            for(int i=0; i<n; i++){
                if(Array[i]%10==3) // controlla se lultimo nuemero è 3
                    tre++;
            }
            // output
            cout <<endl << "Numeri che finiscono con 3: " << tre << ", " << (float)tre/n*100 <<"%"<< endl;
        }
        // Media
        else if(s==3){
            for(int i=0; i<n; i++){
                somma += Array[i]; // somma dei valori dell'array
            }
            // output media
            cout << endl << "Media: " << (float)somma/n << endl;
        }

    }while(s!=4); // per uscire dal dowhile


    system("pause");
    return 0;
}
