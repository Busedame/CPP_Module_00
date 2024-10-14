#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP
#include <iostream>
#include <cctype>
#include <cstring>
#include "Contact_class.hpp"

class	PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		Contact Contacts[8];
		int		NoContact;
		int		TotContacts;
		void	Add_Contact_To_PhoneBook(void);
		void	Display_Contacts(void);
		void	Display_Contact_Header(void);
		int		Prompt_For_One_Contact(void);
};
#endif