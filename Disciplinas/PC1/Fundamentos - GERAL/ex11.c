// Dado um inteiro positivo n, verificar se n é primo. 

#include <stdio.h>

int main() {
	int n;
	int primo = 1;

	printf("Insira o número: \n");
	scanf("%d", &n);

	if (n > 1) {
		for (int i = 2; i < n; i++) {
			if (n%i == 0) {
				primo = 0;
				break;
			}
		}
	} else {
		primo = 0;
	}

	if (primo == 0) {
		printf("%d não é primo.", n);
	} else {
		printf("%d é primo.", n);
	}

	return 0;
}