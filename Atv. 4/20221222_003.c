#include <stdio.h>

int main(){
    int repete=1, n, pares=0, impares=0;
    while(repete){
        printf("Insira um numero: ");
        scanf("%d", &n);
        if(n<=0){
            printf("So pode ser numeros positivos\n");
            repete = 0;
        }
        if(n>1000){
            printf("So pode numeros menores que 1000\n");
            repete = 0;
        }
        else{
            if(n % 2 == 0){
                pares += n;
            }
            else{
                impares += n;
            }
        }
    }
    printf("A soma dos pares e: %d\n", pares);
    printf("A soma dos impares e: %d", impares);
}
