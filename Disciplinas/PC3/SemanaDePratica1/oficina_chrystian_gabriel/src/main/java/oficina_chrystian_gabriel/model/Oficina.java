package oficina_chrystian_gabriel.model;

import java.io.Serializable;
import java.util.List;

import javax.persistence.Entity;
import javax.persistence.FetchType;
import javax.persistence.Table;
import javax.persistence.CascadeType;
import javax.persistence.Column;
import javax.persistence.Id;
import javax.persistence.OneToMany;

@Entity
@Table(name = "oficina")
public class Oficina implements Serializable{
	private static final long serialVersionUID = 1L;
	
	@Id
	@Column(name = "codigo")
	private Integer codigo;
	@Column(name = "nome")
	private String nome;
	@Column(name = "especialidade")
	private String especialidade;
	@Column(name = "endereco")
	private String endereco;
	
	@OneToMany (mappedBy="oficina", targetEntity=Carro.class, cascade=CascadeType.ALL, fetch=FetchType.EAGER)
	private List<Carro> carros;
	
	public List<Carro> getCarros() {
		return carros;
	}
	public void setCarros(List<Carro> carros) {
		this.carros = carros;
	}
	public Integer getCodigo() {
		return codigo;
	}
	public void setCodigo(Integer codigo) {
		this.codigo = codigo;
	}
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public String getEspecialidade() {
		return especialidade;
	}
	public void setEspecialidade(String especialidade) {
		this.especialidade = especialidade;
	}
	public String getEndereco() {
		return endereco;
	}
	public void setEndereco(String endereco) {
		this.endereco = endereco;
	}
}
