#include <iostream>
using namespace std;

int main(){
    int A[5]={5,4,3,2,1};
    int l=5;

    for(int j=0;j<l;j++)
        cout << A[j] << " ";
    cout<<endl;

    //inizio sort
    for(int i=0;i<(l-1);i++){
        for(int j=0;j<(l-1-i);j++){
            if(A[j+1]<A[j]){
                int temp=A[j+1];
                A[j+1]=A[j];
                A[j]=temp; 
            }
        }
    }
    //fine sort

    for(int j=0;j<l;j++)
        cout << A[j] << " ";
    cout<<endl;

    system ("pause");
    return 0;
}