// Dado um número inteiro positivo n, calcular a soma dos n primeiros números inteiros positivos.

#include <stdio.h>

int main() {
	int numero;
	int soma = 0;

	printf("Insira o número: \n");
	scanf("%d", &numero);

	for (int i = numero; i > 0; i-- ) {
		soma += i;
	}

	printf("O resultado da soma é: %d", soma);
	return 0;
}