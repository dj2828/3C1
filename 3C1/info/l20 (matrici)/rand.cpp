#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int* random(int quanti){
    int cosa[quanti];
    srand(time(NULL));
    for(int i=0; i<quanti; i++){
        cosa[i] = rand()%100;
    }
    return cosa;
}
