// Escreva uma função que recebe por parâmetro um valor inteiro
// e positivo N e retorna o valor de S.
// S = 1 + 1/1! + 1/2! + 1/3! + 1/N!

#include <stdio.h>

int fatorial(int numero) {
	int calc = 1;

	for (int i = 1; i <= numero; i++) {
		calc *= i;
	}

	return calc;
}

float calcS(int N) {
	return (1.0 + 1.0/(float)fatorial(1) + 1.0/(float)fatorial(2) + 1.0/(float)fatorial(3) + 1.0/(float)fatorial(N));
}