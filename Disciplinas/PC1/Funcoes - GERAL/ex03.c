// Faça uma função que recebe por parâmetro um valor inteiro e positivo 
// e retorna o valor lógico Verdadeiro caso o valor seja primo e Falso
// em caso contrário.

#include <stdio.h>

int e_primo(int n) {
	int primo = 1;

	if (n > 1) {
		for (int i = 2; i < n; i++) {
			if (n%i == 0) {
				primo = 0;
				break;
			}
		}
	} else {
		primo = 0;
	}

	if (primo == 0) {
		return 0;
	} else {
		return 1;
	}
}