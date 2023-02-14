#include <stdio.h>
#define max 1000

int main(){
    int v, maior=0, menor=max;
    for(int i=0; i<5; i++){
        printf("Digite um valor: ");
        scanf("%d", &v);
        if(v > max){
            printf("O numero inserido deve ser menor que 1000");
            menor = 0;
            break;
        }
        else{
            if(v > maior){
                maior = v;
            }
            if(v < menor){
                menor = v;
            }
        }
    }
    printf("\nO maior numero e: %d", maior);
    printf("\nO menor numero e: %d", menor);
}
