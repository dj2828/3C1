#include <iostream>
#include <vector>
#include <string>
using namespace std;
/*
dato un vettore predefinito di nomi visualizzare il contenuto
*/
int main(){
    string Nomi[] = {"Pippo", "Pluto", "Paperino"};
    int numeroNomi = Nomi.size();

    for(int i=0; i<numeroNomi; i++){
        cout << Nomi[i] << endl;
    }

    system("pause");
    return 0;
}
