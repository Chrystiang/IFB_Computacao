// Escreva um algoritmo que leia um vetor de 100 posições e mostre-o ordenado em ordem crescente.

#include <stdio.h>

int main() {
	float v[100];

	printf("Insira os valores do vetor: \n");
	for (int i = 0; i < 100; i++) {
		scanf("%f", &v[i]);
	}

	for (int i = 0; i < 100; i++) {
		for (int j = i+1; j < 100; j++) {
			if (v[i] > v[j]) {
				float troca = v[i];
				v[i] = v[j];
				v[j] = troca;
			}
		}
	}

	printf("Vetor ordenado: \n");
	for (int i = 0; i < 100; i++) {
		printf("%f ", v[i]);
	}

	return 0;
}