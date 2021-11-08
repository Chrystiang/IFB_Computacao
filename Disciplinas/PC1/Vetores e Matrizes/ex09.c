// Escrever um algoritmo que lê uma matriz M(12,13) e divida 
// todos os 13 elementos de cada uma das 12 linhas de M pelo 
// maior elemento em módulo daquela linha. Escrever a matriz 
// lida e a modificada.

#include <stdio.h>

float modulo(float num) {
	if (num >= 0.0) {
		return num;
	} else {
		return (num * -1.0);
	}
}

int main() {
	float matriz[12][13];
	float maior_elemento[12];

	printf("Insira os valores da matriz: \n");

	for (int i = 0; i < 12; i++) {
		maior_elemento[i] = 0.0;

		for (int j = 0; j < 13; j++) {
			float num;
			scanf("%f", &num);

			if (modulo(num) > maior_elemento[i]) {
				maior_elemento[i] = modulo(num);
			}

			matriz[i][j] = num;
		}
	}

	printf("Matriz lida: \n");

	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 13; j++) {
			printf("%f ", matriz[i][j]);
		}
		printf("\n");
	}

	printf("Matriz modificada: \n");

	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 13; j++) {
			float res = matriz[i][j] / maior_elemento[i];
			printf("%f ", res);
		}
		printf("\n");
	}

	
	return 0;
}