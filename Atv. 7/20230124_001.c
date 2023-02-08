#include <stdio.h>
#define M 100

int main(){
    int seq[M], qtde;
    printf("Digite  a quantidade de numeros: ");
    scanf("%d", &qtde);
    if(qtde > 100){
        printf("O numero digitado tem que ser menor que 100");
    }
    else{
        for(int i=0; i<qtde; i++){
            printf("Digite o numero: ");
            scanf("%d", &seq[i]);
        }
        printf("A sequencia inversa e: ");
        for(int j=qtde-1; j>=0; j--){
            printf("%d", seq[j]);
        }
    }
}
