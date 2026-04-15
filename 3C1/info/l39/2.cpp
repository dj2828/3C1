/*
    n*m
    menu:
        riga --> max, min e poss
        colonna --> somma e media
        somma 1 riga con ultima riga --> vettore
        individuare elelmento croce else null
        in numero --> riga 0: 2(%) ...
        info
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int mat[10][10] = {};
int n, m;

void riempiMat(){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            mat[i][j] = rand()%21;
        }
    }
}
void dispMat(){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
int menu(){
    int a;
    do{
cout << "\
1) riga --> max, min e poss \n\
2) colonna --> somma e media \n\
3) somma 1 riga con ultima riga --> vettore \n\
4) individuare elelmento croce else null \n\
5) in numero --> riga 0: 2(%) ... \n\
6) info \n\
7) esci" << endl;
        cin >> a;
        }while(a>7 || a<1);
        return a;
}

void maxMin(int riga){
    int maxn, minn, posmax, posmin;
    maxn = mat[riga][0];
    posmax = 0;
    minn = mat[riga][0];
    posmin = 0;
    for(int j=0; j<m; j++){
        if(mat[riga][j] > maxn){
            maxn = mat[riga][j];
            posmax = j;
        }
        if(mat[riga][j] < minn){
            minn = mat[riga][j];
            posmin = j;
        }
    }

    cout << "Max: " << maxn << "(" << riga << " " << posmax << ") Min: " << minn << "(" << riga << " " << posmin << ")" << endl;
}

void sommaMedia(int colonna){
    int somma = 0;

    for(int i=0; i<n; i++){
        somma += mat[i][colonna];
    }
    cout << "Somma " << somma << " Media " << (float)somma/n << endl;
}

void sommaMargini(){
    int somma[m];

    for(int j=0; j<m; j++){
        somma[j] = mat[0][j] + mat[n-1][j];
    }

    for(int i=0; i<m; i++){
        cout << somma[i] << " ";
    }
    cout << endl;
}

void elementoCroce(){
    if(n==m && n%2!=0){
        int a = (n/2);
        cout << "Elemento croce: " << mat[a][a] << endl;
    }
    else{
        cout << "Elemento croce inesistente" << endl;
    }
}

void cercaNum(int num){
    for(int i=0; i<n; i++){
        int conta = 0;
        for(int j=0; j<m; j++){
            if(mat[i][j] == num)
                conta ++;
        }
        cout << "Riga " << i << ": " << conta << "(" << ((float)conta/m)*100 << "%)" << endl;
    }
}

int main(){
    srand(time(NULL));
    cout << "N: ";
    cin >> n;
    cout << "M: ";
    cin >> m;

    riempiMat();
    dispMat();

    bool esci = false;
    while(!esci){
        int risp = menu();
        if(risp == 1){
            int riga;
            cout << "Riga: ";
            cin >> riga;
            maxMin(riga);
        }
        else if(risp == 2){
            int col;
            cout << "Colonna: ";
            cin >> col;
            sommaMedia(col);
        }
        else if(risp == 3){
            sommaMargini();
        }
        else if(risp == 4){
            elementoCroce();
        }
        else if(risp == 5){
            int num;
            cout << "Num: ";
            cin >> num;
            cercaNum(num);
        }
        else if(risp == 6){
            cout << "By Dj" << endl;
        }
        else if(risp == 7){
            esci = true;
        }
    }

    system("pause");
    return 0;
}
