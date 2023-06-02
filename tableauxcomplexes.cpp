#include <iostream>
#include <string>
#include <vector>
#include <fstream>





int main ()
{

	std::vector<std::vector<int> > matrix;

	matrix.push_back(std::vector<int>(5,0));
	matrix.push_back(std::vector<int>(5,0));
	matrix.push_back(std::vector<int>(5,0));
	matrix.push_back(std::vector<int>(4,0));

	matrix[3].push_back(42);
	
	std::cout << matrix[3][4] << std::endl;
	std::cout << matrix[1][4] << std::endl;

	matrix[1][4] = 42;

	std::cout << matrix[1][4] << std::endl;
	std::cout << matrix.size() << std::endl;

   std::string prenom("Albert"); 
   std::string nom("Einstein");
   
   std::string total;    //Une chaîne vide
   total += prenom; //On ajoute le prénom à la chaîne vide
   total += " ";    //Puis un espace
   total += nom;    //Et finalement le nom de famille

   std::cout << "Vous vous appelez " << total << "." << std::endl; 



	return 0;
}