// Faça um algoritmo que leia uma matriz 50x50 de números e encontre 
// o maior valor da matriz. A seguir, multiplique cada elemento da 
// diagonal principal pelo maior valor. Mostre a matriz após as multiplicações.

#include <stdio.h>

int main() {
	int matriz[50][50];
	int maior;

	printf("Insira os valores da matriz: \n");

	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 50; j++) {
			int num;
			scanf("%d", &num);

			// atribuir um valor inicial de comparação para o maior elemento
			if (i == 0 && j == 0) {
				maior = num;

			// se o numero atual for o maior valor registrado até agora
			} else if (num > maior) {
				maior = num;
			}

			matriz[i][j] = num;
		}
	}

	// efetuar a multiplicação na diagonal principal (linha e colunas iguais)
	for (int i = 0; i < 50; i++) {
		matriz[i][i] *= maior;
	}

	printf("A nova matriz é:\n");

	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 50; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}

	return 0;
}