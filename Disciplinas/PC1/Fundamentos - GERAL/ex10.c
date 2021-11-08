// Dizemos que um número natural é triangular se ele é produto de três números naturais consecutivos.
// Exemplo: 120 é triangular, pois 4.5.6 = 120.
// Dado um inteiro não-negativo n, verificar se n é triangular. 

#include <stdio.h>

int main() {
	int n;
	int triangular = 0;

	printf("Insira o número: \n");
	scanf("%d", &n);

	for (int i = 1; i * (i + 1) * (i + 2) <= n; i++) {
		if ((i * (i + 1) * (i + 2)) == n) {
			printf("%d é triangular, pois %d*%d*%d = %d", n, i, i+1, i+2, n);
			triangular = 1;
			break;
		}
	}
	
	if (triangular == 0) {
		printf("%d não é triangular.", n);
	}

	return 0;
}