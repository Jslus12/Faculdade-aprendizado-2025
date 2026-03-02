#include<stdio.h>

int soma();

int main()
{
    int result = soma();
    printf("a soma dos valores e: %d\n", result);
    return 0;
}

int soma ()
{
    int num1, num2, num3;
    
    printf ("digite o primeiro valor: \n");
    scanf("%d", &num1);
    printf("digite o segundo valor: \n");
    scanf("%d", &num2);
    printf("digite o terceiro valor: \n");
    scanf("%d", &num3);
    
    return num1 + num2 + num3;

}