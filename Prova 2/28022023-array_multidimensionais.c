#include <stdio.h>
#include <string.h>

int acrescentar(int notas[2][6], int eqp){
    int i, j;
    if(eqp == 1){
        for(i=0; i<2; i++){
            for(j=0; j<6; j++){
                if(i==0){
                    if(notas[i][j] <= 9)
                        notas[i][j] = notas[i][j] + 1;
                }
            }
        }
    }
    if(eqp == 2){
        for(i=0; i<2; i++){
            for(j=0; j<6; j++){
                if(i==1){
                    if(notas[i][j] <= 9)
                        notas[i][j] = notas[i][j] + 1;
                }
            }
        }
    }
    printf("\nAs novas notas sao: \n");
    for(i=0; i<2; i++){
            for(j=0; j<6; j++){
                printf("%d ", notas[i][j]);
            }
        }
}

char novo_aluno(char nomes[2][6], char sexo[2][6], int notas[2][6], int eqp){
    char aluno[81], sx;
    int i, j, nt;
    printf("Digite qual o nome do novo aluno: ");
    scanf("%s", &aluno);
    printf("Digite qual o sexo do novo aluno: ");
    scanf("%c", &sx);
    printf("Digite qual a nota do novo aluno: ");
    scanf("%d", &nt);
    if(eqp == 1){
        strcat(nomes, aluno);
        strcat(sexo, sx);
        strcat(notas, nt);
    }
    if(eqp == 2){
        strcat(nomes, aluno);
        strcat(sexo, sx);
        strcat(notas, nt);
    }
}

int main(){
    //Criar as estruturas e atribuir os valores
    char nomes[2][6][81] = {"Joao", "Laura", "Amanda", "Mateus", "Lucas", "Rodrigo", "Jose", "Sofia", "Ana", "Clara", "Julia", "Gabriel"};
    char sexo[2][6] = {'M', 'F', 'F', 'M', 'M', 'M', 'M', 'F', 'F', 'F', 'F', 'M'};
    int notas[2][6] = {8, 7, 8, 9, 7, 10, 9, 8, 10, 7, 10, 9};
    //Determinar e imprimir qual equipe tem mais mulheres
    int i, j, k, cont1=0, cont2=0;
    for(i=0; i<2; i++){
        for(j=0; j<6; j++){
            if(sexo[0][j]=='F')
                cont1++;
            if(sexo[1][j]=='F')
                cont2++;
        }
    }
    if(cont1 > cont2)
        printf("A equipe 1 tem mais mulheres\n");
    else
        printf("A equipe 2 tem mais mulheres\n");
    //Definir e imprimir os nomes das alunas aptas para o projeto
    char projeto[12][81];
    printf("As alunas aptas sao: \n");
    for(i=0; i<2; i++){
        for(j=0; j<6; j++){
            if(notas[i][j]>=8 && sexo[i][j] == 'F'){
                strcat(projeto[i], nomes[i][j]);
                printf("%s ", nomes[i][j]);
            }
        }
    }
    acrescentar(notas, 2);
}