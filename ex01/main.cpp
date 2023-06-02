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

	std::cout << phonebook.get_nbContacts() << std::endl;


	phonebook.modifyContact("Coind", "Franc", "FX", "076", "Im batman");

	phonebook.display_contact(0);
	phonebook.display_contact(1);

	std::cout << phonebook.get_nbContacts() << std::endl;

	phonebook.modifyContact("Coind", "Franc", "FX", "076", "Im batman");

	phonebook.display_contact(1);

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