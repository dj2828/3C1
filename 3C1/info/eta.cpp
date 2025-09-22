/*
date 3 et� di 3 sportivi presi in input, mettere in ordine crescente nome ed et� dei tre sportivi.
chi � il piu anziano e piu giovane. quante et� sono pari e quante dispari(percentuale).
*/

/*
creo le variabili string nome1, nome2, nome3 per contenere i nomi. n1, n2, n3 per contenere i nomi riordinati
creo le variabili int s1, s2, s3 per contenere le eta. e1, e2, e3 per contenere le eta riordinate. pari=0 per il numero di eta pari;
controllo che variabile � la maggiore e la salvo in e1.
controllo quale variabile � la minore e la salvo in e3.
controllo quale variabile non � n� la maggiore n� la minore quindi � quella media e la salvo in e2.
controllo se le et� sono pari e se lo sono aggiungo 1 a pari.
faccio la percentuale dei pari e dispari.
*/

#include <iostream>
using namespace std;

int main(){
    string nome1, nome2, nome3, n1, n2, n3;
    int s1, s2, s3, e1, e2, e3, pari=0;
    float perpari, perdisp;
    // input
    cout << "Inserisci il nome del primo sportivo: ";
    cin >> nome1;
    cout << "Inserisci l'eta' del primo sportivo: ";
    cin >> s1;
    cout << "Inserisci il nome del secondo sportivo: ";
    cin >> nome2;
    cout << "Inserisci l'eta' del secondo sportivo: ";
    cin >> s2;
    cout << "Inserisci il nome del terzo sportivo: ";
    cin >> nome3;
    cout << "Inserisci l'eta' del terzo sportivo: ";
    cin >> s3;
    // fine input

    // riordina
    // se s1 � il piu grande
    if (s1>s2&&s1>s3){
        n1 = nome1;
        e1 = s1;
    }
    // se s2 � il piu grande
    else if (s2>s1&&s2>s3){
        n1 = nome2;
        e1 = s2;
    }
    // se s3 � il piu grande
    else if (s3>s1&&s3>s2){
        n1 = nome3;
        e1 = s3;
    }
    // se s1 � il piu piccolo
    if (s1<s2&&s1<s3){
        n3 = nome1;
        e3 = s1;
    }
    // se s2 � il piu piccolo
    else if (s2<s1&&s2<s3){
        n3 = nome2;
        e3 = s2;
    }
    // se s3 � il piu piccolo
    else if (s3<s2&&s3<s1){
        n3 = nome3;
        e3 = s3;
    }

    // se s1 non � n� il piu grande n� il piu piccolo
    if (s1!=e1&&s1!=e3){
        cout << "s1: "<<s1<< "; e1:"<<e1<<"; e3:"<<e3<<endl;
        n2 = nome1;
        e2 = s1;
    }
    // se s2 non � n� il piu grande n� il piu piccolo
    else if (s2!=e1&&s2!=e3){
        n2 = nome2;
        e2 = s2;
    }
    // se s3 non � n� il piu grande n� il piu piccolo
    else if (s3!=e1&&s3!=e3){
        n2 = nome3;
        e2 = s3;
    }

    //controllo pari
    if (e1%2==0){
        pari ++;
    }
    if (e2%2==0){
        pari ++;
    }
    if (e3%2==0){
        pari ++;
    }

    //calcolo percentuale pari
    perpari = (float)pari/3*100;
    //calcolo percentuale dispari
    perdisp = 100-perpari;

    cout <<endl<< "Eta' maggiore: " <<n1<<" "<< e1 <<endl;
    cout << "Eta' media: " <<n2<<" "<< e2 <<endl;
    cout << "Eta' minore: " <<n3<<" "<< e3 <<endl;
    cout << "Eta' pari: "<<perpari<<"%"<<endl;
    cout << "Eta' dispari: "<<perdisp<<"%"<<endl;

    system("pause");
    return 0;
}
