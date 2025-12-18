/*
data una matrice di numeri interi, dopo caricata visualizzata.
trasformare gli elementi che appartengono al perimetro in 0
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    srand(time(NULL));
    int n, m;

    cout << "Inserisci n: ";
    cin >> n;
    cout << "Inserisci m: ";
    cin >> m;

    int Mat[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            Mat[i][j] = 1+rand()%100;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << Mat[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i==0 || i==n-1)
                Mat[i][j] = 0;
            if(j==0 || j==m-1)
                Mat[i][j] = 0;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << Mat[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    system("pause");
    return 0;
}
