#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    float c1, c2, a, p, i;
    cout << "scrivi il primo cateto: ";
    cin >> c1;
    cout << "scrivi il secondo cateto: ";
    cin >> c2;

    i = sqrt((c1*c1)+(c2*c2));
    p = c1+c2+i;
    a = (c1+c2)/2;

    cout << "il perimetro è " << p << endl;
    cout << "l'area è " << a << endl;

    system("PAUSE");
    return 0;
}