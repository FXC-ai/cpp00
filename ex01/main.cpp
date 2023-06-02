#include "contact.hpp"
#include "phonebook.hpp"
//#include "simonContact.hpp"
#include <iostream>
#include <string>

int main ()
{
	//Contact	tab_contacts[8];

	Phonebook phonebook;

	//Contact Contact0("Coindreau", "François-Xavier", "FX", "076/654.54.44", "I am Batman");
	//Contact Contact1("Coindreau", "François-Xavier", "FX", "076/303.70.88", "I am Batman");

	//Contact0.displayContact();

	//tab_contacts[0].displayContact();

	//std::cout << Contact::get_nbContacts() ;

	// Contact		simon;

	// simon.setFirstName("CO");
	// simon.setDarkestSecret("COOL");

	// simon.display_contact();


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


	phonebook.display_list();
	std::cout << phonebook.get_nbContacts() << std::endl;

	std::string prompt;
	std::cin >> prompt; 

	while (42)
	{
		if (prompt == "SEARCH")
		{
			std::cout << "SEARCH" << std::endl;
		}
		if (prompt == "ADD")
		{
			std::cout << "ADD" << std::endl;

		}
		if (prompt == "EXIT")
		{
			return (0);
		}
		std::cin >> prompt;
	}



	return (0);
}