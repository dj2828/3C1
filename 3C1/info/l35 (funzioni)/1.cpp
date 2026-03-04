/*
   calc
*/
#include <iostream>
using namespace std;

int addizione(int n1, int n2){
    return n1 + n2;
}
int sottrazione(int n1, int n2){
    return n1 - n2;
}
int molt(int n1, int n2){
    return n1 * n2;
}
float divi(int n1, int n2){
    return (float)n1 / n2;
}
float mediaa(int somma, const int numeri = 2){ // numeri avendo scritto =2 non è obbligatorio passarlo in input, pk come valore di default ha 2. Quindi se non si mette nulla rimane 2, altrimenti prende il valore passato in input.
    return (float)somma / numeri;
}

void output(int somma, int meno, int per, float diviso, float media){
    cout << endl << "Somma: " << somma << endl;
    cout << "Meno: " << meno << endl;
    cout << "Per: " << per << endl;
    cout << "Diviso: " << diviso << endl;
    cout << "Media: " << media << endl;
}

int main(){
    int n1, n2, somma, meno, per;
    float diviso, media;

    cout << "Num 1: ";
    cin >> n1;
    cout << "Num 2: ";
    cin >> n2;

    somma  = addizione(n1, n2);
    meno   = sottrazione(n1, n2);
    per    = molt(n1, n2);
    diviso = divi(n1, n2);
    media  = mediaa(somma);

    output(somma, meno, per, diviso, media);

    system("pause");
    return 0;
}
