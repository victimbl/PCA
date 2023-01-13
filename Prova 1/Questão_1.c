#include <stdio.h>

int main(){
    int alunos = 0, repete = 1; 
    float nota, maiorn = 0.0, menorn = 10.0, pmedia = 0.0, media;
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