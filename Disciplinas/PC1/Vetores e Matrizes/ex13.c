// Faça um algoritmo que leia uma matriz numérica 15 X 15 
// e calcule a soma dos elementos da diagonal secundária.

#include <stdio.h>

int main() {
	int matriz[15][15];
	int soma = 0;

	printf("Insira os valores da matriz: \n");

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			scanf("%d", &matriz[i][j]);
		}
	}

	for (int i = 0; i < 15; i++) {
		soma += matriz[i][(15 - 1 - i)];
	}

	printf("A soma da diagonal secundária é %d", soma);
	
	return 0;
}