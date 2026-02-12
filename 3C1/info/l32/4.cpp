#include <iostream>
using namespace std;

int main(){
    const int n=10;
    char Mat[n][n];
    int numero_navi, numero_torpediniere, numero_sottomarini, numero_corazzate;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            Mat[i][j] = '*';
        }
    }

    cout << "Quante navi vuoi? ";
    cin >> numero_navi;

    do{
        cout << "Quante Torpediniere (2): ";
        cin >> numero_torpediniere;
    }while(numero_torpediniere>numero_navi);
    numero_navi -= numero_torpediniere;
    do{
        cout << "Quanti Sottomarini (3): ";
        cin >> numero_sottomarini;
    }while(numero_sottomarini>numero_navi);
    numero_navi -= numero_sottomarini;
    do{
        cout << "Quante Corazzate (4): ";
        cin >> numero_corazzate;
    }while(numero_corazzate>numero_navi);
    numero_navi -= numero_corazzate;

    int r, c;
    for(int i=0; i<numero_torpediniere; i++){
        r=rand()%n;
        c=rand()%n;
        for(int j=r; j<r+2; j++){
            for(int k=r; k<c+2; k++){

            }
        }
    }

    system("pause");
    return 0;
}
