#include <stdio.h>
#include <stdlib.h>

double **aloca2(int f, int c){
    double **m;
    int i, j;

    m = (double **) malloc(f * sizeof (double *));

    for (i=0; i<f; i++)
        *(m+i)= (double *) malloc (c * sizeof (double));

    for (i=0; i<f; i++){
        for (j=0; j<c; j++){
                printf ("Valor em %d,%d = ", i, j);
                scanf ("%lf", (*(m+i)+j));
        }
    }
    return m;
 }

 void matrizes(){
    int n, m, i, j;
    double **m1;
    double **m2;
    double **soma;

    printf ("Das matrizes\n");
    printf ("\nNumero de filas: ");
    scanf ("%d", &m);
    printf ("\nNumero de colunas: ");
    scanf ("%d", &n);

    printf ("Matriz 1\n");
    m1 = aloca2(m,n);


    printf ("Matriz 2\n");
    m2 = aloca2(m,n);

    printf ("Soma\n");
    soma = (double **) malloc(m * sizeof (double *));

    for (i=0; i<m; i++)
        *(soma+i)= (double *) malloc (n * sizeof (double));


    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
                (*(*(soma+i)+j)) = (*(*(m1+i)+j))+(*(*(m2+i)+j));
        }
    }

    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
                printf ("\n Valor em %d,%d= %lf ", i, j, *(*(soma+i)+j));
         }
    }

    free(m1);
    free(m2);
    free(soma);
 }

int main(){
    matrizes();
 }
