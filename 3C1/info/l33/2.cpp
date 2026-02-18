/*
    mat char, n>3, A-z
    contare quanti caratteri sono A-a, perc
*/
#include <iostream>
using namespace std;

int main(){
    int n, grandi=0, piccoli=0;
    cout << "N>3: ";
    cin >> n;
    if(n<=3) return 1;
    char Mat[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int num=0;
            do{
                num = rand()%57;
            }while(num>=26&&num<=31);
            Mat[i][j] = 'A'+num;
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
            if(Mat[i][j]<='Z') grandi++;
            else if(Mat[i][j]>='a') piccoli++;
        }
    }

    cout << "Maiuscole: " << grandi << " " << (float)grandi/(n*n)*100 << "%" << endl;
    cout << "Minuscole: " << piccoli << " " << (float)piccoli/(n*n)*100 << "%" << endl;

    system("pause");
    return 0;
}
