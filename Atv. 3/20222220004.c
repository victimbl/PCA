#include <stdio.h>

int main(){
    int num, n_maior, n_menor, cont;
    printf("Digite um numero: ");
    scanf("%d", &num);
    n_maior = num;
    n_menor = num;
    cont = 20;
    while(cont > 0){
        printf("Digite um numero: ");
        scanf("%i", &num);
        if (num > n_maior)
            n_maior = num;
        if (num < n_menor)
            n_menor = num;
        cont--;
    }
    printf("O maior valor foi: %i \n", n_maior);
    printf("O menor valor foi: %i", n_menor);
}
