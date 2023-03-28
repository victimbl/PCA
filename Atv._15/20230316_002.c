#include <stdio.h>
#include <stdlib.h>

void aloc_matriz(){
    int **a;
    int i,j;

    a = (int **) malloc(2 * sizeof (int *));

    for (i=0; i<2; i++)
        *(a+i)= (int *) malloc (3 * sizeof (int));

    for (i=0; i<2; i++)
        for (j=0; j<3; j++){
            printf("\n Valor para %d,%d ",i,j);
            scanf ("%d",(*(a+i)+j));
    }

    for (i=0; i<2; i++)
        for (j=0; j<3; j++){
            printf("\n %d",a[i][j]);
            printf("     %d",*(*(a+i)+j));
    }

    for (i=0; i<2; i++)
        free(*(a+i));

    free(a);
}

int main(){
    aloc_matriz();
}
