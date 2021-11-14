// Faça uma função que recebe, por parâmetro, 
// um valor inteiro e positivo e retorna o número de divisores desse valor.

#include <stdio.h>

int divisores(int numero) {
	int total = 0;

	for (int i = 1; i <= numero; i++) {
		if (numero%i == 0) {
			total++;
		}
	}

	return total;
}