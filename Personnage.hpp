#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string>

class Personnage
{

	private :
		int m_vie;
		int m_mana;
		std::string m_nomArme;
		int m_degatsArme;


	public :
		void recevoirDegats(int nbDegats);
		void attaquer(Personnage &cible);
		void boirePotionDeVie(int QuantitePotion);
		void changerArme(std::string nomNouvellArme, int degatsNouvelleArme);
		bool estVivant();

};

#endif