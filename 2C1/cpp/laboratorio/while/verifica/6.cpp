#include <iostream>
using namespace std;

int main(){
    int n, p, pmax, pmin, pmed, ptot=0, nf=0, nm90=0, i=0;
    char s;

    cout << "Inserisci il numero di persone: ";
    cin >> n;

    while(i<n){
        cout << "Inserisci il sesso (m/f): ";
        cin >> s;
        cout << "Inserisci il peso: ";
        cin >> p;
        cout << endl;

        if(i==0){
            pmax=p;
            pmin=p;
        }else
        {
            if(p>pmax){
                pmax=p;
            }else if(p<pmin){
                pmin=p;
            }
        }
        if(s=='f'||s=='F'){
            nf++;
        }else if(p>90){
            nm90++;
        }

        ptot += p;
        i++;
    }

    pmed=(float)ptot/n;

    cout << "Il peso massimo \212 " << pmax << endl;
    cout << "Il peso minimo \212 " << pmin << endl;
    cout << "Il peso medio \212 " << pmed << endl;
    cout << "Il numero delle femmine \212 " << nf << endl;
    cout << "Il numero dei maschi sopra ai 90Kg \212 " << nm90 << endl;


    system("pause");
    return 0;
}
