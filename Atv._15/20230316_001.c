#include <stdio.h>
#include <stdlib.h>

int ler_vetor(int n, int vet[], int *v){
    int i;
    for(i=0; i<n; i++){
        printf("Digite os elementos do vetor: ");
        scanf("%d", &vet[i]);
    }
    v = (int*) malloc(vet[n]*sizeof(int));
}

int maior_menor(int n, int *vet, int *m, int *mn){
    int i;
    *m = vet[0];
    *mn = vet[0];
    for(i=1; i<n; i++){
        if(vet[i] > *m)
            *m = vet[i];
        if(vet[i] < *mn)
            *mn = vet[i];
    }
}

int main() {
    int n, maior, menor, *v;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vetor[n];
    ler_vetor(n, vetor, &v);
    maior_menor(n, vetor, &maior, &menor);
    printf("O maior numero eh: %d\n", maior);
    printf("O menor numero eh: %d\n", menor);
    free(v);
}