package oficina_chrystian_gabriel.model;

import java.io.Serializable;
import javax.persistence.Entity;
import javax.persistence.Table;
import javax.persistence.Column;
import javax.persistence.Id;
import javax.persistence.JoinColumn;
import javax.persistence.ManyToOne;

@Entity
@Table(name = "carro")
public class Carro implements Serializable{
	private static final long serialVersionUID = 1L;
	
	@Id
	@Column(name = "placa")
	private String placa;
	@Column(name = "cor")
	private String cor;
	@Column(name = "ano")
	private Integer ano;
	@Column(name = "anoModelo")
	private Integer anoModelo;
	@Column(name = "marca")
	private String marca;
	@Column(name = "modelo")
	private String modelo;
	
	@ManyToOne @JoinColumn(name = "cliente")
	private Cliente cliente;
	
	@ManyToOne @JoinColumn(name = "oficina")
	private Oficina oficina;

	public String getPlaca() {
		return placa;
	}

	public void setPlaca(String placa) {
		this.placa = placa;
	}

	public String getCor() {
		return cor;
	}

	public void setCor(String cor) {
		this.cor = cor;
	}

	public Integer getAno() {
		return ano;
	}

	public void setAno(Integer ano) {
		this.ano = ano;
	}

	public Integer getAnoModelo() {
		return anoModelo;
	}

	public void setAnoModelo(Integer anoModelo) {
		this.anoModelo = anoModelo;
	}

	public String getMarca() {
		return marca;
	}

	public void setMarca(String marca) {
		this.marca = marca;
	}

	public String getModelo() {
		return modelo;
	}

	public void setModelo(String modelo) {
		this.modelo = modelo;
	}

	public Cliente getCliente() {
		return cliente;
	}

	public void setCliente(Cliente cliente) {
		this.cliente = cliente;
	}

	public Oficina getOficina() {
		return oficina;
	}

	public void setOficina(Oficina oficina) {
		this.oficina = oficina;
	}
}
