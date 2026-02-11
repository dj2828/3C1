/*
    mat int +- (rand) intervallo in input
    menu:
        1 npos++
        2 nneg++
        3 somma riga --> vettorem --> ordina 1..10
        4 mat --> mat opposti

*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    srand(time(NULL));
    int n, nposs=0, nneg=0;
    cout << "N ";
    cin >> n;

    int mat[n][n], somme[n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            mat[i][j] = -20+rand()%40;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }

    int s;
    cout << "1) nposs++" << endl;
    cout << "2) nneg++" << endl;
    cout << "3) somma" << endl;
    cout << "4) opposti" << endl;
    cin >> s;

    for(int i=0; i<n; i++){
        int somma=0;
        for(int j=0; j<n; j++){
            if(s==1 && mat[i][j] >= 0) nposs++;
            if(s==2 && mat[i][j] < 0) nneg++;
            if(s==3){
                somma+=mat[i][j];
            }
            if(s==4){
                mat[i][j] = -1*mat[i][j];
            }
        }
        somme[i] = somma;
    }

    if(s==1) cout << "Pos " << nposs << endl;
    if(s==2) cout << "Neg " << nneg << endl;
    if(s==3){
        for(int i=0; i<n-1; i++){
            for(int j=0; j<n-1-i; j++){
                if(somme[j]>somme[j+1]){
                    int temp = somme[j];
                    somme[j] = somme[j+1];
                    somme[j+1] = temp;
                }
            }
        }
        cout << "Vett ";
        for(int i: somme) cout << i << " ";
        cout << endl;
    }
    if(s==4){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << mat[i][j] << "\t";
            }
            cout << endl;
        }
    }

    system("pause");
    return 0;
}
