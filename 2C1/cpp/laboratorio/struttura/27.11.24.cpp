#include <iostream>
using namespace std;

int main(){
string n1, n2;
float gu1, sp1, gu2, sp2, totg, tots, bil;

cout << "Inserisci il primo nome ";
cin >> n1;
cout << "Inserisci il guadagno ";
cin >> gu1;
cout << "Inserisci le spese ";
cin >> sp1;
cout << "Inserisci il secondo nome ";
cin >> n2;
cout << "Inserisci il guadagno ";
cin >> gu2;
cout << "Inserisci le spese ";
cin >> sp2;

totg = gu1 + gu2;
tots = sp1 + sp2;
bil = totg - tots;

cout << n1 << " e " << n2 << " hanno guadagnato " << totg << ", hanno speso " << tots << " ed hanno un bilancio di " << bil << "." << endl;


system("PAUSE");
return 0;
}
