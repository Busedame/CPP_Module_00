#include "Crappy_Phonebook.hpp"

void	init_program(void)
{
	std::cout << "\033[0;36mWelcome to this crappy phonebook! Please enter one out of three commands:\033[0m" << std::endl;
	std::cout << "➕ 'ADD' to add a new contact." << std::endl;
	std::cout << "🔍 'SEARCH' to display a contact." << std::endl;
	std::cout << "❌ 'EXIT' to discard the phonebook, and exit the program." << std::endl;
	std::cout << "\033[0;36mNB! All commands are case sensitive.\033[0m" << std::endl;
}

int	main(void)
{
	std::string Input;
	PhoneBook phonebook;
	Contact	contact;

	init_program();
	while (1)
	{
		std::cout << "\033[0;33mType your command here: \033[0m"; std::cin >> Input;
		if (Input == "ADD")
			phonebook.Add_Contact_To_PhoneBook();
		else if (Input == "SEARCH")
			phonebook.Display_Contacts();
		else if (Input == "EXIT")
		{
			std::cout << "\033[0;36mExiting... All the contacts are now lost.\033[0m" << std::endl;
			return (0);
		}
		else
			std::cout << "\033[0;31mWrong command. Use 'ADD', 'SEARCH' or 'EXIT'.\033[0m" << std::endl;
	}
}
