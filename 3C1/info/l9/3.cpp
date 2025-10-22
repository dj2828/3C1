/*
allena per tabelline
per 10 volte il progr estrae 2 num, e chuede il risultato del *, se sbaglia continua a chiederlo
out dei tentativi se 10 scrivi bravissimo, se 11-13 bravo, se 14-16 bbravino, + vai a studiare.
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    srand(time(NULL));
    int num1, num2, risp, tent=0;
    bool giusto;

    for(int i=0; i<10; i++){
        num1=rand()%11;
        num2=rand()%11;
        giusto=false;

        do{
            cout << num1 <<" * " << num2<<endl;
            cin >> risp;

            if(risp==num1*num2){
                cout << "Corretto!"<<endl;
                giusto=true;
            }else{
                cout << "ERRATO!"<<endl;
            }
            tent++;
        }while(giusto==false);
    }

    switch(tent){
    case 10:
        cout << "Bravissimo"<<endl;
        break;
    case 11 ... 13:
        cout << "Bravo"<<endl;
        break;
    case 14 ... 16:
        cout << "Bravino"<<endl;
        break;
    default:
        cout << "Vai a studiare"<<endl;
    }

    cout << "Completato in " << tent << " tentativi"<<endl;

    system("pause");
    return 0;
}
