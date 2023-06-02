#include <iostream>
#include <string>
#include <vector>
#include <fstream>


int main()
{
   int ageUtilisateur(16);
   int *ptr(0);  

	ptr= &ageUtilisateur;
	
	std::cout << "La valeur est :  " << *ptr << std::endl;   

	int *pointeur(0);
	pointeur = new int;
	if (pointeur == nullptr)
	{
		return 0;
	}

	*pointeur = 42;
	std::cout << "La valeur est :  " << *pointeur << std::endl;   

	delete pointeur;
	pointeur = 0;


   return 0;
}