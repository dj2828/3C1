/*
data una sequenza di caratteri stabilire se la sequenza ha la alternanza vocale-consonante e viceversa

*/
#include <iostream>
using namespace std;

int main(){
    int n;
    char car;
    bool uno, due, tre;
    for(int i=1; i<=3; i++){
        cout << "Inserisci il carattere: ";
        cin >> car;
        // controlla se il carattere è una lettera o una consonante
        if(car=='a'||car=='e'||car=='i'||car=='o'||car=='u'){
            if(i==1){
                uno=true;
            }
            else if(i==2){
                due=true;
            }
            else if(i==3){
                tre=true;
            }
        }else{
            if(i==1){
                uno=false;
            }
            else if(i==2){
                due=false;
            }
            else if(i==3){
                tre=false;
            }
        }
    }
    if(uno && !due && tre){
        cout << "Alternanza vocale-consonante-vocale trovata"<<endl;
    }
    else if(!uno && due && !tre){
        cout << "Alternanza consonante-vocale-consonante trovata"<<endl;
    }
    else{
        cout << "Nessuna alternanza trovata"<<endl;
    }

    system("pause");
    return 0;
}
