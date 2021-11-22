// Faça uma função que recebe, por parâmetro, um valor N e calcula e 
// escreve a tabuada de 1 até N. Mostre a tabuada na forma:
//
// 1 x N = N
// 2 x N = 2N
// ...
// N x N = N^2 

#include <stdio.h>

void tabuada(int N) {
	for (int i = 1; i <= N; i++) {
		int calc = i * N;
		printf("%d x %d = %d\n", i, N, calc);
	}
}