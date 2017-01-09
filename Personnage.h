#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string>


class Personnage {
	
	//Methodes
	public:
	void recevoirDegats(int nbDegats);
	void attaquer(Personnage &cible);
	void boirePotionDeVie(int quantitePotion);
	void changerArme(std::string nomNouvelleArme,int degatsNouvelleArme);
	bool estVivant();

	// attributs
	private:
	int m_vie;
	int m_mana;
	std::string m_nomArme; // il est pas recommandé de mettre des using namespace dans le .h
	int m_degatsArme;
};

#endif
