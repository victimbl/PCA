#include <stdio.h>
#include <math.h>

int numero(){
    int k;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &k);
    return k;
}

int hiperfatorial(){
    int x, y, z, n;
    x = numero();
    y = 0, n = 1;
    for(y; y < x; y++){
        z = pow(y,y);
        n = n * z;
        y++;
    }
    return n;
}

int imprimir(){
    int x, y;
    x = numero(), y = hiperfatorial();
    printf("O hiperfatorial de %d e %d", x,y);
}

int main(){
    int funcao;
    funcao = imprimir();
    printf(funcao);
}