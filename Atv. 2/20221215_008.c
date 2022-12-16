#include <stdio.h>

int main(){
    float graus_fah, graus_cel;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &graus_cel);
    graus_fah = (graus_cel * 1.8) + 32;
    printf("%.2f graus Celsius sao %.2f graus Fahrenheit", graus_cel, graus_fah);
}