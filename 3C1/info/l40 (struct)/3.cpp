/*
    elenco:
        pippo promosso
        pluto bocciato
        rnjo rimandato

    cond:
        promosso - tutti >=6
        bocciato - >=4 voti <6
        timandato - else

*/
#include <iostream>
using namespace std;

const int N_MAT = 9;
string materie[] = {"Italiano", "Storia", "Mate", "Ing", "Info", "Sys", "Tpsit", "Tlc", "Moto"};

struct Alunno{
    string cognome;
    int voti[N_MAT];
};

Alunno alunni[10];
int n;

int main(){
    cout << "N: ";
    cin >> n;

    for(int i=0; i<n; i++){
        cout << "Cognome: ";
        cin >> alunni[i].cognome;
        for(int j=0; j<N_MAT; j++){
            cout << materie[j] << ": ";
            cin >> alunni[i].voti[j];
        }
        cout << endl;
    }

    for(int i=0; i<n; i++){
        int suff = 0, insuff = 0;
        for(int voto: alunni[i].voti){
            if(voto>=6) suff++;
            else insuff++;
        }
        cout << alunni[i].cognome;
        if(suff == N_MAT)
            cout << " PROMOSSO" << endl;
        else if(insuff >=4)
            cout << " BOCCIATO" << endl;
        else
            cout << " RIMANDATO" << endl;
    }

    system("pause");
    return 0;
}
