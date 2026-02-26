
	Vetor; 
O número de índices dentro de uma variável é denominado DIMENSÃO
Vetor é um conjunto de variáveis no qual cada uma pode armazenar uma informação diferente (compartilhando o mesmo
nome de variável). São associados índices a esse nome, que representam as posições do vetor, permitindo, assim, individualizar os elementos do conjunto

	Vetor exemplo:
	
#include <stdio.h>

int main()
{

    int v[5];
    int i;
    printf ("digite 5 num\n");
    for (i=0; i < 5 ; i++){
		   printf("Numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }
      printf("\nOs numeros digitados foram:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");
    return 0;}

  

	Como distinguir?

	Vetor - 
Quando a variável indexada possui um único índice (DIMENSÃO)

	Matriz - 
Quando a variável indexada possui dois índices (DUAS DIMENSÕES –LINHA e COLUNA)
Através da divisão da variável, que possui uma posição de armazenamento dentro de seu conjunto, sua alteração de valor ou leitura é realizada por meio de índices.

	  Tabela ASCII;
Valor Binário | Carácter | Valor em decimal
O | L | Á | \0 { fim {3} Isso é tudo
isso é tudo.