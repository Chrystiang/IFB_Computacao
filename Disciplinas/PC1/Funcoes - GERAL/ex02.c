// Escreva uma função que recebe as 3 notas de um aluno por parâmetro
// e uma letra. Se a letra for A o procedimento calcula a média aritmética
// das notas do aluno, se for P, a sua média ponderada (pesos: 5, 3 e 2)
// e se for H, a sua média harmônica. A média calculada também deve retornar 
// por parâmetro.

#include <stdio.h>

float calcMedia(char procedimento, float n1, float n2, float n3) {
	if (procedimento == 'A') {
		return ((n1 + n2 +n3) / 3.0);
	} else if (procedimento == 'P') {
		return ((n1 * 5.0 + n2 * 3.0 + n3 * 2.0) / (5.0 + 3.0 + 2.0));
	} else {
		return ((3.0) / ((1.0 / n1) + (1.0 / n2) + (1.0 / n3)));
	}
}