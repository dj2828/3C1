/*
    int mat +-
    p++
    n++

    input riga, controllare se somma < > = di rand%10
*/
#include <iostream>
using namespace std;

int main(){
    int n, p=0, neg=0, r, somma=0;
    cout << "n: ";
    cin >> n;

    int Mat[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            Mat[i][j] = -20+rand()%40;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << Mat[i][j] << "\t";
        }
        cout << endl;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(Mat[i][j]>=0) p++;
            else neg++;
        }
    }

    cout << "Riga da check: ";
    cin >> r;

    for(int i=0; i<n; i++){
        somma += Mat[r][i];
    }
    int ran=rand()%10;
    cout << somma << " ";
    if(somma>ran) cout << "maggiore di " << ran << endl;
    if(somma<ran) cout << "minore di " << ran << endl;
    else cout << "uguale a " << ran << endl;

    cout << "P: " << p << endl;
    cout << "N: " << neg << endl;

    system("pause");
    return 0;
}
