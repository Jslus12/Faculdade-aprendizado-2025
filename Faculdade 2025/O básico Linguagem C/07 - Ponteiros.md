  

	O que são ponteiros?
um ponteiro é uma variável que contém um endereço de memória, esse endereço é normalmente a posição de uma outra variável na memória.
Em um programa, cada variável tem um endereço, que indica a sua localização na memória do computador e um conteúdo. Geralmente os valores armazenados podem ser:
- Escalares (inteiros, reais ou caracteres) 
- Não escalares (vetores, matrizes e estruturas)

	Variáveis ponteiros
A declaração de um ponteiro consiste no tipo de base, um * e o nome da variável

Ex: 
 <tipo>*<nome_variavel>
int*num;

	Uso de ponteiro:
- Ponteiros podem ser utilizados de três formas:
- Atribuição: pode-se atribuir um valor ao ponteiro
- Leitura: pode-se ler o valor armazenado ao ponteiro
- Desreferenciar: pode-se ler o conteúdo (valor) da posição de memória indica (“apontada”) pelo ponteiro
Pode-se utilizar para alocar memória dinamicamente, aumentar a eficiência de certas rotinas, fornecer meios para funções modificarem argumentos.

Código Ex:

#include<stdio.h>
#include<stdlib.h>

int main ()

{
    //variavel normal
    int a;
    //ponteiro
    int *p;
    
    a = 2345;
    p = &a;

    printf("Valor de memoria que armazena a variavel a: %p", &a);
    printf("Valor da memoria que esta sendo armazenado pelo ponteiro: %p \n", p);
    printf("Valor armazenado em a: %d \n", a);
    printf("valor que está sendo apontado pelo ponteiro p: %d\n", *p);

    return 0;

}

	Atenção:

Dois ponteiros no code;

int main ()

{

int x = 8, *p1, *p2;

p1 = &x;

p2 = p1;

return 0;

}

Com * mostra valor que ele está apontando, sem é a posição.