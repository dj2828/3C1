#include <iostream>
using namespace std;

int main()
{
    int num;

    do{
        cout << "Inserisci un numero ";
        cin >> num;
        cout << num << endl;
    }while (num>=0);


    system("pause");
    return 0;
}
