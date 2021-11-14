package projetos;

public enum SituacaoAluno {
	APROVADO(1),
	REPROVADO_POR_MEDIA(2),
	REPROVADO_POR_FALTA(3),
	REPROVADO_POR_NOTA_E_FALTA(4);
	
	int valor;
	
	private SituacaoAluno(int valor) {
		this.valor = valor;
	}
	
	public int getValor() {
		return valor;
	}
}