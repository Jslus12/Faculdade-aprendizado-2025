#include <stdio.h>

#define max 6

int soma(int v[], int pos1, int pos2, int pos3);
int atribuirValor(int v[], int pos, int valor);
void exibirVetor(int v[]);

int main ()
{
    //criando vetor de 6 posições
    int vetor[max] = {1, 0, 5, -2, -5, 7};
    //resolução da b com função
    int resultadoSoma = soma(vetor, 0, 1, 5);
    printf("o resultado da soma nas posicoes 0, 1 e 5 e: %d\n", resultadoSoma);

    //resolução da c com função
    atribuirValor(vetor, 4, 100);

    //resolução da d com função
    exibirVetor(vetor);

    return 0;

}
// armazene em uma variavel inteira (simples) a soma entre valores das posições
int soma (int v[], int pos1, int pos2, int pos3)
{
    return v[pos1] + v[pos2] + v[pos3];
}
//modifique o vetor na posic ao 4, atribuindo um valor
int atribuirValor(int v[], int pos, int valor)
{
    v[pos] = valor;
}

//mostre na  tela cad valor do vetor a, em cada linha
void exibirVetor(int v[])
{
    for(int i = 0; i < max; i++)
    {
        printf("%d\n", v[i]);
    }
}
