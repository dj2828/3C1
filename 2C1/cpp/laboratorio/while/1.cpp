#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Inserisci un numero ";
    cin >> num;

    while(num>=0){
        cout << num << endl;
        num--;
    }

    system("pause");
    return 0;
}
