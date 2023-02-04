#include <stdio.h>
#include <string.h>
#define M 81

char guardar(char eqp[M]){
    int numeqp=5, intreg=4, eqp=1;
    char nomes[M], eqps[M];
    for(int i=0; i<numeqp; i++){
        printf("Equipe %d\n", eqp);
        eqp++;
        for(int j=0; j < intreg; j++){
            printf("Insira o nome do aluno: ");
            scanf("%s", &nomes[j]);
        }
    }
}

int main(){
    
}