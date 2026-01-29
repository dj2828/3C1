/*
    mat char dimen random 3-7
    in mat
    cout se quadrata - cout dimensioni - cout mat
    cout A+12 riempite random(?)
    in colonna, cout e voc++(singole)
    mat 2x2 prende elementi rand
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int Dimensioni_matrice[2] = {3+rand()%5, 3+rand()%5};
    int n = Dimensioni_matrice[0]*Dimensioni_matrice[1];
    char Mat[Dimensioni_matrice[0]][Dimensioni_matrice[1]];

    cout << "Righe " << Dimensioni_matrice[0] << " | Colonne " << Dimensioni_matrice[1] << endl;
    cout << "La matrice \212 ";
    if(Dimensioni_matrice[0]==Dimensioni_matrice[1])
        cout << "quadrata" << endl;
    else
        cout << "rettangolare" << endl;

    for(int i=0; i<Dimensioni_matrice[0]; i++){
        for(int j=0; j<Dimensioni_matrice[1]; j++){
            cout << "Inserisci " << i << " " << j << ": ";
            cin >> Mat[i][j];
        }
    }

    for(int i=0; i<Dimensioni_matrice[0]; i++){
        for(int j=0; j<Dimensioni_matrice[1]; j++){
            cout << Mat[i][j] << "\t";
        }
        cout << endl;
    }

    int colonna;
    cout << "Che colonna? ";
    cin >> colonna;

    cout << "Colonna: ";
    int Voc[5] = {};
    for(int i=0; i<Dimensioni_matrice[0]; i++){
        cout << Mat[i][colonna] << " ";
        switch(Mat[i][colonna]){
        case 'a':
            Voc[0]++;
            break;
        case 'e':
            Voc[1]++;
            break;
        case 'i':
            Voc[2]++;
            break;
        case 'o':
            Voc[3]++;
            break;
        case 'u':
            Voc[4]++;
            break;
        }
    }
    cout << endl << "Numero vocali:\na " << Voc[0] << "\ne " << Voc[1] << "\ni " << Voc[2] << "\no " << Voc[3] << "\nu " << Voc[4] << endl;

    char Mat2[2][2];

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            Mat2[i][j] = Mat[rand()%Dimensioni_matrice[0]][rand()%Dimensioni_matrice[1]];
        }
    }
    cout << endl << "Matrice 2x2:" <<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout << Mat2[i][j] << " ";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
