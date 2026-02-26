#include <stdio.h>
#include <stdlib.h>

int organizarNumeros(int v[], int tamanho) {
    int i, j, temp;
    int pares[100], impares[100];
    int qtdPares = 0, qtdImpares = 0;

    for (i = 0; i < tamanho; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &v[i]);

        if (v[i] % 2 == 0)
            pares[qtdPares++] = v[i];
        else
            impares[qtdImpares++] = v[i];
    }

    for (i = 0; i < qtdPares - 1; i++) {
        for (j = i + 1; j < qtdPares; j++) {
            if (pares[i] > pares[j]) {
                temp = pares[i];
                pares[i] = pares[j];
                pares[j] = temp;
            }
        }
    }

    for (i = 0; i < qtdImpares - 1; i++) {
        for (j = i + 1; j < qtdImpares; j++) {
            if (impares[i] < impares[j]) {
                temp = impares[i];
                impares[i] = impares[j];
                impares[j] = temp;
            }
        }
    }

    printf("\nNumeros pares em ordem crescente:\n");
    for (i = 0; i < qtdPares; i++) {
        printf("%d ", pares[i]);
    }

    printf("\n\nNumeros impares em ordem decrescente:\n");
    for (i = 0; i < qtdImpares; i++) {
        printf("%d ", impares[i]);
    }

    printf("\n");

    return 0;
}

int main() {
    int qtd;

    printf("Quantos numeros voce deseja digitar? ");
    scanf("%d", &qtd);

    int v[qtd];

    organizarNumeros(v, qtd);

    return 0;
}