#include <stdio.h>

int main(){
    int x, y, maior, menor, dif;
    float porc;
    printf("Digite um numero para x: ");
    scanf("%d", &x);
    printf("Digite um numero para y: ");
    scanf("%d", &y);
    if(x>0 && x<1000 && y>0 && y<1000){
        if(x>y){
            maior = x;
            menor = y;
        }
        if(y>x){
            maior = y;
            menor = x;
        }
        porc = (menor*100) / maior;
        dif = maior - menor;
        printf("O percentual do menor em relação ao maior e: %.1f\n", porc);
        printf("A diferença e: %d", dif);
    }
}