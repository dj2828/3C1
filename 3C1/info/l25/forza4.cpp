#include <iostream>
using namespace std;

const int grandezza_griglia = 7;
char Griglia[grandezza_griglia][grandezza_griglia];
int player=0;

void Riempi_griglia(){
    for(int i=0; i<grandezza_griglia+1; i++){
        for(int j=0; j<grandezza_griglia; j++){
            Griglia[i][j] = '.';
        }
    }
}

void Disp(){
    for(int i=0; i<grandezza_griglia; i++){
        for(int j=0; j<grandezza_griglia; j++){
            if(i==0){
                cout << j << " ";
            }
            else
                cout << Griglia[i][j] << " ";
        }
        cout << endl;
    }
}

bool Posiziona(){
    Disp();

    return true;
}


int main(){
    Riempi_griglia();
    Posiziona();

    system("pause");
    return 0;
}
