#include <iostream>
#include <string>

using namespace std;

class Personnage {
	
	
	//Methodes
	public:
	void recevoirDegats(int nbDegats){
	
	}
	
	void attaquer(Personnage &cible){
		
	}
	
	void boirePotionDeVie(int quantitePotion){
		
	}
	void changerArme(string nomNouvelleArme,int degatsNouvelleArme){
		
	}
	
	bool estVivant(){
		return true;
	}
	
	// attributs
	private:
	int m_vie;
	int m_mana;
	string m_nomArme;
	int m_degatsArme;
	
	
};

int main (){
	
	Personnage david, goliath;
	
	goliath.attaquer(david);
	david.boirePotionDeVie(20);
	goliath.attaquer(david);
	david.attaquer(goliath);
	
	goliath.changerArme("Double hache tranchante",45);
	goliath.attaquer(david);
	
	
	
	return 0;
}

