// Uma locadora de vídeos tem guardada, em um vetor de 500 posições, 
// a quantidade de filmes retirados por seus clientes durante o ano de 1993. 
// Agora, esta locadora está fazendo uma promoção e, para cada 10 filmes retirados, 
// o cliente tem direito a uma locação grátis. Faça um algoritmo que crie um outro 
// vetor contendo a quantidade de locações gratuitas a que cada cliente tem direito.

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