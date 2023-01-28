#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(){
    int linha = 3, coluna = 5, k, produto;
    int m1[MAX][MAX]={{1,1,1,1,1},{2,2,2,2,2},{3,3,3,3,3}};
    printf("Digite um numero escalar qualquer: ");
    scanf("%d", k);
    
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            produto = k * m1[i][j];
            printf ("resultado[%d][%d] = %d\n", i, j, produto);
        }
    }
}