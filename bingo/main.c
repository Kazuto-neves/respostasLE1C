#include <stdio.h>
#include <stdlib.h>

int main() {
    int mat[2][2],i,j,x=0,n1,n2,n3;
    for (i=0; i<2; i++) {
        for (j=0; j<2; j++) {
            printf("Digite dois valores na mat[%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    /*for ( i=0; i<3; i++ ) {
        printf("[");
        if(i==x) {
            for ( j=0; j<3; j++ ) {
                printf (" %d ",mat[i][j]);
            }
            printf("]");
            printf("\n");
            x+=1;
        }*/
    printf("Digite o primeiro numero: ");
    scanf("%i",&n1);
    printf("Digite o segundo numero: ");
    scanf("%i",&n2);
    printf("Digite o terceiro numero: ");
    scanf("%i",&n3);
    for ( i=0; i<2; i++ ) {
        printf("[");
        if(i==x) {
            for ( j=0; j<2; j++ ) {
                if(mat[i][j]==n1) {
                    printf (" X ",mat[i][j]);
                } else if(mat[i][j]==n2) {
                    printf (" X ",mat[i][j]);
                } else if(mat[i][j]==n3) {
                    printf (" X ",mat[i][j]);
                } else {
                    printf (" %d ",mat[i][j]);
                }
            }
            printf("]");
            printf("\n");
            x+=1;
        }
    }
    return 0;
}
