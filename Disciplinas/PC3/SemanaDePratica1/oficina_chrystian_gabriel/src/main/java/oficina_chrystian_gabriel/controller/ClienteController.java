package oficina_chrystian_gabriel.controller;

import oficina_chrystian_gabriel.model.Cliente;
import oficina_chrystian_gabriel.persistence.ClienteDaoImp;

public class ClienteController {
	public void incluir(Cliente cliente){
		ClienteDaoImp cd = new ClienteDaoImp();
		cd.incluir(cliente);
	}
}
