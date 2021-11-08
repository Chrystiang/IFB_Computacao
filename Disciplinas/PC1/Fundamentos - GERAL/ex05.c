// Uma loja de discos anota diariamente durante o mês de março a quantidade de discos vendidos. 
// Determinar em que dia desse mês ocorreu a maior venda e qual foi a quantidade de discos vendida nesse dia. 

#include <stdio.h>

int main() {
	int dia_maior_venda = 1;
	int maior_venda = 0;

	int res = 1;

	for (int dia = 1; dia <= 31; dia++) {
		int venda = 0;
		printf("Vendas do dia %d: \n", dia);
		scanf("%d", &venda);

		if (venda >= maior_venda) {
			dia_maior_venda = dia;
			maior_venda = venda;
		}
	}

	printf("\n> O dia da maior venda foi o dia %d, com %d vendas.", dia_maior_venda, maior_venda);
	return 0;
}