#include <stdio.h>
#include <stdlib.h>
#define TAM 20

int operacoesVetores(int v1[], int v2[], int soma[], int diferenca[], int multiplicacao[], int tamanho) {
    int i;

    printf("=== Preenchendo o primeiro vetor ===\n");
    for (i = 0; i < tamanho; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &v1[i]);
    }

    printf("\n=== Preenchendo o segundo vetor ===\n");
    for (i = 0; i < tamanho; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &v2[i]);
    }

    for (i = 0; i < tamanho; i++) {
        soma[i] = v1[i] + v2[i];
        diferenca[i] = v1[i] - v2[i];
        multiplicacao[i] = v1[i] * v2[i];
    }

    printf("\nVetor 1:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", v1[i]);
    }

    printf("\n\nVetor 2:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", v2[i]);
    }

    printf("\n\nVetor Soma:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", soma[i]);
    }

    printf("\n\nVetor Diferenca:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", diferenca[i]);
    }

    printf("\n\nVetor Multiplicacao:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", multiplicacao[i]);
    }

    printf("\n");

    return 0;
}

int main() {
    int v1[TAM], v2[TAM];
    int soma[TAM], diferenca[TAM], multiplicacao[TAM];

    operacoesVetores(v1, v2, soma, diferenca, multiplicacao, TAM);

    return 0;
}