#include <stdio.h>

#define TAM 5

int main() {
    int matriz[TAM][TAM];
    int i, j, x;
    int encontrado = 0; 
    int linhaachada, colunaachada;

    
    printf("Digite:\n");
        for (i = 0; i < TAM; i++) {
            for (j = 0; j < TAM; j++) {
                printf("Posição [%d][%d]: ", i, j);
                scanf("%d", &matriz[i][j]);
            }
        }

    printf("\nDigite o valor X pra bsucar: ");
    scanf("%d", &x);

   
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            if (matriz[i][j] == x) {
                encontrado = 1;
                linhaachada = i;
                colunaachada = j;
            }
        }
    }

    
    printf("\nREsultadp:\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

  
    if (encontrado){
        printf("\nValor %d encontrado na posição -> Linha: %d, Coluna: %d\n", x, linhaachada, colunaachada);
    }else{
        printf("\nValor %d não encontrado na matriz.\n", x);
    }
    return 0;
}