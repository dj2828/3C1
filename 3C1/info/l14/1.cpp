/*
dato un array di 3 char
ci sono tre porte, dietro ogni porta ce una sorpresa,
f - ferrari
c - capra
c - capra
riempi in modo randomico larray con i due vettori
se capra solo un altra possibilita
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    char A[3], riprova;
    int nran, scelta,tentativo=0, c=0;
    bool f;
    srand(time(NULL));

    for(int i=0; i<3; i++){
        nran = rand()%2;
        if(nran == 0 && !f || c==2){
            A[i] = 'f';
            f = true;
        }
        else{
            A[i] = 'c';
            c++;
        }
    }

    do{
        cout << "Che porta scegli(1-3): ";
        cin >> scelta;

        tentativo++;
        if(A[scelta-1]=='f'){
            cout << "HAI VINTO UNA FERRARI!!!"<<endl;
        }
        else{
            cout << "HAI VINTO UNA CAPRA!!!"<<endl;
            if(tentativo!=2){
                cout << "Vuoi riprovare a vincere una Ferrari?(s/n): ";
                cin >> riprova;
            }
        }
    }while(riprova=='s' && tentativo!=2);

    system("pause");
    return 0;
}
