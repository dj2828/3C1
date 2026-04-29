/*
    struct libro:
        nome
        prezzo
        genere
        numero_copie
    - prezzo*numero_copie
    - tot libri
    - cerca per genere
    - aggiungimentazione di un libro --> disp()
    - nome --> comprare (ovviamente copie--) se <=3 "libri quasi finiti"
*/
#include <iostream>
#include <vector>
using namespace std;

struct Libro{
    string nome;
    float prezzo;
    int genere;
    int numero_copie;
};

enum generi{GUIDA, BIOGRAFIA, ROMANZO, MANGA, FANTASY, N_GEN};
string gen[] = {"Guida", "Biografia", "Romanzo", "Manga", "Fantasy"};
vector<Libro> libri = {
    {"Guida a fortnite - cicciogamer89", 10, GUIDA, 5},
    {"Create aereonautics - shalz", 7.67, GUIDA, 5},
    {"La storia di Jakidale", 9.63, BIOGRAFIA, 5},
    {"Capitan mutanda", 7.56, ROMANZO, 5},
    {"One piece", 5.55, MANGA, 6},
    {"Harry Potter", 19.99, FANTASY, 6}
};

void disp(){
    for(Libro libro: libri)
        cout << libro.nome << " | Euro " << libro.prezzo << " | " << gen[libro.genere] << endl;
}

void cercaPerGenere(){
    int scelta;
    for(int i=0; i<N_GEN; i++){
        cout << i << "| " << gen[i] << endl;
    }
    cin >> scelta;

    for(Libro libro: libri){
        if(libro.genere == scelta)
            cout << libro.nome << " | Euro " << libro.prezzo << endl;
    }
}

int menu(){
    int scelta;
    cout << "\n\
    1) prezzo*numero_copie\n\
    2) tot libri\n\
    3) cerca per genere\n\
    4) aggiungimentazione di un libro\n\
    5) nome --> comprare\n\
    6) exit\n";
    cin >> scelta;
    return scelta;
}

void compra(){
    string nome;
    cout << "Nome: ";
    cin.ignore();
    getline(cin, nome);

    int libro = -1;
    for(int i=0; i<libri.size(); i++){
        if(nome == libri[i].nome)
            libro = i;
    }
    if(libro == -1){
        cout << "Libro non trovato" << endl;
        return;
    }
    if(libri[libro].numero_copie == 0){
        cout << "No." <<endl;
        return;
    }
    cout << "Comprato: " << libri[libro].nome << " Euro " <<libri[libro].prezzo << endl;
    libri[libro].numero_copie--;
    if(libri[libro].numero_copie <= 3)
        cout << "libri quasi finiti" << endl;
}

int main(){
    int scelta;
    do{
        system("cls");
        disp();
        scelta = menu();
        if(scelta == 1){
            int somma=0;
            for(Libro libro: libri){
                int tot = libro.prezzo*libro.numero_copie;
                cout << libro.nome << " | Euro " << tot << endl;
                somma += tot;
            }
            cout << "Tot: Euro " << somma << endl;
        }
        else if(scelta == 2){
            int somma=0;
            for(Libro libro: libri)
                somma += libro.numero_copie;
            cout << "Totale libri: " << somma << endl;
        }
        else if(scelta == 3)
            cercaPerGenere();
        else if(scelta == 4){
            string nome;
            int numero, genere;
            float prezzo;
            cout << "Nome: ";
            cin.ignore();
            getline(cin, nome);
            cout << "Prezzo: ";
            cin >> prezzo;
            for(int i=0; i<N_GEN; i++)
                cout << i << "| " << gen[i] << endl;
            cin >> genere;
            cout << "Numero copie: ";
            cin >> numero;

            libri.push_back({nome,prezzo,genere,numero});
        }
        if(scelta == 5)
            compra();

        system("pause");
    }while(scelta != 6);

    return 0;
}
