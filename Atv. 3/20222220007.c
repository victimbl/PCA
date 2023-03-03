#include <stdio.h>

int main(){
    float notas, exerc1, exerc2, exerc3, maior1, maior2, maior3, menor1, menor2, menor3, media1, media2, media3;
    int alun, cont;
    printf("Digite quantos alunos tem na turma: ");
    scanf("%d", &alun);
    //Exercicio 1
    printf("Digite as notas do exercicio 1: \n");
    scanf("%f", &exerc1);
    maior1 = exerc1;
    menor1 = exerc1;
    cont = 1; notas = exerc1;
    while(cont<alun){
        printf("");
        scanf("%f", &exerc1);
        if (exerc1 > maior1)
            maior1 = exerc1;
        if (exerc1 < menor1)
            menor1 = exerc1;
        notas = notas + exerc1;
        cont++;
    }
    media1 = notas/alun;
    printf("A maior nota do exercicio 1: %.1f\n", maior1);
    printf("A menor nota do exercicio 1: %.1f\n", menor1);
    printf("A media do exercicio 1: %.1f\n", media1);
    //Exercicio 2
    printf("Digite as notas do exercicio 2: \n");
    scanf("%f", &exerc2);
    maior2 = exerc2;
    menor2 = exerc2;
    cont = 1; notas = exerc2;
    while(cont<alun){
        printf("");
        scanf("%f", &exerc2);
        if (exerc2 > maior2)
            maior2 = exerc2;
        if (exerc2 < menor2)
            menor2 = exerc2;
        notas = notas + exerc2;
        cont++;
    }
    media2 = notas / alun;
    printf("A maior nota do exercicio 2: %.1f\n", maior2);
    printf("A menor nota do exercicio 2: %.1f\n", menor2);
    printf("A media do exercicio 2: %.1f\n", media2);
    //Exercicio 3
    printf("Digite as notas do exercicio 3: \n");
    scanf("%f", &exerc3);
    maior3 = exerc3;
    menor3 = exerc3;
    cont = 1; notas = exerc3;
    while(cont<alun){
        printf("");
        scanf("%f", &exerc3);
        if (exerc3 > maior3)
            maior3 = exerc3;
        if (exerc3 < menor3)
            menor3 = exerc3;
        notas = notas + exerc3;
        cont++;
    }
    media3 = notas / alun;
    printf("A maior nota do exercicio 3: %.1f\n", maior3);
    printf("A menor nota do exercicio 3: %.1f\n", menor3);
    printf("A media do exercicio 3: %.1f\n", media3);
    //Maior e Menor media
    float maiormed, menormed;
    if(media1 > media2 && media1 > media3)
        maiormed = media1;
    if(media2 > media1 && media2 > media3)
        maiormed = media2;
    if(media3 > media1 && media3 > media2)
        maiormed = media3;
    if(media1 < media2 && media1 < media3)
        menormed = media1;
    if(media2 < media1 && media2 < media3)
        menormed = media2;
    if(media3 < media1 && media3 < media2)
        menormed = media3;
    printf("A maior media final: %.1f\n", maiormed);
    printf("A menor media final: %.1f\n", menormed);
}
