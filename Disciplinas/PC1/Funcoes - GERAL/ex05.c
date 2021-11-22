// Faça uma função que recebe por parâmetro o tempo de duração 
// de uma fábrica expressa em segundos e retorna também por
// parâmetro esse tempo em horas, minutos e segundos.

#include <stdio.h>

void duracao(int *tempo, int segundos) {
	tempo[0] = segundos / 3600;
	tempo[1] = (segundos - (3600 * tempo[0])) / 60;
	tempo[2] = (segundos - (3600 * tempo[0]) - (tempo[1] * 60));
}

/* Para testar:

int main() {
	int tempo[3];
	duracao(tempo, 10000);
	
    printf("duração: %dh%dmin%ds", tempo[0], tempo[1], tempo[2]);

    return 0;
}
*/