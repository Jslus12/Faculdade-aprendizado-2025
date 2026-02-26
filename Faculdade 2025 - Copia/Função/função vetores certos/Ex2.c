#include <stdio.h>
#include <stdlib.h>

int lerMostrar(int v[], int tamanho) {
    int i;

    for (i = 0; i < tamanho; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &v[i]);
    }

    printf("\nValores lidos:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d\n", v[i]);
    }

    return 0;
}

int main() {
    int v[6];

    lerMostrar(v, 6);

    return 0;
}