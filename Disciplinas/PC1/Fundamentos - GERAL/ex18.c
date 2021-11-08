// Qualquer número natural de quatro algarismos pode ser dividido em duas dezenas formadas pelos seus dois primeiros e dois últimos dígitos.
// Exemplos:
// 1297: 12 e 97.
// 5314: 53 e 14.

#include <stdio.h>

int main() {
	int n;
	int k = 0;
	int res[2];

	printf("Digite o número: \n");
	scanf("%d", &n);

	while (n > 0) {
		int i = n % 100;
		res[k] = i;
		n /= 100;
		k++;
	}
	
	for (int i = 1; i >= 0; i--) {
		printf("%d ", res[i]);
	}

	return 0; 
}