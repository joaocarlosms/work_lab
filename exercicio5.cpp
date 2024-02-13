#include <iostream>
#include"matriz.h"

using namespace std;
#define linha 100
#define coluna 100

void InverterColunaDaMatriz(int matriz[100][100], int ColunaEscolhida){
    for(int i = 0; i < linha/2; i++){ //o loop percorre a coluna fazendo com que cada elemento da metade superior, troque de posição com cada elemento da metade inferior;
        if(ColunaEscolhida < 0 || ColunaEscolhida > 100){
            cout << "ERRO! COLUNA INVALIDA DA MATRIZ" << endl;
            break;
        }
        int aux = matriz[i][ColunaEscolhida];
        matriz[i][ColunaEscolhida] = matriz[linha-1-i][ColunaEscolhida]; // (lin-1-i) é usado para encontrar a posiçao atual do elemento final na coluna;
        matriz[linha-1-i][ColunaEscolhida] = aux;

        cout << matriz[linha-1-i][ColunaEscolhida] << "     \n";    
    }
    cout << endl;
}

int main(){
    int ColunaEscolhidaParaInverter;
    cout << "Informe a coluna que se deseja inverter os elementos da matriz: ";
    cin >> ColunaEscolhidaParaInverter;
    InverterColunaDaMatriz(matriz, ColunaEscolhidaParaInverter);
    cout << "MATRIZ COM A COLUNA INVERTIDA: " << ColunaEscolhidaParaInverter << endl;

    return 0;
}