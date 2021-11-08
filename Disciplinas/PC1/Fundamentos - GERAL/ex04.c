// Dados um inteiro x e um inteiro não-negativo n, calcular xˆn. 

#include <stdio.h>

int main() {
	int x, n;
	int i = 0;

	printf("Defina x: \n");
	scanf("%d", &x);

	printf("Defina n: \n");
	scanf("%d", &n);

	int res = 1;

	for (int i = 0; i < n; i++) {
		res *= x;
	}

	printf("> %d^%d = %d", x, n, res);
	return 0;
}