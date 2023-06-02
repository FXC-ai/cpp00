#include <iostream>
#include <string>
#include <vector>
#include <fstream>


int main ()
{
	std::string line_to_add;									//Declaration de la variable de type str

	std::cout << "Ecrivez quelque chose :" <<std::endl;			//Affichage d'une phrase dans le terminal console OUT

	std::getline(std::cin, line_to_add);						//stocke du flux de la console dans line_to_add

	std::string nomFichier("learn.txt");						//Declaration de la variable str nomFichier
	std::ofstream monFlux(nomFichier.c_str(), std::ios::app);	//Declaration de l'objet monFlux qui permet de rediriger le flux vers le fichier nomFichier
																//La fonction c_str() permet de recuperer le pointeur de la variable nomFichier
																//ios::app signifie append, il s'agit d'ajouter la ligne a la fin du fichier
																

	if (monFlux)
	{
		monFlux << line_to_add <<std::endl;
	}

	monFlux.close();											//fermeture du flux pour ecrire

	std::ifstream inFile(nomFichier.c_str());					//Declaration de la variable inFile qui contient un objet ifstream
	int pos_caract(0);

	if (inFile)
	{
		while (std::getline(inFile, line_to_add))				//Lecture de la ligne pour la copier dans line_to_add
		{
			std::cout << line_to_add;							//Affichage de la ligne lue
			pos_caract = inFile.tellg();
			std::cout << " | Position du curseur : " << pos_caract << std::endl;				//Affichage de la ligne lue
			
		


		}
		//pos_caract = inFile.seekg(12, std::ios::end);
		std::cout << "Position du curseur : " << pos_caract << std::endl;				//Affichage de la ligne lue



	}

	return 0;
}