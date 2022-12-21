#include <stdio.h>

int main(){
    int num, n_maior, n_menor, cont, neg;
    n_maior = 0;
    n_menor = 1000;
    cont = 5;
    while(cont > 0){
        printf("Digite um numero entre 1 e 1000: ");
        scanf("%i", &num);
        if (num > n_maior)
            n_maior = num;
        if (num < n_menor)
            n_menor = num;
        if (num < 0 || num > 1000)
            printf("Caso invalido \n");
            break;
    cont--;
    }
    printf("O maior valor foi: %i \n", n_maior);
    printf("O menor valor foi: %i", n_menor);
}