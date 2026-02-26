#include <stdio.h>

#define TAM 4


int Matriz(int matriz[TAM][TAM]) {
    int contador = 0;
        for (int i = 0; i < TAM; i++) {
            for (int j = 0; j < TAM; j++) {
                printf("Digite o valor da posicao [%d][%d]: ", i, j);
                scanf("%d", &matriz[i][j]);
                contador++;
            }
        }
        return contador;
}


int numeromaiorque10(int matriz[TAM][TAM]) {
    int contador = 0;
        for (int i = 0; i < TAM; i++) {
            for (int j = 0; j < TAM; j++) {
                if (matriz[i][j] > 10)
                    contador++;
            }
        }
        return contador;
}


int modtrarmatriz(int matriz[TAM][TAM]) {
    printf("\nMatriz:\n");
        for (int i = 0; i < TAM; i++) {
            for (int j = 0; j < TAM; j++) {
                printf("%4d", matriz[i][j]);
            }
            printf("\n");
        }
        return 0;
}

int main() {
    int matriz[TAM][TAM];
    int qtd;

    Matriz(matriz);
    modtrarmatriz(matriz);

    qtd = numeromaiorque10(matriz);

    printf("\nA matriz possui %d valores maiores que 10.\n", qtd);

    return 0;
}