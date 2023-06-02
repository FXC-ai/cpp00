#include <iostream>
#include <string>

class Personnage
{
	private :
		int m_vie;
		int m_mana;
		std::string m_nomArme;
		int m_degatsArme;


	public :
		void recevoirDegats(int nbDegats)
		{

		}

		void attaquer(Personnage &cible)
		{


		}

		void boirePotionDeVie(int QuantitePotion)
		{

		}


		void changerArme(std::string nomNouvellArme, int degatsNouvelleArme)
		{

		}

		bool estVivant()
		{

		}


};





int main ()
{
	Personnage david, goliath;


	goliath.attaquer(david);
	david.boirePotionDeVie(20);
	goliath.attaquer(david);
	david.attaquer(goliath);

	goliath.changerArme("Hache", 40);
	goliath.attaquer(david);


	return 0;
}