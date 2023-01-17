#include <stdio.h>
#include <stdlib.h>

int main(){
    int alunos = 1, repete = 1;
    float nota, maiorn, menorn, pmedia, media;
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);
    maiorn = nota;
    menorn = nota;
    pmedia = nota;
    while(repete){
        printf("Digite a nota do aluno: ");
        scanf("%f", &nota);
        if(nota >= 0){
            alunos++;
            pmedia += nota;
            if(nota > maiorn)
                maiorn = nota;
            if(nota < menorn)
                menorn = nota;
        }if(nota < 0)
            repete = 0;
    }media = pmedia / alunos;
    printf("A maior nota e: %.1f \n", maiorn);
    printf("A menor nota e: %.1f \n", menorn);
    printf("A media da turma e: %.1f", media);
}
