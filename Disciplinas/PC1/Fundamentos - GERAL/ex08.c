// Dado um inteiro não-negativo n, determinar n!

#include <stdio.h>

int main() {
	int n;
	int res = 1;

	printf("Insira o número: \n");
	scanf("%d", &n);

	for (int i = n; i > 0; i--) {
		res *= i;
	}

	printf("> %d! = %d", n, res);
	return 0;
}