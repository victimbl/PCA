#include <stdio.h>
#include <string.h>

void inversa(char p[]){
    int copia, fim, tam;
    tam = strlen(p);
    fim = tam - 1;
    for(int i=0; i<(tam/2); i++){
        copia = p[i];
        p[i] = p[fim];
        p[fim] = copia;
        fim--;
    }
}

int main(){
    char palavra[] = "Tamanho";
    inversa(palavra);
    printf("%s", palavra);
}