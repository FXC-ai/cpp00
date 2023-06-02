#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "contact.hpp"

class Phonebook 
{
	public:
		Phonebook(void);
		~Phonebook(void);
		void modifyContact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret);
		int get_nbContacts(void);
		void display_contact(int index);
		void display_list(void);

	private:
		Contact tab_contact[8];
		static int _nbContacts;
		static int _totalContacts;

};

#endif