// Faça um algoritmo que leia uma matriz 20x20 de números 
// e some cada uma das linhas, armazenando o resultado da soma 
// em um vetor. A seguir, multiplique cada elemento pela soma 
// da sua linha. Mostre a matriz resultante.

#include <stdio.h>

int main() {
	int matriz[20][20];
	int soma_linhas[20];

	printf("Insira os valores da matriz: \n");

	for (int i = 0; i < 20; i++) {
		soma_linhas[i] = 0;

		for (int j = 0; j < 20; j++) {
			int num;
			scanf("%d", &num);

			soma_linhas[i] += num;
			matriz[i][j] = num;
		}
	}

	printf("A nova matriz é: \n");

	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			int novo_valor;
			novo_valor = matriz[i][j] * soma_linhas[i];

			printf("%d ", novo_valor);
		}
		printf("\n");
	}

	
	return 0;
}