#include <iostream>
#include"matriz.h"

using namespace std;

#define linha 100
#define coluna 100

int CheckRepetitionNumber(int matriz[100][100], int sum){
    int contadorNum = 0;
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            if(sum == matriz[i][j]){
                contadorNum++;
            }
        }
    }
    return contadorNum;
}

int main(){
    int matriz[100][100];
    int vetC[8] = {19, 5, 22, 5, 18, 9, 14, 15};
    int sum = 0;
    for(int i = 0; i < 8; i++){
        sum += vetC[i];
    }
    int VerifyNumberPresente = CheckRepetitionNumber(matriz, sum);
    cout << "O elemento " << sum << " aparece " << VerifyNumberPresente << " vezes na matriz\n";
    
    return 0;
}