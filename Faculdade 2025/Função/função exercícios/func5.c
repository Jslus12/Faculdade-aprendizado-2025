#include <stdio.h>
#include <stdlib.h>

int compararVetores(int v1[], int v2[], int tamanho) {
    int i;

    for (i = 0; i < tamanho; i++) {
        if (v1[i] != v2[i]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int N, i;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &N);

    int v1[N], v2[N];

    printf("\n--- Preencha o primeiro vetor ---\n");
    for (i = 0; i < N; i++) {
        printf("v1[%d]: ", i);
        scanf("%d", &v1[i]);
    }

    printf("\n--- Preencha o segundo vetor ---\n");
    for (i = 0; i < N; i++) {
        printf("v2[%d]: ", i);
        scanf("%d", &v2[i]);
    }

    int iguais = compararVetores(v1, v2, N);

    if (iguais == 1)
        printf("\nOs vetores possuem conteudo igual!\n");
    else
        printf("\nOs vetores sao diferentes!\n");

    return 0;
}