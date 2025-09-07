#include <iostream>
using namespace std;

int main() {
    int n, voto, vmax, vmin, som=0, p24=0, tr1820=0;
    float vmed;

    cout << "Inserisci il numero di alunni: ";
    cin >> n;

    for (int i=0; i < n; i++) {
        cout << "Inserisci il voto: ";
        cin >> voto;

        if (i==0){
            vmax = voto;
            vmin = voto;
        }else{
            if (voto>vmax){
                vmax = voto;
            }
            if (voto<vmin){
                vmin = voto;
            }
        }

        som += voto;

        if (voto>24){
            p24++;
        }
        if (voto>=18 && voto<=20){
            tr1820++;
        }
    }
    
    vmed = (float)som/n;

    cout << "Voto massimo: " << vmax << endl;
    cout << "Voto minimo: " << vmin << endl;
    cout << "Media: " << vmed << endl;
    cout << "Voti maggiori di 24: " << p24 << endl;
    cout << "Voti tra 18 e 20: " << tr1820 << endl;

    system("pause");
    return 0;
}