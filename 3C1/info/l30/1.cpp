/*
    data una matrice di caratteri [n]
    viene trasformata in int sapendo che a=1...
    contare i numeri suddivisi in classe di ampiezza 5 (0(e)-5(i),5-10,10-15) (per)
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int n;
    int Conta[6] = {};

    cout << "Inserisci la grandezza della matrice: ";
    cin >> n;

    char Car[n][n];
    int Num[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            Car[i][j] = 'a' + rand()%26;
        }
    }

    cout << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << Car[i][j] << " ";
        }
        cout << endl;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            Num[i][j] = (int)Car[i][j]-96;
        }
    }

    cout << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << Num[i][j] << "\t";
        }
        cout << endl;
    }

    for(int k=0; k<30; k+=5){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(Num[i][j] >= k && Num[i][j] < k+5)
                    Conta[k/5]++;
            }
        }
    }

    cout << "0-5 " << Conta[0] << " " << (float)Conta[0]/(n*n)*100 << "%" << endl;
    cout << "5-10 " << Conta[1] << " " << (float)Conta[1]/(n*n)*100 << "%" << endl;
    cout << "10-15 " << Conta[2] << " " << (float)Conta[2]/(n*n)*100 << "%" << endl;
    cout << "15-20 " << Conta[3] << " " << (float)Conta[3]/(n*n)*100 << "%" << endl;
    cout << "20-25 " << Conta[4] << " " << (float)Conta[4]/(n*n)*100 << "%" << endl;
    cout << "25-30 " << Conta[5] << " " << (float)Conta[5]/(n*n)*100 << "%" << endl;

    system("pause");
    return 0;
}
