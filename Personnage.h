#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string>
#include "Arme.h"


class Personnage {
	
	//Methodes
	public:
	
	Personnage(); 
	// Constructeur 1
	
	Personnage(std::string nom,std::string nomArme, int degatsArme); 
	// Constructeur 2
	
	Personnage(std::string nom,int vie, int mana, std::string nomArme, int degatsArme); 
	// Constructeur 3
	
	~Personnage(); // Destructeur
	
	void recevoirDegats(int nbDegats);
	void attaquer(Personnage &cible);
	void boirePotionDeVie(int quantitePotion);
	void changerArme(std::string nomNouvelleArme,int degatsNouvelleArme);
	bool estVivant() const;
	void afficherEtat() const;
	std::string getNom() const;
	

	// attributs
	private:
	int m_vie;
	int m_mana;
	std::string m_nom;
	// On va remplacer ces attributs par une classe Arme
	/* 
	std::string m_nomArme; 
	// C'pas recommandé de mettre des using namespace dans le .h
	int m_degatsArme;
	* */
	Arme m_arme; // L'arme du perso !!!
	
	
};

#endif
