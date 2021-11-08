// Dizemos que um inteiro positivo n é perfeito se for igual à soma de seus divisores positivos diferentes de n.
// Exemplo: 6 é perfeito, pois 1+2+3 = 6.
// Dado um inteiro positivo n, verificar se n é perfeito. 

#include <stdio.h>

int main() {
	int n;
	int soma = 0;

	printf("Insira o número: \n");
	scanf("%d", &n);

	for (int i = 1; i < n; i++) {
		if (n%i == 0) {
			soma += i; 
		}
	}

	if (soma == n) {
		printf("> %d é um número perfeito", n);
	} else {
		printf("> %d não é um número perfeito", n);
	}

	return 0;
}