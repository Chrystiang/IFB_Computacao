#include <stdio.h>

int main() {
	int clientes[500];
	int locacoes_gratis[500];

	printf("Insira a quantidade de filmes por cliente: \n");
	for (int i = 0; i < 500; i++) {
		scanf("%d", &clientes[i]);
		locacoes_gratis[i] = clientes[i] / 10;
	}

	return 0;
}