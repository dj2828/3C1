/*
    mat lettere
    conta for riga voc cons --> mat2 nx3, la terza il tot
    new mat, input char --> mat3 con char '#'
*/
#include <iostream>
using namespace std;

char mat[10][10]={};
char mat2[10][10]={};
char mat3[10][10]={};
int r, c;

void inputMat(){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << i << " " << j << ": ";
            cin >> mat[i][j];
        }
    }
}

void disp(char mat[10][10], int r=r, int c=c){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

bool Voc(char n){
    return (n=='a' || n=='e' || n=='i' || n=='o' || n=='u')?true:false;
}

void conta(){
    for(int i=0; i<r; i++){
        int voc, cons;
        for(int j=0; j<c; j++){
            if(Voc(mat[i][j])) voc++;
            else cons++;
        }
        mat2[i][0] = voc;
        mat2[i][1] = cons;
        mat2[i][2] = voc+cons;
    }
}

void sostituisci(char car){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            mat3[i][j] = (mat[i][j]!=car)?mat[i][j]:'#';
        }
    }
}

int main(){
    cout << "R: ";
    cin >> r;
    cout << "C: ";
    cin >> c;

    inputMat();
    disp(mat);

    conta();
    disp(mat2, r, 3);

    char carattere;
    cout << "Char: ";
    cin >> carattere;

    sostituisci(carattere);
    disp(mat3);

    system("pause");
    return 0;
}
