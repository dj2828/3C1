#include <iostream>
using namespace std;

int main(){
    int n, i;
    bool uguali=true;
    
    cout << "Dimensione vettori: ";
    cin >> n;

    char a[n], b[n];

    for(i=0;i<n;i++){
        cout << "Inserisci carattere primo vettore: ";
        cin >> a[i];
    }

    for(i=0;i<n;i++){
        cout << "Inserisci carattere secondo vettore: ";
        cin >> b[i];
    }

    for(i=0;i<n;i++){
        if(a[i]!=b[i])
            uguali=false;
    }

    if(uguali)
        cout << "I vettori sono uguali" << endl;
    else
        cout << "I vettori sono diversi" << endl;

    system("pause");
    return 0;
}
