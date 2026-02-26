#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int calcularQuadrado(float v1[], float v2[], int tamanho) {
    int i;

    for (i = 0; i < tamanho; i++) {
        printf("Digite um numero real: ");
        scanf("%f", &v1[i]);
    }

    for (i = 0; i < tamanho; i++) {
        v2[i] = v1[i] * v1[i];
    }

    printf("\nVetor original:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%.2f ", v1[i]);
    }

    printf("\n\nVetor com os quadrados:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%.2f ", v2[i]);
    }

    printf("\n");

    return 0;
}

int main() {
    float v1[TAM], v2[TAM];

    calcularQuadrado(v1, v2, TAM);

    return 0;
}