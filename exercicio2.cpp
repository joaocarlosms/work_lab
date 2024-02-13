#include <iostream>
#include"matriz.h"

using namespace std;

#define Linha 100
#define Coluna 100

void ValoresDaMatrizNoVetor(int matriz[100][100], float *vet){
    int k = 0;
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            vet[k] = matriz[i][j];
            k++;
        }
    }
}

void ImprimirVetor(float *vet, int tam){
    for(int i = 0; i <= tam-1; i++){
        cout << vet[i] << " ";
    }
    cout << endl;
}

int main(){
    int tamanho = 10000;
    float *vetor = new float[tamanho];
    ValoresDaMatrizNoVetor(matriz, vetor);
    ImprimirVetor(vetor, tamanho);

    return 0;
}