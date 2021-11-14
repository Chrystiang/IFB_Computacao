// Escreva uma função que recebe, por parâmetro, 
// um valor inteiro e positivo e retorna o somatório desse valor.

#include <stdio.h>

int somatorio(int numero) {
	int soma = 0;

	for (int i = numero; i > 0; i--) {
		soma += i;
	}

	return soma;
}
