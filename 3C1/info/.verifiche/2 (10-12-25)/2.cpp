#include <iostream>
using namespace std;

int main(){
    int n, ivoc=0, icon=0;
    // inserimento grandezza del vettore
    cout << "Inserisci la grandezza del vettore: ";
    cin >> n;
    char Array[n], V_Vocali[n]={}, C_Consonanti[n]={}, attuale, prec;

    // input Array
    for (int i=0; i<n; i++){
        cout << "Inserisci il carattere in pos " << i << ": ";
        cin >> Array[i];
    }

    // visualizzazione Array
    for(int i=0; i<n; i++){
        cout << Array[i] << "\t";
    }
    cout << endl;

    for(int i=0; i<n; i++){
        // se Array[i] è una vocale
        if(Array[i]=='a'||Array[i]=='e'||Array[i]=='i'||Array[i]=='o'||Array[i]=='u'){
            V_Vocali[ivoc] = Array[i]; // aggiunge la vocale al sua array
            ivoc++; // incrementa l'indice dell'array delle vocali
        }
        else{
            C_Consonanti[icon] = Array[i]; // aggiunge la consonante al sua array
            icon++; // incrementa l'indice dell'array delle consonanti
        }
    }

    // output
    cout << "Vocali: ";
    for(int i=0; i<n; i++){
        cout << V_Vocali[i] << "\t";
    }
    cout <<endl<< "Consonanti: ";
    for(int i=0; i<n; i++){
        cout << C_Consonanti[i] << "\t";
    }
    cout << endl;
    // fine output

    // controllo sequenza sl
    for(int i=0; i<n; i++){
        attuale = Array[i];
        prec = Array[i-1];

        if(prec=='s'&&attuale=='l')
            cout << "Sequenza SL trovata" <<endl;
    }

    system("pause");
    return 0;
}
