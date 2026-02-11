/*
    mat char
    new mat <-- voc = 'v', cons = 'c'
    cout a riga v++ c++ (%)
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    srand(time(NULL));
    int n, v=0, c=0;
    cout << "Inserisci n: ";
    cin >> n;
    char mat1[n][n], mat2[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            mat1[i][j] = 'a'+rand()%26;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << mat1[i][j] << " ";
        }
        cout << endl;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            mat2[i][j] = (mat1[i][j]=='a' || mat1[i][j]=='e' || mat1[i][j]=='i' || mat1[i][j]=='o' || mat1[i][j]=='u')?'v':'c';
    }

    cout << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << mat2[i][j] << " ";
        }
        cout << endl;
    }

    for(int i=0; i<n; i++){
        v=0;
        c=0;
        for(int j=0; j<n; j++){
            (mat2[i][j]=='v')?v++:c++;
        }
        cout << endl << "v " << v << " c " << c <<endl;
    }

    system("pause");
    return 0;
}
