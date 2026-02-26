#include <stdio.h>
#include <stdlib.h>


int dobroESoma(int *a, int *b) {
    *a = *a * 2;
    *b = *b * 2;
    return *a + *b;
}

int main() {
    int A, B, soma;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    soma = dobroESoma(&A, &B);

    printf("\nDepois de dobrar:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("Soma dos dois dobrados = %d\n", soma);

    return 0;
}
