// Faça uma função que recebe, por parâmetro, a hora de inicio 
// e a hora de término de um jogo, ambas subdivididas em 2 valores 
// distintos: horas e minutos. O procedimento deve retornar, também 
// por parâmetro, a duração do jogo em horas e minutos, considerando 
// que o tempo máximo de duração de um jogo é de 24 horas e que o 
// jogo pode começar em um dia e terminar no outro.

#include <stdio.h>

void calcDuracao(int *duracao, int horaInicial, int minutoInicial, int horaFinal, int minutoFinal) {
	if (horaInicial <= horaFinal) {
		duracao[0] = horaFinal - horaInicial;
	} else {
		duracao[0] = (24 - horaInicial) + horaFinal;
	}

	if (minutoInicial <= minutoFinal) {
		duracao[1] = minutoFinal - minutoInicial;
	} else {
		duracao[1] = (60 - minutoInicial) + minutoFinal;
	}
}

/* Para testar:

int main() {
	int d[2];
	calcDuracao(d, 10, 30, 5, 30);

    printf("a partida durou %dh%dmin", d[0], d[1]);
    return 0;
}
*/