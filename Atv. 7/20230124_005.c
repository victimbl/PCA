#include <stdio.h>
#define M 100

void imprimirfat(){
    int seq[M], n, fat;
    int fat = 1;
    printf("Digite a quantida de de numeros: ");
    scanf("%d", &n);
    if(n > 100){
        printf("O numero digitado tem que ser menor que 100");
    }
    else{
        for(int i=0; i<n; i++){
            printf("Digite o numero: ");
            scanf("%d", &seq[i]);
        }
        for(int j=0; i<n; i++){
            for(int k=n; k>0; k--){
                
            }
        }
    }
}

int main(){
    imprimirfat();
}
