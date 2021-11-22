// Escreva uma função que recebe por parâmetro um valor inteiro e positivo N 
// e retorna o valor de S.
// S = 1 + 1⁄2 + 1/3 + 1⁄4 + 1/5 + 1/N.

#include <stdio.h>

float calcS(int N) {
	return (1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + 1.0/5.0 + 1.0/(float)N);
}