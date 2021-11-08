// Dado um número natural na base binária, transformá-lo para a base decimal.
// Exemplo: Dado 10010 a saída será 18, pois 1. 2 4 + 0. 2 3 + 0. 2 2 + 1. 2 1 + 0. 2 0 = 18.

#include <stdio.h>

int main() {
	int n;
	int base = 1;
	int res = 0;

	printf("Digite o número: \n");
	scanf("%d", &n);

	printf("> %d na base decimal: ", n);

	while (n != 0) {
		res += (n % 10) * base;
		n /= 10;
		base *= 2;
	}

	printf("%d\n", res);

	return 0; 
}