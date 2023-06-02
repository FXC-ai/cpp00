#include "contact.hpp"
#include "phonebook.hpp"
//#include "simonContact.hpp"
#include <iostream>
#include <string>
#include <stdio.h>

int main ()
{
	Phonebook phonebook;

	phonebook.modifyContact("Coind", "Franc", "FX", "1", "Im batman");
	phonebook.modifyContact("Coind", "Franc", "FX", "2", "Im batman");
	phonebook.modifyContact("Coind", "Franc", "FX", "3", "Im batman");
	phonebook.modifyContact("Coind", "Franc", "FX", "4", "Im batman");
	phonebook.modifyContact("Coind", "Franc", "FX", "5", "Im batman");
	phonebook.modifyContact("Coind", "Franc", "FX", "6", "Im batman");
	phonebook.modifyContact("Coind", "Franc", "FX", "7", "Im batman");
	phonebook.modifyContact("Coind", "Franc", "FX", "8", "Im batman");
	phonebook.modifyContact("CoindreauCoindreau", "Franc", "FX", "9", "Im batman");
	phonebook.modifyContact("CoindreauCoindreau", "Franc", "FX[poopodsfgpsdfg]", "9", "Im batman");


	// phonebook.display_list();
	// std::cout << phonebook.get_nbContacts() << std::endl;

	//std::cin.ignore();
	std::string prompt;
	//std::getline(std::cin, prompt);

	while (42)
	{
		std::getline(std::cin, prompt);
		std::cout << prompt << std::endl;
		if (prompt == "SEARCH")
		{
			//std::cout << "SEARCH" << std::endl;
			phonebook.display_list();

			std::cout << "Choose an id" << std::endl;
			while (42)
			{
				std::getline(std::cin, prompt);
				if (prompt.length() == 1)
				{

					/*
					IL FAUT VERIFIER QUE CEST UN NOMBRE
					S ASSSURER DU NOMBRE DE CONTACT ENREGISTRE
					
					*/
					std::cout << "ouioui" << phonebook.get_nbContacts() <<std::endl;

					long int id;
					id = std::stoi(prompt);
					if (id < phonebook.get_nbContacts())
					{
						std::cout << "oui l id" << std::endl;

					}

					//printf("test = %ld\n",test);
				}
			}


		}
		if (prompt == "ADD")
		{
			std::cout << "ADD" << std::endl;

		}
		if (prompt == "EXIT")
		{
			return (0);
		}
	}



	return (0);
}