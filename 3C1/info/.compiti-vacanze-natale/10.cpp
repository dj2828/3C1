#include <iostream>
using namespace std;

int main(){
    int n, vocali, consonanti, i;
    char x;

    vocali = 0;
    consonanti = 0;
    
    cout << "Quanti caratteri: ";
    cin >> n;

    char v[n];

    for(i=0;i<n;i++){
        cout << "Inserisci carattere: ";
        cin >> v[i];
    }

    cout << "Vettore inverso: ";
    for(i=n-1;i>=0;i--)
        cout << v[i] << " ";
    cout << endl;

    for(i=0;i<n;i++){
        if(v[i]=='a'||v[i]=='e'||v[i]=='i'||v[i]=='o'||v[i]=='u'||
           v[i]=='A'||v[i]=='E'||v[i]=='I'||v[i]=='O'||v[i]=='U')
            vocali++;
        else
            consonanti++;
    }

    cout << "Vocali: " << vocali << endl;
    cout << "Consonanti: " << consonanti << endl;

    cout << "Carattere da cercare: ";
    cin >> x;

    for(i=0;i<n;i++){
        if(v[i]==x)
            cout << "Trovato in posizione " << i << endl;
    }

    system("pause");
    return 0;
}
