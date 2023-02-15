#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n, al, i, f1=0, f2=0, f3=0, f4=0, f5=0, f6=0;
    printf("Diga quantas vezes o dado foi lancado: ");
    scanf("%d0", &n);
    for(i=0; i<n; i++){
        al = 1 + rand() % 6;
        switch(al){
            case 1: f1++; 
            break;
            case 2: f2++; 
            break;
            case 3: f3++; 
            break;
            case 4: f4++; 
            break;
            case 5: f5++;
            break;
            case 6: f6++; 
            break;
        }
    }
    printf("\nA face 1 aparece %d vezes", f1);
    printf("\nA face 2 aparece %d vezes", f2);
    printf("\nA face 3 aparece %d vezes", f3);
    printf("\nA face 4 aparece %d vezes", f4);
    printf("\nA face 5 aparece %d vezes", f5);
    printf("\nA face 6 aparece %d vezes", f6);
}
