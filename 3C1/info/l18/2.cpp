#include <iostream>
using namespace std;

int main(){
    char letterac;
    int n, sommav=0, sommac=0;

    cout << "Inserisci il numero delle lettere: ";
    cin >> n;

    for(int i=0; i<n; i++){
        cout << "Inserisci la lettera: ";
        cin >> letterac;

        switch(letterac){
            case 'a':
                sommav+=letterac-96;
                break;
            case 'e':
                sommav+=letterac-96;
                break;
            case 'i':
                sommav+=letterac-96;
                break;
            case 'o':
                sommav+=letterac-96;
                break;
            case 'u':
                sommav+=letterac-96;
                break;
            default:
                sommac+=letterac-96;
        }
    }

    cout << "Somma vocali: " << sommav <<endl;
    cout << "Somma consonanti: " << sommac <<endl;


    system("pause");
    return 0;
}
