
	O que é?
	Definição de Matriz em Programação

Dentro da programação, matrizes são um agrupamento de
variáveis do mesmo tipo, organizada em linhas e colunas.

A forma de declaração da matriz em C é:
<TIPO> <NOME_DA_MATRIZ> [<LINHAS>][<COLUNAS>];

Assim, uma matriz de 3 linhas e 4 colunas INT é feito:
int matriz[3][4]

	Formas de criar (declarar) uma matriz

De maneira geral, temos 3 formas diferentes de declarar uma
matriz:
int valores[3][4];
int valores[3][4] = {{2,4,8},{3,1}, {5,3,1,8}};
int valores[][4] = {{2,4,8,3},{3,1,3,5},{5,3,2,1}};

	int valores[3][4];

A matriz é declarada sem os valores, o C irá preencher as
células com os valores aleatórios da memória.

	int valores[3][4] = {{2, 4, 8}, {3, 1}, {5, 3, 1, 8}};

Declaração de matriz com todas as dimensões e valores.
Nesse caso, é necessário verificar o número de colunas é
menor do que foi especificada, o C irá preencher com valores
aleatórios.

	int valores[][4] = {{2, 4, 8, 3}, {3, 1, 3, 5}, {5, 3, 2, 1}};

Número de linhas na declaração é omitida, isso pode ser feito
quando os valores forem declarados. Assim como
apresentado no slide anterior. Os valores podem ser omitidos,
mas se forem inseridos mais valores do que foi declarado.

	Acessando os elementos de uma matriz

A lógica de acesso, segue semelhante a forma de acesso a um
vetor, com os índices e colunas começando em 0

int valores[3][4];

Para atribuir valores:
valores[0][0] = 5;
valores[1][2] = 2;
valores[2][1] = 1;
valores[2][3] = 9;

	Por fim -
Matrizes e laço de repetição
Para percorrer uma matriz são necessários dois laços de
repetição, um para percorrer as linhas e outros as colunas.
