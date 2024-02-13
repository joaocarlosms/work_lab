#include <iostream>
#include"matriz.h"

using namespace std;

#define Linha 100
#define Coluna 100

void ProcurarMaiorMenorNumeroLinha(int matriz[100][100]){
    for(int i = 0; i <= Linha-1; i++){
        int MaiorNumeroLinha = matriz[i][0]; // utilizada para pegar os primeiros elementos de cada linha da matriz;
        int MenorNumeroLinha = matriz[i][0];

        for(int j = 1; j < 100; j++){ // o loop interno sera utilizado para percorrer todos os elementos restantes da linha;
            if(matriz[i][j] > MaiorNumeroLinha){
                MaiorNumeroLinha = matriz[i][j];
            }
            if(matriz[i][j] < MenorNumeroLinha){
                MenorNumeroLinha = matriz[i][j];
            }
        }
        cout << "LINHA " << i << "- " << "MAIOR NUMERO: " << MaiorNumeroLinha << "| " << "MENOR NUMERO: " << MenorNumeroLinha << endl;
    }
}

void ProcurarMaiorMenorNumeroColuna(int matriz[100][100]){
    for(int j = 0; j <= Coluna-2; j++){
        int MaiorNumeroColuna = matriz[0][j]; // sera utilizado para pegar os primeiros elementos das colunas da matriz;
        int MenorNumeroColuna = matriz[0][j];

        for(int i = 1; i < 100; i++){
            if(matriz[i][j] > MaiorNumeroColuna){
                MaiorNumeroColuna = matriz[i][j];
            }
            if(matriz[i][j] < MenorNumeroColuna){
                MenorNumeroColuna = matriz[i][j];
            }
        }
        cout << "COLUNA " << j << "- " << "MAIOR NUMERO: " << MaiorNumeroColuna << "| " << "MENOR NUMERO: " << MenorNumeroColuna << endl;
    }
}

int main(){
    ProcurarMaiorMenorNumeroLinha(matriz);
    cout << endl;
    ProcurarMaiorMenorNumeroColuna(matriz);

    return 0;
}