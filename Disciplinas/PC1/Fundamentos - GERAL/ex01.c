// Dada uma seqüência de números inteiros não-nulos, seguida por 0, imprimir seus quadrados. 

#include <stdio.h>

int main() {
	int numero;

	printf("Insira os números: \n");
	scanf("%d", &numero);

	while (numero != 0) {
		int quadrado = numero * numero;
		printf("> %d^2 = %d\n", numero, quadrado);
		scanf("%d", &numero);
	}

	return 0;
}