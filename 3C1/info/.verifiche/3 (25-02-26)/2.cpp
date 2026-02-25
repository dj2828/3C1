#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int n, m, voc = 0, cons = 0;
    cout << "n: ";
    cin >> n;
    cout << "M: ";
    cin >> m;
    char Mat[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            Mat[i][j] = 'a' + rand()%26;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(Mat[i][j] == 'a' || Mat[i][j] == 'e' || Mat[i][j] == 'i' || Mat[i][j] == 'o' || Mat[i][j] == 'u'){
                voc++;
                Mat[i][j] = '*';
            }
            else cons++;
        }
    }

    //output
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << Mat[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Vocali: " << voc << " " << (float)voc/(n*m)*100 << "%" << endl;
    cout << "Consonanti: " << cons << " " << (float)cons/(n*m)*100 << "%" << endl;

    system("pause");
    return 0;
}
