// Dados três números, imprimi-los em ordem crescente. 

#include <stdio.h>

int main() {
	int a, b, c;
	int k;

	printf("Digite os números: \n");
	scanf("%d %d %d", &a, &b, &c);

	if (b < a) {
		k = a;
		a = b;
		b = k;
	}

	if (c < b) {
		k = b;
		b = c;
		c = k;
	}

	printf("> %d, %d, %d", a, b, c);
	
	return 0; 
}