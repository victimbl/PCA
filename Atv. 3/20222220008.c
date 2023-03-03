#include <stdio.h>

int main(){
    float nota1, nota2, nota3, maior1, maior2, maior3, menor1, menor2, menor3;
    float pmedia1=0, pmedia2=0, pmedia3=0, media1, media2, media3;
    int alun, cont=1;
    int resp;
    printf("Digite quantos alunos sao: ");
    scanf("%d", &alun);
    printf("Digite as tres notas de um aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    maior1 = nota1; menor1 = nota1;
    maior2 = nota2; menor2 = nota2;
    maior3 = nota3; menor3 = nota3;
    while(cont < alun){
        printf("Digite as tres notas de um aluno: ");
        scanf("%f %f %f", &nota1, &nota2, &nota3);
        cont++;
        if(nota1 > maior1)
            maior1 = nota1;
        if(nota1 < menor1)
            menor1 = nota1;
        if(nota2 > maior2)
            maior2 = nota2;
        if(nota2 < menor2)
            menor2 = nota2;
        if(nota3 > maior3)
            maior3 = nota3;
        if(nota3 < menor3)
            menor3 = nota3;
        pmedia1 = pmedia1 + nota1;
        pmedia2 = pmedia2 + nota2;
        pmedia3 = pmedia3 + nota3;
    }
    printf("Quer inserir mais um aluno: ");
    scanf("%s", &resp);
    if(resp == 'S'){
        printf("Digite as tres notas de um aluno: ");
        scanf("%f %f %f", &nota1, &nota2, &nota3);
        if(nota1 > maior1)
            maior1 = nota1;
        if(nota1 < menor1)
            menor1 = nota1;
        if(nota2 > maior2)
            maior2 = nota2;
        if(nota2 < menor2)
            menor2 = nota2;
        if(nota3 > maior3)
            maior3 = nota3;
        if(nota3 < menor3)
            menor3 = nota3;
        pmedia1 = pmedia1 + nota1;
        pmedia2 = pmedia2 + nota2;
        pmedia3 = pmedia3 + nota3;
        media1 = pmedia1 / alun;
        media2 = pmedia2 / alun;
        media3 = pmedia3 / alun;
    }
    if(resp == 'N'){
        printf("A maior nota do primeiro exercicio: %.1f\n", maior1);
        printf("A maior nota do segundo exercicio: %.1f\n", maior2);
        printf("A maior nota do terceiro exercicio: %.1f\n", maior3);
        printf("A menor nota do primeiro exercicio: %.1f\n", menor1);
        printf("A menor nota do segundo exercicio: %.1f\n", menor2);
        printf("A menor nota do terceiro exercicio: %.1f\n", menor3);
        printf("A media do primeiro: %.1f", media1);
        printf("A media do segundo: %.1f", media2);
        printf("A media do terceiro: %.1f", media3);
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
}
