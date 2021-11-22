package oficina_chrystian_gabriel.persistence;

import java.util.List;

import org.hibernate.Session;
import org.hibernate.SessionFactory;

import oficina_chrystian_gabriel.model.Carro;
import oficina_chrystian_gabriel.util.HibernateUtil;

public class CarroDaoImp implements CarroDao {
	private Session session;
	
	public void incluir(Carro carro) {
		session = null;
		try {
    	   SessionFactory sessionFactory = HibernateUtil.getSessionFactory();
    	   session = sessionFactory.openSession(); 
    	   session.beginTransaction(); 
    	   session.save(carro); 
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

	public void alterar(Carro carro) {
		// TODO Auto-generated method stub

	}

	public void excluir(Carro carro) {
		// TODO Auto-generated method stub

	}

	public List<Carro> listarTodos() {
		// TODO Auto-generated method stub
		return null;
	}

	public Carro buscarPelaPlaca(String placa) {
		// TODO Auto-generated method stub
		return null;
	}

}
