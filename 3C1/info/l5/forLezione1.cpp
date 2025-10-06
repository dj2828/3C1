/*
dopo aver inserito n numeri int viene visualizzata la somma e la media
*/
#include <iostream>
using namespace std;

int main(){
    int n, somma=0, n_num;
    float media;

    cout << "Quanti numeri vuoi inserire: ";
    cin >> n_num;

    for(int i=0; i<n_num; i++){
        cout << "Inserisci il "<<i+1<<" numero: ";
        cin >> n;
        // a somma viene sommato n
        somma += n;
    }

    media = (float)somma/n_num;

    cout << "Somma: " << somma << endl;
    cout << "Media: " << media << endl;

    system("pause");
    return 0;
}
