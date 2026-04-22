#include <iostream>
using namespace std;

struct Atleta{
    string cognome;
    int eta;
    int stipendio;
};

int main(){
    int n, tot_stipendio = 0;
    cout << "N: ";
    cin >> n;
    Atleta calciatore[n];

    for(int i=0; i<n; i++){
        cout << "Cognome: ";
        cin >> calciatore[i].cognome;
        cout << "Eta: ";
        cin >> calciatore[i].eta;
        cout << "Stipendio: ";
        cin >> calciatore[i].stipendio;
    }

    cout << endl;
    for(int i=0; i<n; i++){
        cout << "Cognome: " << calciatore[i].cognome << endl;
        cout << "Eta: " << calciatore[i].eta << endl;
        cout << "Stipendio: " << calciatore[i].stipendio << endl;
    }

    cout << endl;
    for(Atleta x: calciatore)
        tot_stipendio += x.stipendio;
    cout << "Tot stipendio: " << tot_stipendio << endl;
    cout << "Media: " << (float)tot_stipendio/n << endl;

    cout << endl;
    int maxc, posmax = 0, minc, posmin = 0;
    maxc = calciatore[0].eta;
    minc = calciatore[0].eta;
    for(int i=0; i<n; i++){
        if(calciatore[i].eta > maxc){
            maxc = calciatore[i].eta;
            posmax = i;
        }
        if(calciatore[i].eta < minc){
            minc = calciatore[i].eta;
            posmin = i;
        }
    }

    cout << "Piu anziano: " << endl;
    cout << "   Cognome: " << calciatore[posmax].cognome << endl;
    cout << "   Eta: " << calciatore[posmax].eta << endl;
    cout << "   Stipendio: " << calciatore[posmax].stipendio << endl;
    cout << "Piu giovane: " << endl;
    cout << "   Cognome: " << calciatore[posmin].cognome << endl;
    cout << "   Eta: " << calciatore[posmin].eta << endl;
    cout << "   Stipendio: " << calciatore[posmin].stipendio << endl;

    system("pause");
    return 0;
}
