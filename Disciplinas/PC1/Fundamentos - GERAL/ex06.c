// Dados o número n de alunos de uma turma de Programação 1  e suas notas da primeira prova, 
// determinar a maior e a menor nota obtidas por essa turma (Nota máxima = 100 e nota mínima = 0). 

#include <stdio.h>

int main() {
	int maior_nota = 0;
	int menor_nota = 100;
	int n;

	printf("Insira a quantidade de alunos: \n");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		int nota = 0;
		printf("Nota do %dº aluno: \n", i);
		scanf("%d", &nota);

		if (nota > maior_nota) {
			maior_nota = nota;
		} else if (nota < menor_nota) {
			menor_nota = nota;
		}
	}

	printf("\n> A menor nota foi %d e a maior %d.", menor_nota, maior_nota);
	return 0;
}