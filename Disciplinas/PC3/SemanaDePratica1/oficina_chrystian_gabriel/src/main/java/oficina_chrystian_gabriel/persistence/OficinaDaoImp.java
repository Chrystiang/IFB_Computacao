package oficina_chrystian_gabriel.persistence;

import java.util.List;

import org.hibernate.Session;
import org.hibernate.SessionFactory;

import oficina_chrystian_gabriel.model.Carro;
import oficina_chrystian_gabriel.model.Oficina;
import oficina_chrystian_gabriel.util.HibernateUtil;

public class OficinaDaoImp implements OficinaDao {
	private Session session;
	
	public void incluir(Oficina oficina) {
		session = null;
		try {
    	   SessionFactory sessionFactory = HibernateUtil.getSessionFactory();
    	   session = sessionFactory.openSession(); 
    	   session.beginTransaction(); 
    	   session.save(oficina); 
    	   session.getTransaction().commit();
    	   
		} catch (Exception e) { 
			if(session != null){
				session.getTransaction().rollback(); 
			}
			e.printStackTrace();
		} finally {
		    if(session != null){
		       session.close();
		    }
		}
	}

	public void alterar(Oficina oficina) {
		// TODO Auto-generated method stub

	}

	public void excluir(Oficina oficina) {
		// TODO Auto-generated method stub

	}

	public List<Oficina> listarTodos() {
		// TODO Auto-generated method stub
		return null;
	}

	public Oficina buscarPeloCodigo(Integer codigo) {
		// TODO Auto-generated method stub
		return null;
	}

	public List<Oficina> buscarPeloCarro(Carro carro) {
		// TODO Auto-generated method stub
		return null;
	}

}
