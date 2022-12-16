#include <stdio.h>

int main(){
    float graus_fah, graus_cel;
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &graus_fah);
    graus_cel = (5 * (graus_fah - 32) / 9);
    printf("%.2f graus Fahrenheit sao %.2f graus celsius", graus_fah, graus_cel);
}