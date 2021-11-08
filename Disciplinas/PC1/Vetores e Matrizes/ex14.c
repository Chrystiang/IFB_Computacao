// Faça um algoritmo que leia uma matriz 20x15 de números. 
// Calcule e mostre a soma das linhas pares da matriz.

#include <stdio.h>

int main() {
	int matriz[20][15];
	int soma = 0;

	printf("Insira os valores da matriz: \n");

	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 15; j++) {
			scanf("%d", &matriz[i][j]);

			// Como a indexação da array começa em 0,
			// é necessário somar 1 para saber o número da linha atual
			if ((i + 1)%2 == 0) {
				soma += matriz[i][j];
			}
		}
	}

	
	printf("A soma das linhas pares da matriz é igual a %d", soma);

	return 0;
}