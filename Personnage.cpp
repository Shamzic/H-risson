	#include <string>
	#include "Personnage.h"

	using namespace std;
	
	// Constructeurs
	
	Personnage::Personnage() : m_nom("Toto"),m_vie(100),m_mana(100)
	{
		//Rien à mettre ici tout est ok
	}
	
/* // Equivalent à ..
 * 
	Personnage::Personnage()
	{
		m_vie = 100;
		m_mana = 100;
		m_nomArme = "Epée rouillée";
		m_degatsArme = 10;		
	}
*/	
	Personnage::Personnage(string nom,string nomArme,int degatsArme) : m_nom(nom), m_vie(100),
	m_mana(100),m_arme(nomArme,degatsArme)
	{}
	
	Personnage::Personnage(string nom, int vie, int mana, string nomArme, int degatsArme) : 
	m_nom(nom), m_vie(vie), m_mana(mana),m_arme(nomArme,degatsArme)
	{}
	
	// Destructeur
	Personnage::~Personnage()
	{
		// Rien à mettre car pas d'alloc dynamique
	}
	
	void Personnage::recevoirDegats(int nbDegats)
	{
		
		m_vie -= nbDegats;
		cout << m_nom << " reçoit "<<nbDegats<<" dégats.. !"<<endl;
		
		if(m_vie <0) // cas valeurs négatives si le mec s'est fait défoncé la tronche
		{
			cout << m_nom << " est mort !!!"<<endl;
			m_vie = 0;
		}
	}
	
	void Personnage::attaquer(Personnage &cible)
	{
		cout<< m_nom << " attaque "<< cible.getNom()<< endl;
		cible.recevoirDegats(m_arme.getDegats()); // inflige dégats à la cible en fonction des dégats de l'arme 
											// Prochainement : dégats en fonction des sorts
	}
	
	void Personnage::boirePotionDeVie(int quantitePotion)
	{
		m_vie += quantitePotion;
		
		if(m_vie>100) // si le mec en a trop pris, on le fait redescendre sur terre
		{
			m_vie = 100;
		}	
		
	}
	void Personnage::changerArme(string nomNouvelleArme,int degatsNouvelleArme)
	{
		m_arme.changer(nomNouvelleArme,degatsNouvelleArme);
		
	}
	
	bool Personnage::estVivant() const
	{
		if(m_vie>0)
			return true;
		else
			return false;
	}
	
	void Personnage::afficherEtat() const
	{
		cout << "Vie : "<< m_vie << endl;
		cout << "Mana : "<< m_mana << endl;
		m_arme.afficher();		
	}
	
	// Accesseur
	
	string Personnage::getNom() const
	{
		return m_nom;
	}


