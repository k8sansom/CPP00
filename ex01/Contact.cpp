#include "Contact.hpp"

Contact::Contact{}

Contact::~Contact{}

std::string	Contact::_getInput(std::string str) const
{
	std::string	input = "";
	bool		valid = false;
	do
	{
		std::cout << str << std::flush;
		std::getline(std::cin, input);
		if (std::cin.good() && !input.empty())
			valid = true;
		else
		{
			std::cin.clear();
			std::cout << "Invalid input, please try again." << std::endl;
		}
	} while (!valid);
	return (input);
}