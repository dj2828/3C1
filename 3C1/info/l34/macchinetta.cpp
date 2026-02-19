#include <iostream>
using namespace std;

int main(){
    const int PIENO_MAX = 8;
    const int PIENO_MIN = 3;

    string Nomi[4][3] = {{"Acqua naturale","Acqua frizzante","Acqua naturale"},
                        {"Acqua frizzante","Acqua naturale","Acqua naturale"},
                        {"Coca-Cola","Coca-Cola","Fanta"},
                        {"Kinder pinguino","Biscotto generico","Ringo cioccolata"}};
    int Quantita[4][3];

    bool ricarica = false;
    int scelta;

    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            Quantita[i][j] = PIENO_MAX;
        }
    }

    do{
        int riga, colonna;
        // display macchinetta
        for(int i=-1; i<4; i++){
            for(int j=-1; j<3; j++){
                if(i==-1){
                    if(j!=-1) cout << j << "\t\t";
                    else cout << ' ' << "\t";
                }
                else if(j==-1) cout << i << "\t";
                else cout << Nomi[i][j] << "\t";
            }
            cout << endl;
        }
        // menu
        cout << endl << "1) Compra" << endl;
        cout << "2) Esci" << endl;
        if(ricarica) cout << "3) Ricarica" << endl;
        cin >> scelta;

        if(scelta==1){ //compra
            cout << "Dove?" << endl;
            cout << "Riga: ";
            cin >> riga;
            cout << "Colonna: ";
            cin >> colonna;

            if(Quantita[riga][colonna] < 1){
                cout << "La quantità non basta per essere erogata" << endl;
            }
            else{
                cout << "EROGAZIONE " << Nomi[riga][colonna] << " IN CORSO..." << endl;
                Quantita[riga][colonna]--;
                if(Quantita[riga][colonna] <= PIENO_MIN){
                    cout << "ATTENZIONE! " << Nomi[riga][colonna] << " ARRIVATO A " << Quantita[riga][colonna] << endl;
                    ricarica = true;
                }
            }
        }
        else if(scelta==3){ //ricarica
            int k=1;
            system("cls");
            for(int i=0; i<4; i++){
                for(int j=0; j<3; j++){
                    if(Quantita[i][j] <= PIENO_MIN) cout << k++ << " - " << Nomi[i][j] << ": " << Quantita[i][j] << endl;
                }
            }
            cout << "RICARICAMENTO IN CORSO..." << endl;
            for(int i=0; i<4; i++){
                for(int j=0; j<3; j++){
                    if(Quantita[i][j] <= PIENO_MIN) Quantita[i][j] = PIENO_MAX;
                }
            }
            ricarica = false;
        }
    }while(scelta!=2);


    system("pause");
    return 0;
}
