#include <stdio.h>

int main(){
    int i, num, soma;
    for(i=1; i<=50; i++){
        printf("Digite um numero: ");
        scanf("%i", &num);
        if (num % 2 != 0){
            soma += num;
        }
    }
    printf("A soma dos impares e: %i", soma);
}