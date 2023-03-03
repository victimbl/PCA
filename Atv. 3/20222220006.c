#include <stdio.h>
44
int main(){
    int prim, seg, tab_multi;
    printf("A tabuada de multiplicacao: ");
    for(prim=1; prim<10; prim++){
        printf("\n");
        for(seg=1; seg<10; seg++){
            tab_multi = prim * seg;
            printf("%d x %d = %d\n", prim, seg, tab_multi);
        }
    }
}
