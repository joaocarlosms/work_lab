#include <iostream>
#include"matriz.h"

using namespace std;

#define Linha 100
#define Coluna 100

void ImprimirMatriz(int matriz[100][100]){
    for(int i = 0; i < Linha; i++){
        for(int j = 0; j < Coluna; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

int main(){
    ImprimirMatriz(matriz);
    
    return 0;
}