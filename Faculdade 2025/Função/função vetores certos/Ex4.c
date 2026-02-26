#include <stdio.h>
#include <stdlib.h>

int somaPosicoes(int v[], int tamanho, int x, int y) {
    int soma;

    soma = v[x] + v[y];

    printf("\nA soma dos valores nas posicoes %d e %d eh: %d\n", x, y, soma);

    return soma;
}

int main() {
    int v[8];
    int i, x, y;

    for (i = 0; i < 8; i++) {
        printf("Digite um numero para a posicao %d: ", i);
        scanf("%d", &v[i]);
    }

    printf("\nDigite o indice X (0 a 7): ");
    scanf("%d", &x);

    printf("Digite o indice Y (0 a 7): ");
    scanf("%d", &y);

    if (x < 0 || x >= 8 || y < 0 || y >= 8) {
        printf("\nErro: indices invalidos! Devem estar entre 0 e 7.\n");
        return 1;
    }

    somaPosicoes(v, 8, x, y);

    return 0;
}