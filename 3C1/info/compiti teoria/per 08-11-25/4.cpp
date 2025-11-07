#include <iostream>
using namespace std;

int main(){
    int Mat[4][4], somma=0, max;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout << "Inserisci il numero in posizione ["<<i<<"]["<<j<<"] : ";
            cin >> Mat[i][j];
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            somma += Mat[i][j];
        }
        if(i==0){
            max = somma;
        }
        if(somma > max){
            max = somma;
        }
        somma = 0;
    }
    for(int j=0; j<4; j++){
        for(int i=0; i<4; i++){
            somma += Mat[i][j];
        }
        if(somma > max){
            max = somma;
        }
        somma = 0;
    }

    cout << "La somma massima delle righe e': " << max << endl;

    system("pause");
    return 0;
}
