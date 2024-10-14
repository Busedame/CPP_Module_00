#include "Contact_class.hpp"

Contact::Contact(){}
Contact::~Contact(){}

void	Contact::Add_New_Contact()
{
	Add_Contact_Field("Enter first name: ", FirstName, 1);
	Add_Contact_Field("Enter last name: ", LastName, 2);
	Add_Contact_Field("Enter nickname: ", NickName, 3);
	Add_Contact_Field("Enter phone number: ", PhoneNumber, 4);
	Add_Contact_Field("Enter darkest secret: ", DarkestSecret, 5);
}

void	Contact::Add_Contact_Field(std::string prompt, std::string &field, int entry)
{
	while (1)
	{
		std::cout << prompt; std::getline(std::cin >> std::ws, field);
		if ((entry == 1 || entry == 2) && !Is_Alphabetical(field))
		{
			std::cout << "Only alphabetical characters allowed. Try again." << std::endl;
			continue ;
		}
		else if ((entry == 1 || entry == 2) && Is_Alphabetical(field))
			break ;
		if (entry == 4 && !Is_Numerical(field))
			std::cout << "Only numerical characters allowed. Try again." << std::endl;
		else
			break ;
	}
}

bool	Contact::Is_Alphabetical(std::string Name)
{
	for (size_t i = 0; i < Name.length(); i++)
	{
		if (!std::isalpha(Name[i]) && !std::isspace(Name[i]))
			return (false);
	}
	return (true);
}
bool	Contact::Is_Numerical(std::string PhoneNumber)
{
	for (size_t i = 0; i < PhoneNumber.length(); i++)
	{
		if (!std::isdigit(PhoneNumber[i]) && PhoneNumber[i] != '+')
			return (false);
	}
	return (true);
}

void	Contact::Display_One_Contact(void)
{
	std::cout << "First name: " << FirstName << std::endl;
	std::cout << "Last name: " << LastName << std::endl;
	std::cout << "Nickname: " << NickName << std::endl;
	std::cout << "Phone number: " << PhoneNumber << std::endl;
	std::cout << "Darkest secret: " << DarkestSecret << std::endl;
}

void	Contact::Display_All_Contacts(int ContactIndex)
{
	std::cout << "|" << std::setw(10) << ContactIndex << "|";
	if (FirstName.length() > 10)
		std::cout << std::setw(10) << FirstName.substr(0, 9) + "." << "|";
	else
		std::cout << std::setw(10) << FirstName << "|";
	if (LastName.length() > 10)
		std::cout << std::setw(10) << LastName.substr(0, 9) + "." << "|";
	else
		std::cout << std::setw(10) << LastName << "|";
	if (NickName.length() > 10)
		std::cout << std::setw(10) << NickName.substr(0, 9) + "." << "|";
	else
		std::cout << std::setw(10) << NickName << "|";
	std::cout << std::endl;
}
