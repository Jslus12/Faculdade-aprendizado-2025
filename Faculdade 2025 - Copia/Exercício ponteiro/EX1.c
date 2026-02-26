#include <stdio.h>
#include <stdlib.h>

int main() {
    int numi;
    float numr;
    char letra;

    int *pi;
    float *pr;
    char *pc;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numi);

    printf("Digite um numero real: ");
    scanf("%f", &numr);

    printf("Digite um caractere: ");
    scanf(" %c", &letra);

    pi = &numi;
    pr = &numr;
    pc = &letra;

    printf("\n=========== Antes ===========\n");
    printf("Numero inteiro: %d\n", numi);
    printf("Numero real: %.2f\n", numr);
    printf("Caractere: %c\n", letra);

    *pi = *pi + 1;
    *pr = *pr + 1.5;
    *pc = *pc + 1;

    printf("\n=========== Depois ===========\n");
    printf("Numero inteiro: %d\n", numi);
    printf("Numero real: %.2f\n", numr);
    printf("Caractere: %c\n", letra);

    return 0;
}
