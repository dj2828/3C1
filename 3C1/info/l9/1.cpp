/*
un autovelox programmato per indicare la multa di 60e secondo la procedura:
se v > 50km/h si
per ogni km/h sopra ai 50 aumenta di 1,5e
Velocità random
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main(){
    srand(time(NULL));
    float supplemento, v;

    v=rand()%100;
    cout << "Velocita rilevata: "<<v<<endl;

    if(v>50){
        cout << "Superati i 50km/h"<<endl;
        supplemento = (v-50)*1.5;
        cout << "Costo multa: "<<60+supplemento<<endl;
    }
    else{
        cout << "Velocita sotto i 50km/h"<<endl;
    }

    system("pause");
    return 0;
}
