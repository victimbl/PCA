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
        if(palavra[i]!='a' && palavra[i]!='e' && palavra[i]!='i' && palavra[i]!='o' && palavra[i]!='u' 
            && palavra[i]!='A' && palavra[i]!='E' && palavra[i]!='I' && palavra[i]!='O' && palavra[i]!='U'){
            svogal[j] = palavra[i];
        }
        else{
            svogal[j] = 32;
        }
        j++;
    }
    printf("A palavra sem vogais e: %s\n", svogal);
}

void maiusculas(char palavra[max]){
    char maisc[max];
    int i;
    for(i=0; palavra[i]!='\0'; i++){
        if(palavra[i]>=97 && palavra[i]<=122){
            maisc[i] = palavra[i] - 32;
        }
        else{
            maisc[i] = palavra[i];
        }
    }
    printf("A palavra so com maiusculas e: %s\n", maisc);
}

int caract(char palavra[max], char crt){
    int n=0;
    for(int i=0; palavra[i]!='\0'; i++){
        if(crt == palavra[i]){
            n++;
        }
    }
    printf("O caracter aparece %d vezes na string.\n", n);
    
    return n;
}

void apgcaract(char palavra[max], char crt){
    for(int i=0; palavra[i]!='\0'; i++){
        if(crt == palavra[i]){
            palavra[i] = 32;
        }
    }
    printf("A palavra sem o caractere %c e: %s", crt, palavra);
}

int main(){
    char palavra[max], crt;
    printf("Digite a palavra que sera usada: ");
    gets(palavra);
    printf("Agora digite um caractere: ");
    scanf("%c", &crt);
    inverter(palavra);
    semvogal(palavra);
    maiusculas(palavra);
    caract(palavra, crt);
    apgcaract(palavra, crt);
}
