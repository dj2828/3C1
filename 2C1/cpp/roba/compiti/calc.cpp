#include <iostream>
using namespace std;
int main(){
    int a, b;
    printf("primo numero ");
    cin >> a;
    printf("secondo numero ");
    cin >> b;
    int somma = a+b;
    int men = a-b;
    int per = a*b;
    float div = a/b;
    cout << "Il risultato della somma è: " << somma << endl;
    cout << "Il risultato della sottrazione è: " << men << endl;
    cout << "Il risultato della moltiplicazione è: " << per << endl;
    cout << "Il risultato della divisione è: " << div << endl;

    system("PAUSE");
    return 0;
}