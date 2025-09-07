#include <iostream>
using namespace std;
int main(){
    float r, perimetro, area;
    printf("raggio ");
    cin >> r;
    perimetro = 2*r*3.14;
    area = r*r*3.14;
    cout << "Il perimetro è: " << perimetro << endl;
    cout << "L'area è: " << area << endl;

    system("PAUSE");
    return 0;
}