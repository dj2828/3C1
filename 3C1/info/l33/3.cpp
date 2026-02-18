/*
    mat rand int intervallo input
    righe dispari --> new vet
    somma new vet, se somma==17,60,23,63,500: auguri buon natale -- auguri miacle? jordan --!
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "N: ";
    cin >> n;
    int Mat[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            Mat[i][j] = rand()%50;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << Mat[i][j] << "\t";
        }
        cout << endl;
    }

    vector<int> Vet;
    for(int i=0; i<n+1; i+=2){
        for(int j=0; j<n; j++){
            Vet.push_back(Mat[i+1][j]);
        }
    }

    int somma=0;
    for(int i=0; i<Vet.size(); i++){
        somma += Vet[i];
    }

    if(somma==17||somma==60||somma==23||somma==63||somma==500)
        cout << "Auguri buon natale -- Auguri Michael Jordan --!" << endl;

    system("pause");
    return 0;
}
