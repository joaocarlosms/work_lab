#include <iostream>
#include"matriz.h"

using namespace std;

#define linha 100
#define coluna 100

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

int main(){
    int vetZ[4] = {10, 15, 1, 15}; // 0 ate 3;
    char **headquarters = new char*[linha];
    for(int i = 0; i < linha; i++){
        headquarters[i] = new char[coluna];
    }
    WriteNameMatriz(headquarters, vetZ);
    PrintMatrix(headquarters);

    delete[] headquarters;

    return 0;
}