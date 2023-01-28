#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(){
    int linha = 3, coluna = 5, k;
    int m1[MAX][MAX]={{1,1,1,1,1},{2,2,2,2,2},{3,3,3,3,3}};
    int m2[MAX][MAX]={{5,5,5,5,5},{4,4,4,4,4},{3,3,3,3,3}};
    
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            printf ("resultado[%d][%d] = %d\n", i, j, m1[i][j] + m2[i][j]);
        }
    }
}