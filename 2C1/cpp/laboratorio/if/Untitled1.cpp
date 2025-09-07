//Ricevuti in ingresso due valori, fanne la sottrazione se il primo è maggiore del secondo
//o farne la somma se il primo è minore del secondo. (Se sono uguali, segnalalo a video.)
#include<iostream>
using namespace std;

int main(){
    int n1, n2, tot;

    cout << "Metti il primo numero ";
    cin >> n1;
    cout << "Metti il secondo numero diverso dal primo ";
    cin >> n2;

    if(n1>n2){
        tot = n1-n2;
        cout<<"La differenza tra i due numeri \212 " << tot <<endl;
    }
    else{
        tot = n1+n2;
        cout<<"La somma tra i due numeri \212 " << tot <<endl;
    }

    system("PAUSE");
    return 0;
}
