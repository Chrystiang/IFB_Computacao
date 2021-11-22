package oficina_chrystian_gabriel.controller;

import oficina_chrystian_gabriel.model.Oficina;
import oficina_chrystian_gabriel.persistence.OficinaDaoImp;

public class OficinaController {
	public void incluir(Oficina oficina){
		OficinaDaoImp cd = new OficinaDaoImp();
		cd.incluir(oficina);
	}
}
