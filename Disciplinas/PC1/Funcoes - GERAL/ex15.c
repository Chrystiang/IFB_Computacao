// Escreva uma função que recebes 3 valores reais X, Y e Z e que 
// verifique se esses valores podem ser os comprimentos dos lados 
// de um triângulo e, neste caso, retornar qual o tipo de triângulo formado. 
// Para que X, Y e Z formem um triângulo é necessário que a seguinte 
// propriedade seja satisfeita: o comprimento de cada lado de um triângulo 
// é menor do que a soma do comprimento dos outros dois lados. 
// O procedimento deve identificar o tipo de triângulo formado observando 
// as seguintes definições:
/*
	o Triângulo Equilátero: os comprimentos dos 3 lados são iguais.
	o Triângulo Isósceles: os comprimentos de 2 lados são iguais.
	o Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.
*/

#include <stdio.h>

void tipoTriangulo(float X, float Y, float Z) {
	if ((X > (Y + Z)) || (Y > (X + Z)) || (Z > (X + Y))) {
		printf("Não é um triângulo!");
	} else {
		if (X == Y && Y == Z) {
			printf("É um triângulo equilátero!");
		} else if (X != Y && Y != Z) {
			printf("É um triângulo escaleno!");
		} else {
			printf("É um triângulo isósceles!");
		}
	}
}