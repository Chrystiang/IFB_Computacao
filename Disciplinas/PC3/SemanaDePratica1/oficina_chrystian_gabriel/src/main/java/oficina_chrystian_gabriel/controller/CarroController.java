package oficina_chrystian_gabriel.controller;

import oficina_chrystian_gabriel.model.Carro;
import oficina_chrystian_gabriel.persistence.CarroDaoImp;

public class CarroController {
	public void incluir(Carro carro){
		CarroDaoImp cd = new CarroDaoImp();
		cd.incluir(carro);
	}
}
