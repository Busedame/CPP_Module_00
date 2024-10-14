#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
#include <iomanip>

class Contact
{
	public:
		Contact();
		~Contact();
		void	Add_New_Contact();
		void	Display_All_Contacts(int ContactIndex);
		void	Display_One_Contact();
	private:
		std::string	FirstName;
		std::string	LastName;
		std::string	NickName;
		std::string	PhoneNumber;
		std::string	DarkestSecret;
		void	Add_Contact_Field(std::string prompt, std::string &field, int entry);
		bool	Is_Alphabetical(std::string Name);
		bool	Is_Numerical(std::string PhoneNumber);
};
#endif