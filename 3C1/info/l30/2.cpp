/*
    int mat 10x5 1-90, no duplicati riga
    input 5 numeri 1-90
    input numero riga da confrontare / tutte le righe
    if 1 riga e 1 numero: premio 11 volte
    ambo 25x
    terno 450x
    quaterna 2400x
    cinquina 6Mx
    su tutte è /10
*/
#include <iostream>
using namespace std;

int soldi;

int premio(int n, bool div=false){
    int r;
    if(n==1) r=soldi*(div)?11:11/10;
    else if(n==2) r=soldi*(div)?25:25/10;
    else if(n==3) r=soldi*(div)?450:450/10;
    else if(n==4) r=soldi*(div)?2400:2400/10;
    else if(n==5) r=soldi*(div)?6000000:6000000/10;
    return r;
}

int main(){
    int Mat[10][5] = {};
    int Num[5];

    int num, numeri_indovinati=0;
    bool ok;
    for(int i=0; i<10; i++){
        for(int j=0; j<5; j++){
            do{
                num = 1+rand()%90;
                ok = false;
                for(int k=0; k<5; k++){
                    if(num == Mat[i][k])
                        ok = true;
                }}while(ok);
            Mat[i][j] = num;
        }
    }

    for(int i=0; i<10; i++){
        for(int j=0; j<5; j++){
            cout << Mat[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Quanto scommetti? ";
    cin >> soldi;

    for(int i=0; i<5; i++){
        cout << "Inserisci il " << i+1 << " numero: ";
        cin >> Num[i];
    }

    cout << "Su che riga vuoi puntare (0-9 10=tutte) ";
    cin >> num;

    if(num==10){
        int soldi_tot=0;
        for(int k=0; k<10; k++){
            numeri_indovinati = 0;
            for(int i=0; i<5; i++){
                for(int j=0; j<5; j++){
                    if(Num[j] == Mat[k][i])
                        numeri_indovinati++;
                }
            }
            soldi_tot += premio(numeri_indovinati, true);
        }
        cout << "Soldi vinti " << soldi_tot << endl;
    }
    else{
        for(int i=0; i<5; i++){
            for(int j=0; j<5; j++){
                if(Num[j] == Mat[num][i])
                    numeri_indovinati++;
            }
        }
        cout << "Soldi vinti " << premio(numeri_indovinati) << endl;
    }

    system("pause");
    return 0;
}
