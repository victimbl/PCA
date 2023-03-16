#include <stdio.h>
#include <math.h>

void mddv(float *notas, int n, float *md, float *dp){
    int i;
    *md = 0.0;
    *dp = 0.0;
    for(i=0; i<n; i++){
        *md = *md + notas[i];
    }
    *md = *md/n;
    for(i=0; i<n; i++){
        *dp = *dp + pow(notas[i] - *md, 2);
    }
    *dp = sqrt(*dp/(n-1));
}

int main(){
    int alun, i;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &alun);
    float notas[alun];
    float media, desvio;
    for(i=0; i<alun; i++){
        printf("Digite as notas: ");
        scanf("%f", &notas[i]);
    }
    mddv(notas, alun, &media, &desvio);
    printf("\nA media das notas e: %.2f", media);
    printf("\nO desvio padrao das notas e: %.2f", desvio);
}