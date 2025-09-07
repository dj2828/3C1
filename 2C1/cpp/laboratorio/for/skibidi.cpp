/*dato un elenco di n citta di cui si conosce il nome e il n di abitanti,
calcola:
nome citta max n ab; -min; ncitta+1m; ncitta 100.000 300.000; nab milano; n ab di city(input)*/
#include <iostream>
using namespace std;

int main(){
    int n, ab, amax, amin, ncitta1m=0, ncitta13=0, nabmilano=0, abcity;
    string nome, nomemax, nomemin, city;

    cout << "Inserisci citta per sapere gli ab: ";
    cin >> city;
    cout << "Inserisci il numero delle citta: ";
    cin >> n;
    for(int i=1; i<=n;i++){
        system("cls");
        cout << "Inserisci il nome della "<<i<<"* citta: ";
        cin >> nome;
        cout << "Inserisci il numero di abitanti della "<<i<<"* citta: ";
        cin >> ab;

        if(i==1){
            amax=ab;
            nomemax=nome;
        }
        if(i==1){
            amin=ab;
            nomemin=nome;
        }
        else if(ab>amax){
            amax=ab;
            nomemax=nome;
        }else if(ab<amin){
            amin=ab;
            nomemin=nome;
        }

        if(ab>1000000)
            ncitta1m++;
        else if (ab>100000 && ab<300000)
            ncitta13++;

        if(nome=="milano")
            nabmilano=ab;
        else if(nome==city)
            abcity=ab;
    }

    system("cls");
    cout << "Max: "<<nomemax<<": "<<amax<<endl;
    cout << "Min: "<<nomemin<<": "<<amin<<endl;
    cout << "N citta +1m ab: "<<ncitta1m<<endl;
    cout << "N citta 100.000 300.000 ab: "<<ncitta13<<endl;
    if (nabmilano!=0)
        cout << "N abitanti di Milano: "<<nabmilano<<endl;
    else
        cout << "N abitanti di Milano: N/A"<<endl;
    cout << "N abitanti di "<<city<<": "<<abcity<<endl;

    system("pause");
    return 0;
}
