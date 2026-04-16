#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char Vet[10];
char VetMin[10]={};

void caricaVettore(){ // carica il vettore con lettere randomiche
    for(int i=0; i<10; i++){
        char car;
        if(rand()%2 == 0)
            car = 'a' + rand()%26;
        else
            car = 'A' + rand()%26;
        Vet[i] = car;
    }
}

void disp(char vet[]){ // scrive gli elementi di un vettore
    cout << "Vettore: ";
    for(int i=0; i<10; i++){
        cout << vet[i] << " ";
    }
    cout << endl;
}

void copyMinuscole(){ // copia i caratteri minuscoli nel vettore VetMin
    int k=0;
    for(int i=0; i<10; i++){
        char car = Vet[i];
        if(car >= 'a' && car <='z')
            VetMin[k++] = car;
    }
}

int main(){
    srand(time(NULL));
    caricaVettore();
    disp(Vet);

    copyMinuscole();
    disp(VetMin);

    system("pause");
    return 0;
}
