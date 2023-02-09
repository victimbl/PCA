#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[3][3];
    int k, multi;
    
    for(int ln1=0; ln1<3; ln1++){
        for(int cl1=0; cl1<3; cl1++){
            printf("Digite um numero para a matriz: ");
            scanf("%d", &matriz[ln1][cl1]);
        }
    }
    
    printf("Digite um numero escalar: ");
    scanf("%d", &k);
    
    for(int ln2=0; ln2<3; ln2++){
        for(int cl2=0; cl2<3; cl2++){
            multi = matriz[ln2][cl2] * k;
            printf("As multiplicacoes sao: %d\n", multi);
        }
    }
}
