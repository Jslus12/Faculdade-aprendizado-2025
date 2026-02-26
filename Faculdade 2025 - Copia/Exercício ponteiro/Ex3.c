#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("\nValor de a = %d, endereco = %p", a, &a);
    printf("\nValor de b = %d, endereco = %p\n", b, &b);


    if (a > b)
        printf("\nO maior valor e o de 'a': %d\n", a);
    else if (b > a)
        printf("\nO maior valor e o de 'b': %d\n", b);
    else
        printf("\nOs dois valores sao iguais!\n");

    if (&a > &b)
        printf("O maior endereco e o de 'a': %p\n", &a);
    else if (&b > &a)
        printf("O maior endereco e o de 'b': %p\n", &b);
    else
        printf("Os enderecos sao iguais (muito improvavel!)\n");

    return 0;
}
