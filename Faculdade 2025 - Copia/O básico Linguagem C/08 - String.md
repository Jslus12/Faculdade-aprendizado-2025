	String;

cadeia de caracteres?
Grande parte dos dados inseridos dentro de um sistema estáem um formato de texto.
Esses textos são conhecidos na computação como CADEIA DE CARACTERES (String)
A sua manipulação ocorre através de vetores
Em linguagem C, uma cadeia de caracteres cujo o último elemento é o caractere nulo ‘\0’, ou seja, o primeiro caractere do código ASCII (cujo o valor é 0). O caractere nulo é um caractere de controle (ou seja, não exibível) que indica o fim de uma cadeia de caracteres.
Uma cadeia composta de n elementos será, na realidade, um vetor de n+1 elementos do tipo CHAR. A declaração de uma string em C é semelhante a uma declaração de um vetor do tipo CHAR. O número máximo de caracteres que comporta a cadeira será igual ao número de elementos do vetor menos um (reservado para o caractere nulo).