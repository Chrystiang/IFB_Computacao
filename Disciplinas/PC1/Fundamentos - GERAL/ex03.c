// Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.

#include <stdio.h>

int main() {
	int numero;
	int i = 0;

	printf("Insira o número: \n");
	scanf("%d", &numero);

	for (int j = 0; i < numero; j++) {
		if (j%2 == 1) {
			printf("%d ", j);
			i++;
		}
	}

	return 0;
}