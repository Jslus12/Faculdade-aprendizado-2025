#include <stdio.h>
#include <stdlib.h>

int vetorOperacoes(int A[], int tamanho) {
    int i, soma;
    
    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;

 
    soma = A[0] + A[1] + A[5];
    printf("Soma de A[0] + A[1] + A[5] = %d\n\n", soma);

    A[4] = 100;

 
    printf("Valores do vetor A:\n");
    for (i = 0; i < tamanho; i++) {
        printf("A[%d] = %d\n", i, A[i]);
    }

    return 0; 
}

int main() {
    int A[6];

    vetorOperacoes(A, 6);

    return 0;
}