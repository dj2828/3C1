/*
    matrice n*m, int
    scambiare le colonne pari con quelle dispari
    sommare colonna, if somma==95: simulazione else: somma.
    se presente 19 -> 4, cout, cout è stata trovat 1 sedie
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int n, m, sedie=0;
    cout << "N: ";
    cin >> n;
    cout << "M: ";
    cin >> m;
    int Mat[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            Mat[i][j] = rand()%50;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << Mat[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    for(int j=0; j<m-1; j+=2){ // -1 cosi lultima se m è dispari la salta
        for(int i=0; i<n; i++){
            int temp = Mat[i][j];
            Mat[i][j] = Mat[i][j+1];
            Mat[i][j+1] = temp;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << Mat[i][j] << "\t";
        }
        cout << endl;
    }

    for(int j=0; j<m; j++){
        int somma = 0;
        for(int i=0; i<n; i++){
            somma += Mat[i][j];
        }
        if(somma==95) cout << "Simulazione" << endl;
        else cout << "Somma: " << somma << endl;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(Mat[i][j]==19){
                Mat[i][j] = 4;
                sedie++;
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << Mat[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    cout << "|" << endl;
    cout << "|" << endl;
    cout << "----" << endl;
    cout << "|  |" << endl;
    cout << "Ci sono " << sedie << " sedie" << endl;

    int riga = rand()%n;
    int A[m];
    for(int i=0; i<m; i++){
        A[i] = Mat[riga][i];
    }
    for(int i=0;i<(m-1);i++){
        for(int j=0;j<(m-1-i);j++){
            if(A[j+1]<A[j]){
                int temp=A[j+1];
                A[j+1]=A[j];
                A[j]=temp;
            }
        }
    }
    cout << "Array ordinato, riga " << riga << endl;
    for(int i: A){
        cout << i << " ";
    }

    system("pause");
    return 0;
}
