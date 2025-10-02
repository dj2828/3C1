#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    int numero;
    srand(time(NULL)); // inizializza rand num
    numero = 1+(rand()%6);
    cout << "Numero generato: "<<numero<<endl;

    system("pause");
    return 0;
}
