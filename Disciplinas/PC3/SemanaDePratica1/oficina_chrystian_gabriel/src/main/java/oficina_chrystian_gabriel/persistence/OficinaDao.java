package oficina_chrystian_gabriel.persistence;

import java.util.List;

import oficina_chrystian_gabriel.model.Carro;
import oficina_chrystian_gabriel.model.Oficina;

public interface OficinaDao {
	public void incluir(Oficina oficina);
	public void alterar(Oficina oficina);
	public void excluir(Oficina oficina);
	public List<Oficina> listarTodos();
	public Oficina buscarPeloCodigo(Integer codigo);
	public List<Oficina> buscarPeloCarro(Carro carro);
}