#include <stdio.h>
#include <stdlib.h>

int main() {
    float vetor[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("endereco do elemento vetor[%d] = %p\n", i, &vetor[i]);
    }

    return 0;
}
