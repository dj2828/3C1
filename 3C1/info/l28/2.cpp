/*
    dato in input un numero costruire la sua tabellina, usando anche i simboli X =
    7 x 0 = 0
*/
#include <iostream>
using namespace std;

int main(){
    int n, quanti=10;
    quanti++;
    string A[quanti];

    cout << "Inserisci il numero: ";
    cin >> n;

    for(int i=0; i<quanti; i++)
        A[i] = to_string(n) + " x " + to_string(i) + " = " + to_string(n*i);

    for(string i: A)
        cout << i << endl;

    system("pause");
    return 0;
}
