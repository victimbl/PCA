#include <stdio.h>
#include <string.h>

int main() {
    char s1[20] = {"string1"}, s2[20] = {"string1"};
    int tam = strlen(s1);
    int tam2 = strlen(s2);
    printf("O tamanho da string e: %d\n", tam);
    int comp = strcmp(s1, s2);
    printf("O resultado da comparacao e: %d\n", comp);
    strcat(s1, " sendo concatenada");
    printf("A string concatenada e: %s\n", s1);
    printf("A string inversa:");
    for(int i=tam2; i>0; i--){
        printf("%c", s2[i]);
    }
}
