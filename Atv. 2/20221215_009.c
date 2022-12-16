#include <stdio.h>
#include <math.h>

int main(){
    int a, b, produto;
    float c, soma, cubo;
    printf("Primeiro: ");
    scanf("%d", &a);
    printf("Segundo: ");
    scanf("%d", &b);
    printf("Terceiro: ");
    scanf("%f", &c);
    produto = (a*2) * (b/2);
    soma = (a*3) + c;
    cubo = pow(c,3);
    printf("Produto: %d \n", produto);
    printf("Soma: %.2f \n", soma);
    printf("Cubo: %.2f \n", cubo);
}