#include <stdio.h>
#define M 100

void imprimirpares(){
    int seq[M], n;
    printf("Digite a quantida de de numeros: ");
    scanf("%d", &n);
    if(n > 100){
        printf("O numero digitado tem que ser menor que 100");
    }
    else{
        for(int j=0; j<n; j++){
            printf("Digite o numero: ");
            scanf("%d", seq[j]);
        }
        printf("Os numeros pares sao: ");
        for(int i=0; i<n; i++){
            if(seq[i/2] = 0){
                printf("%d", seq[i]);
            }
        }
    }
}

int main(){
    imprimirpares();
}
