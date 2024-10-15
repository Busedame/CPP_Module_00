#include "Crappy_Phonebook.hpp"

void	exit_program(void)
{
	std::string	Input;

	while (1)
	{
		std::cout << "Are you sure you want to exit? Y/N: "; std::cin >> Input;
		if ("Y" == convert_input_to_uppercase(Input) || "YES" == convert_input_to_uppercase(Input))
		{ 
			std::cout << "\033[0;36mExiting... All the contacts are now lost.\033[0m" << std::endl;
			exit(0);
		}
		else if ("N" == convert_input_to_uppercase(Input) || "NO" == convert_input_to_uppercase(Input))
		{
			std::cout << "Exit cancelled." << std::endl;
			return ;
		}
		else
			std::cout << "\033[0;31mWrong input. Exit cancelled. Enter Y or N.\033[0m" << std::endl;
	}
}

std::string convert_input_to_uppercase(std::string &Input)
{
	std::string UpperCaseInput = Input;
	for (size_t i = 0; i < UpperCaseInput.length(); i++)
		UpperCaseInput[i] = toupper(UpperCaseInput[i]);
	return UpperCaseInput;
}


void	init_program(void)
{
	std::cout << "\033[0;36mWelcome to this crappy phonebook! Please enter one out of three commands:\033[0m" << std::endl;
	std::cout << "➕ 'ADD' to add a new contact." << std::endl;
	std::cout << "🔍 'SEARCH' to display existing contacts." << std::endl;
	std::cout << "❌ 'EXIT' to discard the phonebook, and exit the program." << std::endl;
}
