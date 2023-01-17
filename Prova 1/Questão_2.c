#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int numero(){
    int num;
    while(num <= 0){
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", num);
    }
    return num;
}

int hiperfatorial(int num){
    int  hpft= 1;
    for(int i = 1,i <= num, i++){
        hpft *= pow(i,i);
    }
    return hpft;
}

void saida(){
    int x, y;
    x = numero();
    y = hiperfatorial(num);
    printf("O hiperfatorial de %d e: %d", x, y);
    return y;
}
