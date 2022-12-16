#include <stdio.h>

int main(){
    float ganha_hora, hora_mes, salario;
    printf("Digite quanto voce ganha por hora: ");
    scanf("%f", &ganha_hora);
    printf("Digite quantas horas voce trabalhou no mes: ");
    scanf("%f", &hora_mes);
    salario = ganha_hora * hora_mes;
    printf("Seu salario no mes e: %.2f", salario);

}