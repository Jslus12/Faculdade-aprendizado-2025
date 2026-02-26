#include <stdio.h>

int main() {
    int numeros[5];
    int *ptr = numeros; 

    // Leitura dos 5 valores
    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", ptr + i); 
    }


    printf("\nDobro dos valores digitados:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", 2 * (*(ptr + i))); 
    }

    printf("\n");
    return 0;
}
