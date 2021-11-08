// Faça um algoritmo que leia um vetor de 500 posições de números e divida todos os seus elementos pelo maior valor do vetor. 
// Mostre o vetor após os cálculos.

#include <stdio.h>

int main() {
	float v[500];
	float maior;

	printf("Insira os valores do vetor: \n");
	for (int i = 0; i < 500; i++) {
		scanf("%f", &v[i]);

		if (i == 0) {
			maior = v[i];
		} else if (v[i] > maior) {
			maior = v[i];
		}
	}

	printf("v = ");
	for (int i = 0; i < 500; i++) {
		float res = v[i] / maior;
		printf("%f ", res);
	}

	return 0;
}