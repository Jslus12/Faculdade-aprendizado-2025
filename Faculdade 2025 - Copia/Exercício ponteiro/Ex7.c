#include <stdio.h>
#include <stdlib.h>


soma(int *a, int b) {
    *a = *a + b;
}

int main() {
    int A, B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    soma(&A, B);

    printf("depois da funcao:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    return 0;
}
