#include <stdio.h>

int main(){
    int num, n_maior, n_menor, cont, neg;
    printf("Digite um numero entre 1 e 1000: ");
    scanf("%i", &num);
    n_maior = 0;
    n_menor = 1000;
    cont = 20;
    if (num > 0){
        while(cont > 0){
            printf("Digite um numero entre 1 e 1000: ");
            scanf("%i", &num);
            if (num > n_maior)
                n_maior = num;
            if (num < n_menor)
                n_menor = num;
            if (num < 0){
                printf("Caso invalido \n");
                break;
            }
            cont--;
        }
        printf("O maior valor foi: %i \n", n_maior);
        printf("O menor valor foi: %i", n_menor);
    }
    else printf("Caso invalido");
}