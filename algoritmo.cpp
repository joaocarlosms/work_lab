#include <iostream>
#include"matriz.h"
using namespace std;

void WriteNameMatriz(char **matrix, int vetZ[]){
    int i = vetZ[0];
    int j = vetZ[3];

    matrix[i][j] = 'j';
    matrix[i][j+2] = 'o'; // preencher apenas posicoes pares (i+j);
    matrix[i][j+4] = 'a';
    matrix[i][j+6] = 'o';
}

void PrintMatrix(char **matrix){
    int i = 10, j = 15;
    for(int k = j; (j+6) >= k; k+=2){
        cout << matrix[i][k] << "   ";
    }
    cout << endl;
}

int CheckRepetitionNumber(int matriz[100][100], int sum){
    int contadorNum = 0;
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            if(sum == matriz[i][j]){
                contadorNum++;
            }
        }
    }
    return contadorNum;
}

void InverterColunaDaMatriz(int matriz[100][100],int lin, int ColunaEscolhida){
    for(int i = 0; i < lin/2; i++){ //o loop percorre a coluna fazendo com que cada elemento da metade superior, troque de posição com cada elemento da metade inferior;
        if(ColunaEscolhida >= 100){
            cout << "ERRO! COLUNA INVALIDA DA MATRIZ" << endl;
            break;
        }
        int aux = matriz[i][ColunaEscolhida];
        matriz[i][ColunaEscolhida] = matriz[lin-1-i][ColunaEscolhida]; // (lin-1-i) é usado para encontrar a posiçao atual do elemento final na coluna;
        matriz[lin-1-i][ColunaEscolhida] = aux;
    }
}

void ProcurarSegundoMaiorNumeroDiagonal(int matriz[100][100], int tamanho){
    int SegundoMaiorNumeroPrincipal = 0, SegundoMaiorNumeroSecundario = 0, PosicaoNumPrincipal = 0, PosicaoNumSecundario = 0;
    for(int i = 0; i < tamanho; i++){
        if(matriz[i][i] > SegundoMaiorNumeroPrincipal){
            SegundoMaiorNumeroPrincipal = matriz[i][i]; //matriz diagonal principal i = j;
            PosicaoNumPrincipal = i;
        }
        if(matriz[i][tamanho-1-i] > SegundoMaiorNumeroSecundario){
            SegundoMaiorNumeroSecundario = matriz[i][tamanho-1-i]; // matriz diagonal secundaria (i+j = n+1); ou (tam-1-i);
            PosicaoNumSecundario = i;
        }   
    }
    cout << "SEGUNDO MAIOR NUMERO DA DIAGONAL PRINCIPAL: posicao " << PosicaoNumPrincipal << " = " << SegundoMaiorNumeroPrincipal << endl;
    cout << "SEGUNDO MAIOR NUMERO DA DIAGONAL SECUNDARIA: posicao " << PosicaoNumSecundario << " = " << SegundoMaiorNumeroSecundario << endl;
}

void ProcurarMaiorMenorNumeroLinha(int matriz[100][100], int lin){
    for(int i = 0; i <= lin-1; i++){
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

void ProcurarMaiorMenorNumeroColuna(int matriz[100][100], int col){
    for(int j = 0; j <= col-2; j++){
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

void ValoresDaMatrizNoVetor(int matriz[100][100], float *vet){
    int k = 0;
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            vet[k] = matriz[i][j];
            k++;
        }
    }
}

void ImprimirMatriz(int matriz[100][100], int lin, int col){
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
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
    int opcao;
    int matriz[100][100];
    
    do{
        cout << "QUESTOES DO TRABALHO: \n";
        cout << "1- QUESTAO 1\n";
        cout << "2- QUESTAO 2\n";
        cout << "3- QUESTAO 3\n";
        cout << "4- QUESTAO 4\n";
        cout << "5- QUESTAO 5\n";
        cout << "6- QUESTAO 6\n";
        cout << "7- QUESTAO 8\n";
        cout << "9- sair\n";
        cin >> opcao;

        switch(opcao){
            case 1:
                cout << "MATRIZ ORIGIAL: " << endl;
                ImprimirMatriz(matriz, 100, 100);
                break;

            case 2:
                ValoresDaMatrizNoVetor(matriz, vetor);
                cout << "VETOR: " << endl;
                ImprimirVetor(vetor, tamanho);
                break;
            
            case 3:
                ProcurarMaiorMenorNumeroLinha(matriz, 100);
                cout << endl;
                ProcurarMaiorMenorNumeroColuna(matriz, 100);
                break;

            case 4:
                ProcurarSegundoMaiorNumeroDiagonal(matriz, 100);
                break;
            
            case 5:
                int ColunaEscolhidaParaInverter;
                cout << "Informe a coluna que se deseja inverter os elementos da matriz: ";
                cin >> ColunaEscolhidaParaInverter;
                InverterColunaDaMatriz(matriz, 100, ColunaEscolhidaParaInverter);
                cout << "MATRIZ COM A COLUNA INVERTIDA: " << ColunaEscolhidaParaInverter << endl;
                ImprimirMatriz(matriz, 100, 100);
            
            case 6:
                int line = 100, column = 100;
                int vetZ[4] = {10, 15, 1, 15}; // 0 ate 3;
                char **headquarters = new char*[line];
                for(int i = 0; i < line; i++){
                    headquarters[i] = new char[column];
                }
                WriteNameMatriz(headquarters, vetZ);
                PrintMatrix(headquarters);

                delete[] headquarters;
                break;

            case 7:
                int vetC[8] = {19, 5, 22, 5, 18, 9, 14, 15};
                int sum = 0;
                for(int i = 0; i < 8; i++){
                    sum += vetC[i];
                }
                int VerifyNumberPresente = CheckRepetitionNumber(matriz, sum);
                cout << "Esse numero aparece " << VerifyNumberPresente << " vezes na matriz\n";
                break;
        }
    }while(opcao != 9);
    
    return 0;
}