// Faça uma função que leia um número não determinado de valores 
// positivos e retorna a média aritmética dos mesmos.

#include <stdio.h>

float calculaMedia(float *valores, int total) {
	float media = 0.0;

	for (int i = 0; i < total; i++) {
		media += valores[i]/total;
	}

	return media;
}