#include <iostream>
using namespace std;

int main(){
    int n;
    int Mat[9][9];
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cout << "Inserisci il numero in posizione ["<<i<<"]["<<j<<"] : ";
            cin >> Mat[i][j];
        }
    }

    cout << "Inserisci il numero da cercare: ";
    cin >> n;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(Mat[i][j] == n){
                cout << "Numero trovato in posizione ["<<i<<"]["<<j<<"]"<<endl;
            }
        }
    }

    system("pause");
    return 0;
}
