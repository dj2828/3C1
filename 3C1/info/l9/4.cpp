/*
in un hotel il prezzo dipende dal piano
1-35e
2-45e
3-55e
4-65e
calcola il tot sapendo quanti giorni ed il piano
*/
#include <iostream>
using namespace std;

int main(){
    int pr, piano, giorni, tot;

    cout << "Inserisci il piano: ";
    cin >> piano;
    cout << "Inserisci il numero di giori: ";
    cin >> giorni;

    switch(piano){
    case 1:
        pr = 35;
        break;
    case 2:
        pr = 45;
        break;
    case 3:
        pr = 55;
        break;
    case 4:
        pr = 65;
        break;
    }

    tot = pr * giorni;

    cout << "Totale: "<<tot<<endl;

    system("pause");
    return 0;
}
