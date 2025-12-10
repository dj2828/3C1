#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    int n, imax, j=0, magg=0, minn=0, ugu=0;
    // inizializzazione rand
    srand(time(NULL));
    // inserimento grandezza del vettore
    cout << "Inserisci la grandezza del vettore: ";
    cin >> n;
    // inserimento numero massimo per il random
    cout << "Inserisci il numero massimo dei numeri: ";
    cin >> imax;
    int Array1[n], Array2[n], Concat[n*2];

    // riempimento array con rand
    for (int i=0; i<n; i++){
        Array1[i] = 1+rand()%imax;
        Array2[i] = 1+rand()%imax;
    }

    // output array
    cout << "Array 1: ";
    for(int i=0; i<n; i++){
        cout << Array1[i] << "\t";
    }
    cout << endl << "Array 2: ";
    for(int i=0; i<n; i++){
        cout << Array2[i] << "\t";
    }
    cout << endl;

    // concatena
    for(int i=0; i<n; i++){ // primo array
        Concat[i] = Array1[i];
    }
    for(int i=n; i<n*2; i++){ // secondo array
        Concat[i] = Array2[j];
        j++;
    }

    // cout concatena
    cout << "Concatenato: ";
    for(int i=0; i<n*2; i++){
        cout << Concat[i] << "\t";
    }
    cout << endl;

    // controllo maggiore, minore, uguale
    for(int i=0; i<n; i++){
        if(Array1[i]>Array2[i])
            magg++;
        else if(Array1[i]<Array2[i])
            minn++;
        else
            ugu++;
    }

    // output
    cout << "Maggiori: " << magg << endl;
    cout << "Minori: " << minn << endl;
    cout << "Ugugali: " << ugu << endl;
    cout << "Totale numeri: " <<n <<endl;

    system("pause");
    return 0;
}
