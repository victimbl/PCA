#include <stdio.h>

int main(){
    int i, num, soma;
    for(i=1; i<=5; i++){
        printf("Digite um numero: ");
        scanf("%i", &num);
        soma += num;
    }
    printf("A soma dos numeros e: %i", soma);
}