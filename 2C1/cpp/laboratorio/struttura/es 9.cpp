// In un condominio si decide di calcolare una tassa una tantum rispetto
// alle dimensioni
//dell’appartamento, espresse in metri quadrati, in ragione di €K per ogni metro
//quadrato. All’importo così calcolato viene aggiunta una quota fissa di €X e una
//percentuale del T%. Scrivi un programma che dati in input i valori di K, X e T
//determini l’ammontare della tassa.
#include<iostream>
using namespace std;

int main(){
float k, x, t, m, tassa;
cout << "Inserisci il costo a metro quadrato " << endl;
cin >> k;
cout << "Inserisci il costo della tassa fissa " << endl;
cin >> x;
cout << "Inserisci la percentuale. Esempio 0.2" << endl;
cin >> t;
cout << "Inserisci il numero di metri quadrati " << endl;
cin >> m;

tassa = k*m+x+t*k*m;
cout << "La tassa ammonta a " << tassa << endl;

system("PAUSE");
return 0;
}
