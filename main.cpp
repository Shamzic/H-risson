#include <iostream>
#include "Personnage.h"

using namespace std;

int main (){
	
	// Création de personnages
	Personnage david("David","Epée aiguisée",20);
	Personnage goliath("Goliath","Epée enflammée",58);
	
	// AU COMBAAAAAAT
	goliath.attaquer(david);
	david.boirePotionDeVie(20);
	goliath.attaquer(david);
	david.attaquer(goliath);
	
	goliath.changerArme("Double hache tranchante",45);
	goliath.attaquer(david);
	
	// Temps mort, Voyons voir la vie de chacun..
	
	cout << "David : "<< endl;
	david.afficherEtat();
	cout << "Goliath : " << endl;
	goliath.afficherEtat();
	
	return 0;
}
