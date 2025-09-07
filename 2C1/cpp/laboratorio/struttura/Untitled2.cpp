// durante un referendum va a votare un certo numero di persone.
// di questo numero una certa parte risponde si,
// un'altra parte no, e alcuni lasciano la scheda in bianco.
// calcolare:
// il numero delle schede valide
// il numero delle schede bianche
// la percentuale delle schede valide sul totale
// la percentuale dei si sulle schede valide
// la percentuale dei no sulle schede valide

#include<iostream>
using namespace std;

int main(){
int si, no, b, tot, valide;
float pt, ps, pn;

cout << "Inserisci il numero di votanti " << endl;
cin >> tot;
cout << "Inserisci il numero dei si " << endl;
cin >> si;
cout << "Inserisci il numero dei no " << endl;
cin >> no;

valide = si + no;
b = tot - valide;
pt = ((float)valide*100)/tot;
ps = ((float)si*100)/valide;
pn = ((float)no*100)/valide;

cout << "Le schede valide sono " << valide << endl;
cout << "Le schede bianche sono " << b << endl;
cout << "La percentuale delle schede valide \212 " << pt << endl;
cout << "La percentuale dei si sulle schede valide \212 " << ps << endl;
cout << "La percentuale dei no sulle schede valide \212 " << pn << endl;

system("PAUSE");
return 0;
}
