#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP
#include <iostream>
#include <cctype>
#include <cstring>
#include <limits>
#include <cstdlib>
#include "Contact_class.hpp"

class	PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void	Add_Contact_To_PhoneBook(void);
		void	Display_Contacts(void);
	private:
		int		Prompt_For_One_Contact(void);
		void	Display_Contact_Header(void);
		Contact Contacts[8];
		int		NoContact;
		int		TotContacts;
};
#endif