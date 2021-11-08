// Dados n e dois números inteiros positivos i e j diferentes de 0, 
// imprimir em ordem crescente os n primeiros naturais que são múltiplos de i ou de j e ou de ambos.

#include <stdio.h>

int main() {
	int n, i, j;
	int k = 0;
	int c = 0;

	printf("Defina n, i e j: \n");
	scanf("%d %d %d", &n, &i, &j);


	while (k < n) {
		if (c%i == 0 || c%j == 0) {
			printf("%d ", c);
			k++;
		}
		c++;
	}

	return 0;
}