#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int contarPares(int v[], int tamanho) {
    int i, contador = 0;

    for (i = 0; i < tamanho; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &v[i]);
    }

    for (i = 0; i < tamanho; i++) {
        if (v[i] % 2 == 0) {
            contador++;
        }
    }

    printf("\nO vetor possui %d numeros pares.\n", contador);

    return contador;
}

int main() {
    int v[TAM];
    int qtdPares;

    qtdPares = contarPares(v, TAM);

    return 0;
}