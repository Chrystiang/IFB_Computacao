// Faça uma função que recebe a idade de uma pessoa em anos, 
// meses e dias e retorna essa idade expressa em dias.

#include <stdio.h>

int diasDeVida(int anos, int meses, int dias) {
	return (dias + (meses * 30) + (anos * 365));
}