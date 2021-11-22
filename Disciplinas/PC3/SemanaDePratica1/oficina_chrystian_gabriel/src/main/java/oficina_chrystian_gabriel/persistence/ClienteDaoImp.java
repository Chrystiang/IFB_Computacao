package oficina_chrystian_gabriel.persistence;

import java.util.List;

import org.hibernate.Session;
import org.hibernate.SessionFactory;

import oficina_chrystian_gabriel.model.Carro;
import oficina_chrystian_gabriel.model.Cliente;
import oficina_chrystian_gabriel.util.HibernateUtil;

public class ClienteDaoImp implements ClienteDao {
	private Session session;
	
	public void incluir(Cliente cliente) {
		session = null;
		try {
    	   SessionFactory sessionFactory = HibernateUtil.getSessionFactory();
    	   session = sessionFactory.openSession(); 
    	   session.beginTransaction(); 
    	   session.save(cliente); 
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

	public void alterar(Cliente cliente) {
		// TODO Auto-generated method stub

	}

	public void excluir(Cliente cliente) {
		// TODO Auto-generated method stub

	}

	public List<Cliente> listarTodos() {
		// TODO Auto-generated method stub
		return null;
	}

	public Cliente buscarPeloCPF(String cpf) {
		// TODO Auto-generated method stub
		return null;
	}

	public List<Cliente> buscarPeloCarro(Carro carro) {
		// TODO Auto-generated method stub
		return null;
	}

}
