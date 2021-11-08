// Elaborar um algoritmo que lê um conjunto de 30 valores e os coloca 
// em 2 vetores conforme estes valores forem pares ou ímpares. 
// O tamanho do vetor é de 5 posições. Se algum vetor estiver cheio, escrevê-lo. 
// Terminada a leitura escrever o conteúdo dos dois vetores. 
// Cada vetor pode ser preenchido tantas vezes quantas for necessário.

#include <stdio.h>

void imprime_vetor(int vetor[]) {
	for (int i = 0; i < 5; i++) {
		printf("%d ", vetor[i]);
	}
}

int main() {
	int v_par[5] = {0, 0, 0, 0, 0};
	int v_impar[5] = {0, 0, 0, 0, 0};

	int par_pos = 0;
	int impar_pos = 0;

	printf("Digite os valores: \n");
	for (int i = 0; i < 30; i++) {
		int num;
		scanf("%d", &num);

		if (num%2 == 0) {
			if (par_pos == 5) {
				par_pos = 0;
			}

			v_par[par_pos] = num;
			par_pos++;

		} else {
			if (impar_pos == 5) {
				impar_pos = 0;
			}

			v_impar[impar_pos] = num;
			impar_pos++;
		}
	}

	printf("\nv_par = ");
	imprime_vetor(v_par);
	printf("\nv_impar = ");
	imprime_vetor(v_impar);

	return 0;
}