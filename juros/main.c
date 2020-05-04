#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float J,C,i,t,M;
    int CB,m;
    printf("Digite o valor inicial da transacao: ");
    scanf("%g",&C);
    printf("Digite a taxa de juros: ");
    scanf("%g",&i);
    printf("Digite o periodo da transacao: ");
    scanf("%g",&t);

    printf("Digite 1 para Juros Sinples \n ou 2 para juros compostos: ");
    scanf("%d", &CB);
    if (CB==1) {
        printf("Juros Simples \n\n");
        printf ("Formula de juros Simples: J=%g*%g*%g \n\n", C,i,t);
        J=(C*(i/100)*t);
        printf("seus juros sao de: %g",J);
        printf("\n\n Se voce desejar fazer o montante\n digite 1 se nao digite 2: ");
        scanf("%d", &m);
        if (m==1) {
            printf ("Formula do montante: M=%g+%g \n\n", C,J);
            M=(C+J);
            printf("seu montante e de: %g",M);
            return 0;
        } else {
            return 0;
        }
    } else {
        printf("\nJuros Compostos\n");
        printf ("Formula de juros Compostos: M=%g(1+(%g/100))^%g \n\n", C,i,t);
        M=C*(1+pow((i/100),t));
        printf("seus Montante sao de: %g",M);
        J=(M-C);
        printf("\n");
        printf("seus Juros sao de: %g",J);
        return 0;
    }
}

