package oficina_chrystian_gabriel.persistence;

import java.util.List;

import oficina_chrystian_gabriel.model.Carro;

public interface CarroDao {
	public void incluir(Carro carro);
	public void alterar(Carro carro);
	public void excluir(Carro carro);
	public List<Carro> listarTodos();
	public Carro buscarPelaPlaca(String placa);
}