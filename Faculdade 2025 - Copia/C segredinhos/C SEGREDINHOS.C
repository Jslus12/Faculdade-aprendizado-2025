// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
//Int main abre chave
int main ()
{
    
}
//Variáveis
//char - letras e símbolos
//int - Numeros inteiros
//Float - Numeros com ponto flutuante
char letra; // a, A, %
int numeroInteiro; // 1, 80 , -9
float numeroPontoFlutuante; // 1.88, -10.1

//Leitura e impressão de dados
//scanf - leitura de dados
//printf - impressão de dados
    scanf ("d%", &numeroInteiro);
    scanf ("%c", &letra);
    scanf ("%f", &numeroPontoFlutuante);

    printf("%d", numeroInteiro);
    printf("%c", letra);
    printf("%f", numeroPontoFlutuante)
//%d - para inteiro
//%f - para float
//%c - para char

//cls limpa teclado
