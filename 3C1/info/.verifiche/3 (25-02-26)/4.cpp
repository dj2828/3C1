#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int n, m, voc = 0, cons = 0, vocmax, consmax, posvocmax, posconsmax;
    cout << "n: ";
    cin >> n;
    cout << "m: ";
    cin >> m;
    char Mat[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            Mat[i][j] = 'a' + rand()%26;
        }
    }

    for(int i=0; i<n; i++){ // max vocali per riga
        voc=0;
        for(int j=0; j<m; j++){
            if(Mat[i][j] == 'a' || Mat[i][j] == 'e' || Mat[i][j] == 'i' || Mat[i][j] == 'o' || Mat[i][j] == 'u')
                voc++;
            else cons++;
        }
        if(i==0){
            vocmax=voc;
            posvocmax = i;
        }
        if(voc>vocmax){
            vocmax=voc;
            posvocmax = i;
        }
    }
    for(int j=0; j<m; j++){ // max consonanti per colonna
        cons=0;
        for(int i=0; i<n; i++){
            if(Mat[i][j] == 'a' || Mat[i][j] == 'e' || Mat[i][j] == 'i' || Mat[i][j] == 'o' || Mat[i][j] == 'u')
                voc++;
            else cons++;
        }
        if(j==0){
            consmax=cons;
            posconsmax = j;
        }
        else if(cons>consmax){
            consmax=cons;
            posconsmax = j;
        }
    }

    // output
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << Mat[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Riga con max vocali (" << vocmax << "): " << posvocmax << endl;
    cout << "Colonna con max consonanti (" << consmax << "): " << posconsmax << endl;

    system("pause");
    return 0;
}
