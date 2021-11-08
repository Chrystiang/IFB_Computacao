// Dados n e uma seqüência de n números inteiros, determinar a soma dos números pares. 

#include <stdio.h>

int main() {
	int n;
	int soma = 0;

	printf("Insira a quantidade de números: \n");
	scanf("%d", &n);

	for (int i = n; i > 0; i--) {
		if (i%2 == 0) {
			soma += i;
		}
	}

	printf("O resultado da soma é: %d", soma);
	return 0;
}