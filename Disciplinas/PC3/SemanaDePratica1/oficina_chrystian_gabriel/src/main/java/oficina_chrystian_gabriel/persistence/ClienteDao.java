package oficina_chrystian_gabriel.persistence;

import java.util.List;

import oficina_chrystian_gabriel.model.Carro;
import oficina_chrystian_gabriel.model.Cliente;

public interface ClienteDao {
	public void incluir(Cliente cliente);
	public void alterar(Cliente cliente);
	public void excluir(Cliente cliente);
	public List<Cliente> listarTodos();
	public Cliente buscarPeloCPF(String cpf);
	public List<Cliente> buscarPeloCarro(Carro carro);
}