// Faça uma função que verifique se um valor é perfeito ou não. 
// Um valor é dito perfeito quando ele é igual a soma dos seus 
// divisores excetuando ele próprio. 
// (Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores). 
// A função deve retornar um valor que represente booleano.

#include <stdio.h>

int e_perfeito(int n) {
	int soma = 0;

	for (int i = 1; i < n; i++) {
		if (n%i == 0) {
			soma += i; 
		}
	}

	if (soma == n) {
		return 1;
	}

	return 0;
}