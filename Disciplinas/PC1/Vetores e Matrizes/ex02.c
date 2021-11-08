// Escreva um algoritmo que leia dois vetores de 10 posições e faça a multiplicação 
// dos elementos de mesmo índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.

#include <stdio.h>

int main() {
	int v1[10];
	int v2[10];
	int v3[10];

	printf("Insira os valores do primeiro vetor: \n");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &v1[i]);
	}

	printf("Insira os valores do segundo vetor: \n");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &v2[i]);
	}

	printf("v3 = ");
	for (int i = 0; i < 10; i++) {
		v3[i] = v1[i] * v2[i];
		printf("%d ", v3[i]);
	}

	return 0;
}