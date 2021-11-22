// Faça uma função que recebe a idade de um nadador por parâmetro
// e retorna, também por parâmetro, a categoria desse nadador de 
// acordo com a tabela abaixo:
/*
    		Idade
	5 a 7 anos   | Infantil A
	8 a 10 anos  | Infantil B
	11 a 13 anos | Juvenil A
	14 a 17 anos | Juvenil B
	>=18 anos    | Adulto
*/

#include <stdio.h>

char *categoria(int idade) {
	if (idade >= 5 && idade <= 7) {
		return "Infantil A";
	} else if (idade <= 10) {
		return "Infantil B";
	} else if (idade <= 13) {
		return "Juvenil A";
	} else if (idade <= 17) {
		return "Juvenil B";
	} else {
		return "Adulto";
	}
}