#include <stdio.h>

int contando(int n, int d){
    int cont=0;
    while (n > 0){
        if ((n%10)==d)
            cont++;
        n=n/10;
    }
    printf("%d", cont);
    return cont;
}
int main(){
    contando(15, 5);
}