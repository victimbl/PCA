#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define m 81

char titular(int n, char posicao[m][m], char val[m]){
    int i, tam, formacao[n];
    tam = sizeof(val)/sizeof(int);
        for(i=0; i<tam; i++){
            
    }
    return
}

int main() {
    char golei[3][m]= {"goleiro_1", "goleiro_2", "goleiro_3"};
    char zag[7][m] = {"zag1", "zag2", "zag3", "zag4", "zag5", "zag6", "zag7"};
    char m_camp[8][m] = {"mcamp1", "mcamp2", "mcamp3", "mcamp4", "mcamp5", "mcamp6", "mcamp7", "mcamp8"};
    char atac[5][m] = {"atc1", "atc2", "atc3", "atc4", "atc5"};
    int vlgl[3] = {6, 8, 1};
    int vlza[7] = {10, 5, 8, 4, 9, 7, 6};
    int vlmc[8] = {5, 7, 9, 3, 10, 1, 2, 4};
    int vlat[5] = {10, 9, 7, 1, 8};
    int tam, i, j, k, valor=0;
    tam = sizeof(vlgl)/sizeof(int);
    for(i=0; i<tam; i++){
        if(vlgl[i]>valor){
            valor = vlgl[i];
            printf("%d\n",valor);
            printf("%s\n", golei[i]);
        }
    }
}
