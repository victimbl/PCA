#include <stdio.h>

int main (){
    float ganha_hora, hora_mes, salario_bruto, imp_renda, inss, sindicato, salario_liquido;
    printf("Digite quanto voce ganha por hora: ");
    scanf("%f", &ganha_hora);
    printf("Digite quantas horas voce trabalhou no mes: ");
    scanf("%f", &hora_mes);
    salario_bruto = ganha_hora * hora_mes;
    imp_renda = salario_bruto * 0.11;
    inss = salario_bruto * 0.08;
    sindicato = salario_bruto * 0.05;
    salario_liquido = salario_bruto - imp_renda - inss - sindicato;
    printf("O salario bruto e: %.2f \n", salario_bruto);
    printf("Pagou %.2f ao INSS \n", inss);
    printf("Pagou %.2f ao sindicato \n", sindicato);
    printf("O salario liquido e: %.2f \n", salario_liquido);
}