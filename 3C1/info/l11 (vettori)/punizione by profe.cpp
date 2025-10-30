#include <iostream>
using namespace std;

int main(){
    int Altezze[]={10,10,22,42,22,22,3};
    const int n = 7;
    int maxa, mina, moda, modanum=0;

    for(int i=0; i<n; i++){
        cout << "Altezza: " << Altezze[i]<<endl;
    }

    for(int i=0; i<n; i++){
        if(i==0){
            maxa = Altezze[i];
            mina = Altezze[i];
        }
        if(Altezze[i] > maxa){
            maxa = Altezze[i];
        }
        else if(Altezze[i]<mina){
            mina = Altezze[i];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(Altezze[j] == Altezze[i]){
                modanum++;
            }
        }
        if(i==0 || modanum > moda){
            moda = Altezze[i];
        }
    }

    cout << "Altezza massima: " << maxa <<endl;
    cout << "Altezza minima: " << mina << endl;
    cout << "Moda: " << moda << endl;
    system("pause");
    return 0;
}
