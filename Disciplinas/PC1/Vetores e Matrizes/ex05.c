#include <stdio.h>

int main() {
	int codigo;
	float v[500];
	float maior;

	printf("Insira o código: \n");
	scanf("%d", &codigo);

	printf("Insira os valores do vetor: \n");
	for (int i = 0; i < 500; i++) {
		scanf("%f", &v[i]);
	}

	if (codigo == 1) {
		printf("v = ");
		for (int i = 0; i < 500; i++){
			printf("%f ", v[i]);
		}
	} else if (codigo == 2) {
		printf("v = ");
		for (int i = 500 - 1; i >= 0; i--){
			printf("%f ", v[i]);
		}
	}

	return 0;
}