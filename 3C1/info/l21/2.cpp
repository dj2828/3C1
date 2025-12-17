/*
    matrice ordine n char, caricata e visualizzata
    ricopiare tutte le vocali in un vettore
    consonanti
    ricopiare elementi matrice 1 in matrice 2, vocali sostituite da "#"
    e elementi della diagonale principale da "*"
    cout

    trasformare la matrice 1 in int, valore corrispondente dellalfabeto
*/
#include <iostream>
using namespace std;

int main(){
    const char abc[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int n, icon=0, ivoc=0;
    cout << "Inserisci la dimensione della matrice: ";
    cin >> n;
    char Mat[n][n], Mat2[n][n];
    int Matint[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "Inserisci il carattere in " << i << ", " << j << ": ";
            cin >> Mat[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << Mat[i][j] << "\t";
        }
        cout << endl;
    }

    // voc cons
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(Mat[i][j]=='a' || Mat[i][j]=='e' || Mat[i][j]=='i' || Mat[i][j]=='o' || Mat[i][j]=='u')
                ivoc++;
            else
                icon++;
        }
    }
    char Voc[ivoc], Cons[icon];
    ivoc=0, icon=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(Mat[i][j]=='a' || Mat[i][j]=='e' || Mat[i][j]=='i' || Mat[i][j]=='o' || Mat[i][j]=='u'){
                Voc[ivoc] = Mat[i][j];
                ivoc++;
            }
            else{
            Cons[icon] = Mat[i][j];
                icon++;
            }
        }
    }
    cout << "Vocali: ";
    for(int i=0; i<ivoc; i++)
        cout << Voc[i] << " ";
    cout << endl << "Consonanti: ";
    for(int i=0; i<icon; i++)
        cout << Cons[i] << " ";
    cout << endl;

    // mat2
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(Mat[i][j]=='a' || Mat[i][j]=='e' || Mat[i][j]=='i' || Mat[i][j]=='o' || Mat[i][j]=='u')
                Mat2[i][j] = '#';
            else
                Mat2[i][j] = Mat[i][j];

            if(i==j)
                Mat2[i][j] = '*';
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << Mat2[i][j] << "\t";
        }
        cout << endl;
    }

    // conversione matrice
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<26; k++){
                if(Mat[i][j]==abc[k])
                    Matint[i][j] = k+1;
            }
        }
    }
    cout << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << Matint[i][j] << "\t";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
