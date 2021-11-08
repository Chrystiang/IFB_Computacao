// Dados três números naturais, verificar se eles formam os lados de um triângulo retângulo. 

#include <stdio.h>

int main() {
	int a, b, c;
	int k;

	printf("Digite os números: \n");
	scanf("%d %d %d", &a, &b, &c);

	if (b > a) {
		k = a;
		a = b;
		b = k;
	}

	if (c > a) {
		k = a;
		a = c;
		c = k;
	}

	if ((a * a) == (b * b) + (c * c)) {
		printf("É um triângulo retângulo");
	} else {
		printf("Não é um triângulo retângulo");
	}

	return 0; 
}