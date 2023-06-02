#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		void	save(std::string firstName);
		void	display_contact(void);
	
	private:
		std::string	_firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNum;
		std::string _secret;
};

#endif