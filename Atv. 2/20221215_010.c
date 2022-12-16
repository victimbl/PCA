#include <stdio.h>

int main(){
    float altura, peso_ideal;
    printf("Digite a altura da pessoa: ");
    scanf("%f", &altura);
    peso_ideal = (72.7 * altura) - 58;
    printf("O peso ideal da pessoa e: %.1f", peso_ideal);
}