// Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos
#include <stdio.h>
#define MAX 6

void lerValores(int v[]);
void exibirValores(int v[]);

int main()
{
    int vetor[MAX];
    //chamando função para leitura
    lerValores(vetor);
    //chamando função para exibir valores
    exibirValores(vetor);
}
void  lerValores(int v[])
{
    for(int i = 0; i < MAX; i++)
    {
        printf("insira um valor na posicao \n", i);
        scanf("%d", &v[i]);
    }
}
void exibirValores(int v[])
{
    for(int i = 0; i < MAX; i++)
    {
        printf("%d", v[i]);
    }
}