#include <iostream>
using namespace std;

int main(){

    int e1, e2, e3;
    float r;

    cout << "inserisci la prima eta' ";
    cin >> e1;
    cout << "inserisci la seconda eta' ";
    cin >> e2;
    cout << "inserisci la terza eta' ";
    cin >> e3;

    r = (float)(e1+e2+e3)/3;

    cout << "la media delle età è " << r << endl;

    system("PAUSE");
    return 0;
}