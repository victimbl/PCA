#include <stdio.h>
#include <math.h>

int main(void){
    int area, lado, dobro_area;
    printf("Digite um lado do quadrado: ");
    scanf("%d", &lado);
    area = pow(lado,2);
    dobro_area = area * 2;
    printf("O dobro da area do quadrado e: %d", dobro_area);
}