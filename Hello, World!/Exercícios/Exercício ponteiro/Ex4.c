#include <stdio.h>
#include <stdlib.h>

 troca(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int A, B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("\nAntes da troca: A = %d, B = %d\n", A, B);

    troca(&A, &B);

    printf("Depois da troca: A = %d, B = %d\n", A, B);

    return 0;
}
