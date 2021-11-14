// Faça uma função que receba um valor inteiro e positivo e calcula o seu fatorial.

#include <stdio.h>

int fatorial(int numero) {
	int res = 1;

	for (int i = numero; i > 0; i--) {
		res *= i;
	}

	return res;
}