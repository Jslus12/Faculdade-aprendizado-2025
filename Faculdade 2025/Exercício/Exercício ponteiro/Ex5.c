#include <stdio.h>
#include <stdlib.h>

ordena(int *a, int *b) {
    int temp;
    if (*a < *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int A, B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("\nAntes: A = %d, B = %d\n", A, B);

    ordena(&A, &B);

    printf("Depois: A (maior) = %d, B (menor) = %d\n", A, B);

    return 0;
}
