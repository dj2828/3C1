/*lo stipendio base di un dipendente varia a seconda del livello di appartenenza;
realizzare un proggramma che dato il nome e il livello del dipendente stampi il suo
stipendio base secondo la tabella
lv1: 1500.75
lv2: 2000
lv3: 2500.50
lv4: 2900
*/

#include<iostream>
using namespace std;

int main()
{
    string n;
    int lv;
    float s;

    cout << "Inserisci il nome ";
    cin >> n;
    cout << "Inserisci il livello (1, 2, 3, 4) ";
    cin >> lv;

    switch(lv)
    {
    case 1:
        s = 1500.75;
        break;
    case 2:
        s = 2000;
        break;
    case 3:
        s = 2500.50;
        break;
    case 4:
        s = 2900;
        break;
    default:
        cout << "Livello non valido" << endl;
    }

    cout << "Il salario di "<< n <<", livello "<< lv <<" \212 " << s << endl;

    system("PAUSE");
    return 0;
}
