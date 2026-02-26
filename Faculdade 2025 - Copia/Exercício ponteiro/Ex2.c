#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o valor de a!: ");
    scanf("%d", &a);

    printf("Digite o valor de b!: ");
    scanf("%d", &b);

    printf("\nValor A = %d, endereco = %p", a, &a);
    printf("\nValor B = %d, endereco = %p\n", b, &b);

    if (&a > &b)
        printf("O maior endereco eh o de 'a': %p", &a);
    else if (&b > &a)
        printf("O maior endereco eh o de 'b': %p", &b);
    else
        printf("Os enderecos sao iguais (muito improvavel!)\n");

    return 0;
}
