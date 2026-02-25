#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int n, somma=0, nmax, posmax[2], sommadiagonale=0;
    cout << "N: ";
    cin >> n;
    int Mat[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            Mat[i][j] = 1+rand()%67;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            somma += Mat[i][j]; // somma
            if((i==0 && j==0) || Mat[i][j] > nmax){ // massimo
                nmax=Mat[i][j];
                posmax[0]=i;
                posmax[1]=j;
            }
        }
    }

    for(int i=0; i<n; i++){
        sommadiagonale += Mat[i][i];
    }

    for(int i=0; i<n; i++){ // sostituzione diagonale
        Mat[i][i] = (sommadiagonale%23 == 0) ? Mat[i][i]*-1 : 0;
    }

    // output
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << Mat[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "Somma: " << somma << endl;
    cout << "Max: " << nmax << " (" << posmax[0] << " " << posmax[1] << ")" << endl;
    cout << "Somma diagonale: " << sommadiagonale << endl;



    system("pause");
    return 0;
}
