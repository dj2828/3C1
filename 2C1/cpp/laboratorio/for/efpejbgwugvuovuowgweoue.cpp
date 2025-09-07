/* Dato in elenco di N studenti di una facoltà universitaria, con nome e voto in un esame
(da 18 a 30), calcola:
- Voto più alto && nomi
- Voto più basso && nomi
- Voto medio
- nome input esci voto
- cout n studenti voto 18 o 30
- n stud bocciati
- Il numero di persone con voto > media
*/
#include <iostream>
using namespace std;

int main(){
    int n, voto, vmax, vmin, somma=0, vototipo, n1830=0, bocciati=0;
    string nome, nomemax, nomemin, nometipo;
    float vmed;

    cout << "Inserisci il nome dello studente per saperne il voto: ";
    cin >> nometipo;
    cout << "Inserisci il numero di studenti: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        cout << "\nInserisci il nome dello studente "<<i<<": ";
        cin >> nome;
        cout << "Inserisci il voto dello studente "<<i<<": ";
        cin >> voto;

        if(i==1){
            vmax=voto;
            nomemax=nome;
        }
        if(i==1){
            vmin=voto;
            nomemin=nome;
        }
        if(voto>vmax){
            vmax=voto;
            nomemax=nome;
        }else if(voto<vmin){
            vmin=voto;
            nomemin=nome;
        }
        somma+=voto;
        if(nome==nometipo)
            vototipo=voto;
        if(voto==18 || voto==30)
            n1830++;
        else if(voto<18)
            bocciati++;
    }

    vmed = (float)somma/n;

    cout << endl;
    cout << "Voto maggiore: "<<nomemax<<" "<<vmax<<endl;
    cout << "Voto minore: "<<nomemin<<" "<<vmin<<endl;
    cout << "La media \212: "<<vmed<<endl;
    cout << "Il voto di "<<nometipo<<" \212: "<<vototipo<<endl;
    cout << "Numero studenti con voto 18/30: "<<n1830<<endl;
    cout << "Numero studenti bocciati: "<<bocciati<<endl;



    system("pause");
    return 0;
}
