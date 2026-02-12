#include <iostream>
using namespace std;

int main(){
    const int n=10;
    char Mat[n][n];
    int numero_navi, numero_torpediniere, numero_sottomarini, numero_corazzate;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            Mat[i][j] = '*';
        }
    }

    cout << "Quante navi vuoi? ";
    cin >> numero_navi;

    do{
        cout << "Quante Torpediniere (2): ";
        cin >> numero_torpediniere;
    }while(numero_torpediniere>numero_navi);
    numero_navi -= numero_torpediniere;
    do{
        cout << "Quanti Sottomarini (3): ";
        cin >> numero_sottomarini;
    }while(numero_sottomarini>numero_navi);
    numero_navi -= numero_sottomarini;
    do{
        cout << "Quante Corazzate (4): ";
        cin >> numero_corazzate;
    }while(numero_corazzate>numero_navi);
    numero_navi -= numero_corazzate;

    int r, c;
    for(int i=0; i<numero_torpediniere; i++){
        bool ripeti=false;
        do{
            ripeti=false;
            r=rand()%n;
            c=rand()%n;
            for(int j=c; j<c+2; j++){
                if(Mat[r][j]!='*') ripeti=true;
            }
        }while(ripeti);
        for(int j=c; j<c+2; j++){
            Mat[r][j]='T';
        }
    }
    for(int i=0; i<numero_sottomarini; i++){
        bool ripeti=false;
        do{
            ripeti=false;
            r=rand()%n;
            c=rand()%n;
            for(int j=c; j<c+3; j++){
                if(Mat[r][j]!='*') ripeti=true;
            }
        }while(ripeti);
        for(int j=c; j<c+3; j++){
            Mat[r][j]='S';
        }
    }
    for(int i=0; i<numero_corazzate; i++){
        bool ripeti=false;
        do{
            ripeti=false;
            r=rand()%n;
            c=rand()%n;
            for(int j=c; j<c+4; j++){
                if(Mat[r][j]!='*') ripeti=true;
            }
        }while(ripeti);
        for(int j=c; j<c+4; j++){
            Mat[r][j]='C';
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << Mat[i][j] << " ";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
