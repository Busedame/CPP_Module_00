#include "Crappy_Phonebook.hpp"

int	main(void)
{
	std::string Input;
	PhoneBook phonebook;
	Contact	contact;

	init_program();
	while (1)
	{
		std::cout << "\033[0;33mType your command here: \033[0m"; std::cin >> Input;
		if ("ADD" == convert_input_to_uppercase(Input))
			phonebook.Add_Contact_To_PhoneBook();
		else if ("SEARCH" == convert_input_to_uppercase(Input))
			phonebook.Display_Contacts();
		else if ("EXIT" == convert_input_to_uppercase(Input))
			exit_program();
		else
			std::cout << "\033[0;31mWrong command. Use 'ADD', 'SEARCH' or 'EXIT'.\033[0m" << std::endl;
	}
}
