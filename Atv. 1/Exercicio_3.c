#include <stdio.h>

int main() {
    float salario, ajuste;
    printf("Digite o salario: ");
    scanf("%f", &salario);
    ajuste = salario + (salario*0.1);
    printf("O novo salario e: %.2f", ajuste);
}