/*
    mat char rand
    menu:
        rettangolare o quadrata
        --> mat tutti i char minuscoli
        ask conta cons OPPURE voc return
        --> vet voc MAIUSCOLE, se voc min: *
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char mat[10][10]={}, mat_min[10][10]={};
int n, m;

void riempiMat(){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(rand()%2 == 0)
                mat[i][j] = 'a' + rand()%26;
            else
                mat[i][j] = 'A' + rand()%26;
        }
    }
}

void dispMat(char mat[10][10] = mat){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

bool checkVoc(char lettera){
    if (lettera=='A' || lettera=='E' || lettera=='I' || lettera=='O' || lettera=='U' ||
        lettera=='a' || lettera=='e' || lettera=='i' || lettera=='o' || lettera=='u')
        return true;
    else
        return false;
}
int conta(int cosa){
    int voc, cons;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if (checkVoc(mat[i][j])){
                voc++;
            }
            else
                cons++;
        }
    }
    return (cosa==0) ? cons : voc;
}

int menu(){
    int a;
    do{
cout << "\
1) rettangolare o quadrata \n\
2) --> mat tutti i char minuscoli \n\
3) ask conta cons OPPURE voc return \n\
4) --> vet voc MAIUSCOLE, se voc min: * \n\
5) esci" << endl;
        cin >> a;
        }while(a>5 || a<1);
        return a;
}

void checkRettangolareQuadrata(){
    if (n==m)
        cout << "Matrice Quadrata" << endl;
    else
        cout << "Matrice Rettangolare (" << n << "x" << m << ")" << endl;
}

bool checkMinuscole(char lettera){
    return (lettera>='a' && lettera<='z') ? true : false;
}
void copyMatMinuscole(){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            mat_min[i][j] = (checkMinuscole(mat[i][j])) ? mat[i][j] : ' ';
        }
    }
}

void vetVocMaiuscole(){
    char vet[n*m];
    int k=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            vet[k++] = (!checkMinuscole(mat[i][j]) && checkVoc(mat[i][j])) ? mat[i][j] : '*';
        }
    }

    for(int i=0; i<n*m; i++){
        cout << vet[i] << " ";
    }
    cout << endl;
}

int main(){
    srand(time(NULL));
    cout << "N: ";
    cin >> n;
    cout << "M: ";
    cin >> m;

    riempiMat();
    dispMat();

    bool esci = false;
    while(!esci){
        int risp = menu();
        if(risp == 1){
            checkRettangolareQuadrata();
        }
        else if(risp == 2){
            copyMatMinuscole();
            dispMat(mat_min);
        }
        else if(risp == 3){
            int a;
            cout << "Cons o Voc (0/1) ";
            cin >> a;
            cout << conta(a) << endl;
        }
        else if(risp == 4){
            vetVocMaiuscole();
        }
        else if(risp == 5){
            esci = true;
        }
    }

    system("pause");
    return 0;
}
