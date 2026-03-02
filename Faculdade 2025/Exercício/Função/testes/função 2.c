#include<stdio.h>

float soma(float num1, float num2);
float multiplicacao(float num1, float num2);
float divisao(float num1, float num2);
float subtracao(float num1, float num2);

int opcao(); 

int main ()
{
    float num1, num2;

    printf("informe o primeiro valor: \n");
    scanf("%f", &num1);

    printf("informe o segundo valor: \n");
    scanf("%f", &num2);

    int opt = opcao();
    switch(opt){
        case 1:
            printf("a soma dos valores e: %.2f\n", soma(num1, num2));
            break; 
        case 2:
            printf("a subtracao dos valores e: %.2f\n", subtracao(num1, num2));
            break;
        case 3:
             printf("a multiplicacao dos valores e: %.2f\n", multiplicacao(num1, num2));
            break;
        case 4:
            printf("a divisao dos valores e: %.2f\n", divisao(num1, num2));
            break;
    }
}
float soma(float num1, float num2)
{
    return num1 + num2;
}
float multiplicacao(float num1, float num2)
{
    return num1 * num2;
}
float divisao(float num1, float num2)
{
    return num1/num2;
}
float subtracao(float num1, float num2)
{
    return num1 - num2;
}
int opcao()
{
int opcao;
    do{

    printf("selecione uma opcao: \n");
    printf("1 - soma\n");
    printf("2 - subtracao\n");
    printf("3 - multiplicacao\n");
    printf("4 - divisao\n");
    scanf("%d", &opcao);

    }while(opcao < 1 || opcao > 4);

    return opcao; 
} 