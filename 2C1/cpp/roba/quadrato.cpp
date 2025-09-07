#include <iostream>
using namespace std;

// base haltezza
// rettangolo
// 2p a

int main()
{
    float b, h, pp, a;
    cout << "metti la base ";
    cin >> b;
    cout << "metti l' altezza ";
    cin >> h;

    pp=2*(b+h);
    a=b*h;

    cout << "il p e' " << pp << endl;
    cout << "l' area e' " << a << endl;

    system("PAUSE");
    return 0;
}
