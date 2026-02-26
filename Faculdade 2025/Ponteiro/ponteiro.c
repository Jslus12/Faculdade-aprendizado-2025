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
