// Faça uma função que recebe um valor inteiro e verifica
// se o valor é par ou ímpar. A função deve retornar um valor 
// que represente booleano.

#include <stdio.h>

int e_par(int numero) {
	if (numero%2 == 0){
		return 1;
	}
	
	return 0;
}