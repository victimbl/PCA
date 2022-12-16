#include <stdio.h>

int main() {
    float conta, porcentagem, parte_garcom;
    printf("Digite quanto deu a conta: ");
    scanf("%f", &conta);
    printf("Digite a porcentagem do garcom: ");
    scanf("%f", &porcentagem);
    parte_garcom = conta * (porcentagem/100);
    printf("A parte do garcom e: %.2f", parte_garcom);
}