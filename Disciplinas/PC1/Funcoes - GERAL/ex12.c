// Faça uma função que recebe a média final de um aluno por parâmetro 
// e retorna o seu conceito, conforme a tabela abaixo:
/*
   		Nota Conceito
	de 0,0 a 4,9  | D
	de 5,0 a 6,9  | C
	de 7,0 a 8,9  | B
	de 9,0 a 10,0 | A
*/

#include <stdio.h>

char conceito(float media) {
	if (media <= 4.9) {
		return 'D';
	} else if (media <= 6.9) {
		return 'C';
	} else if (media <= 8.9) {
		return 'B';
	} else {
		return 'A';
	}
}