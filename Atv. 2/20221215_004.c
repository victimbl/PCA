#include <stdio.h>
#include <math.h>

int main(){
    float area, raio;
    printf("Digite o raio: ");
    scanf("%f", &raio);
    area = 3.14 * pow(raio,2);
    printf("A area do circulo e: %.2f", area);
}