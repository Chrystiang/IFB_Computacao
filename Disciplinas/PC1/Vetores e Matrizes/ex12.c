// Faça um algoritmo que calcule a média dos elementos 
// da diagonal principal de uma matriz 10 X 10 de números.
// 
// Faça um algoritmo que calcule a média dos elementos
// da diagonal secundária de uma matriz 10 X 10 de números.

#include <stdio.h>

int main() {
	float matriz[10][10];
	float media_principal = 0;
	float media_secundaria = 0;

	printf("Insira os valores da matriz: \n");

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			scanf("%f", &matriz[i][j]);
		}
	}

	for (int i = 0; i < 10; i++) {
		media_principal += matriz[i][i];
		media_secundaria += matriz[i][(10 - 1 - i)];
	}

	media_principal /= 10;
	media_secundaria /= 10;

	printf("A média da diagonal principal é %f\n", media_principal);
	printf("A média da diagonal secundária é %f\n", media_secundaria);
	
	return 0;
}