#include <stdio.h>

int main(){
    int metro, cent;
    printf("Digite quantos metros: ");
    scanf("%d", &metro);
    cent = metro * 100;
    printf("%d metros sao %d centimetros", metro, cent);
}