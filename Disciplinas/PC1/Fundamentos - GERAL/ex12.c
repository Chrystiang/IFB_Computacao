// Dados dois números inteiros positivos, determinar o máximo divisor comum entre eles usando o algoritmo de Euclides.

#include <stdio.h>

int main() {
	int a, b;
	int resto;

	printf("Insira dois números: \n");
	scanf("%d %d", &a, &b);
	printf("> mdc(%d, %d) = ", a, b); 

	resto = b % a;

	while (resto != 0) {
		resto = a % b;
		a = b;
		b = resto;
	}

	printf("%d", a);
	return 0;
}