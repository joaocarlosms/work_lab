#include <iostream>
#include"matriz.h"

using namespace std;

#define linha 100
#define coluna 100

void ProcurarSegundoMaiorNumeroDiagonal(int matriz[100][100]){
    int SegundoMaiorNumeroPrincipal = 0, PosicaoNumPrincipal = 0;
    for(int i = 0; i < linha; i++){
        if(matriz[i][i] > SegundoMaiorNumeroPrincipal){
            SegundoMaiorNumeroPrincipal = matriz[i][i]; //matriz diagonal principal i = j;
            PosicaoNumPrincipal = i;
        }
        if(matriz[i][coluna-1-i] > SegundoMaiorNumeroPrincipal){
            SegundoMaiorNumeroPrincipal  = matriz[i][coluna-1-i]; // matriz diagonal secundaria (i+j = n+1); ou (tam-1-i);
            PosicaoNumPrincipal = i;
        }   
    }
    cout << "SEGUNDO MAIOR NUMERO DA DIAGONAL PRINCIPAL: posicao " << PosicaoNumPrincipal << " = " << SegundoMaiorNumeroPrincipal << endl;
}

int main(){
    ProcurarSegundoMaiorNumeroDiagonal(matriz);

    return 0;
}