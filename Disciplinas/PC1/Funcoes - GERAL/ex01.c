// Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume

#include <stdio.h>
#include <math.h>

float calcVolume(float raio) {
	return ((4 * M_PI * pow(raio, 3)) / 3);
}