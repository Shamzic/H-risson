#include <string>
#include "Personnage.h"

using namespace std;
	
	void Personnage::recevoirDegats(int nbDegats)
	{
		m_vie -= nbDegats;
		
		if(m_vie <0) // cas valeurs négatives si le mec s'est fait défoncé la tronche
		{
			m_vie = 0;
		}
	}
	
	void Personnage::attaquer(Personnage &cible)
	{
		cible.recevoirDegats(m_degatsArme); // inflige dégats à la cible en fonction des dégats de l'arme 
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
		m_nomArme = nomNouvelleArme; // pratique la copie de chaine de char en C++ <3
		m_degatsArme = degatsNouvelleArme;
		
	}
	
	bool Personnage::estVivant()
	{
		if(m_vie>0)
			return true;
		else
			return false;
	}


