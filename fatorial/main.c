#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int N,Fatorial=1,i;
    scanf("%d",&N);
    do {
        Fatorial *= N;
        N -= 1;
    } while (N>=1);
    /*while(N>=1) {
        Fatorial *= N;
        N -= 1;
    }*/
    printf("%d\n",Fatorial);
    return 0;
}
