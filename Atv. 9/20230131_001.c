#include <stdio.h>
#include <string.h>
#define max 81

void inverter(char palavra[max]){
    char cpy[max];
    int tam = strlen(palavra) - 1;
    int i;
    for(i=0; palavra[i]!='\0'; i++){
        cpy[tam] = palavra[i];
        tam--;
    }
    cpy[i] = '\0';
    printf("A palavra invertida e: %s\n", cpy);
}

void semvogal(char palavra[max]){
    char svogal[max];
    int i, j=0, tam = strlen(palavra);
    for(i=0; palavra[i]!='\0'; i++){
        if(palavra[i]!='a' && palavra[i]!='e' && palavra[i]!='i' && palavra[i]!='o' && palavra[i]!='u' && 
           palavra[i]!='A' && palavra[i]!='E' && palavra[i]!='I' && palavra[i]!='O' && palavra[i]!='U'){
            svogal[j] = palavra[i];
            j++;
        }
    }
    printf("A palavra sem vogais e: %s\n", svogal);
}

int main(){
    char palavra[max];
    printf("Digite a palavra que sera usada: ");
    gets(palavra);
    inverter(palavra);
    semvogal(palavra);
}
