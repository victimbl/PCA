#include <stdio.h>
#include <string.h>
#define max 100

void carros(){
    char modelo[max], consumo[max], model_eco;
    float cons_eco=max;
    int i, j;
    for(i=0; i<5; i++){
        printf("Digite um modelo de carro: ");
        scanf("%s", &modelo[i]);
        for(j=0; j<1; j++){
            printf("\nE quantos kms faz por litro: ");
            scanf("%s", consumo[j]);
            if(consumo[j] < cons_eco){
                model_eco = modelo[i];
                cons_eco = consumo[j];
            }
            
        }
    }
    printf("O %s e o modelo mais economico fazendo %.1f kms com 1L", model_eco, cons_eco);
}

int main(){
    carros();
}
