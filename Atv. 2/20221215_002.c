#include <stdio.h>

int main(void){
    int nota1, nota2, nota3, nota4, media;
    printf("Digite a primeira nota: ");
    scanf("%i", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%i", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%i", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%i", &nota4);
    media = (nota1 + nota2 + nota3 + nota4)/4;
    printf("A media das notas e: %i", media);
}