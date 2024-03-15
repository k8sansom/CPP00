#include "Contact.hpp"

Contact::Contact(void)
{
	// std::cout << "Constructor called" << std::endl;
	// return ;
}

Contact::~Contact(void)
{
	// std::cout << "Destructor called" << std::endl;
	// return ;
}

std::string	Contact::_print_len(std::string str) const {
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

std::string	Contact::_get_input(std::string str) const {
	std::string	input= "";
	bool		valid= false;

	while(!valid) {
		std::cout << str;
		std::getline(std::cin, input);
		if (!input.empty())
			valid = true;
		else
			std::cin.clear();
	}
	return (input);
}

void	Contact::add(void) {
	std::cin.ignore();
	this->_first_name = this->_get_input("First name: ");
    this->_last_name = this->_get_input("Last name: ");
    this->_nickname = this->_get_input("Nickname: ");
    this->_phone_number = this->_get_input("Phone number: ");
    this->_darkest_secret = this->_get_input("Darkest secret: ");
    std::cout << std::endl;
}

void	Contact::print(int index) const {
	std::cout << "|" << std::setw(10) << index;
    std::cout << "|" << std::setw(10) << this->_print_len(this->_first_name);
    std::cout << "|" << std::setw(10) << this->_print_len(this->_last_name);
    std::cout << "|" << std::setw(10) << this->_print_len(this->_nickname);
    std::cout << "|" << std::endl;
}

void	Contact::display(int index) const {
	if (this->_first_name.empty())
		return ;
    std::cout << "contact: " << index << std::endl;
    std::cout << "first name: " << this->_first_name << std::endl;
    std::cout << "last name: " << this->_last_name << std::endl;
    std::cout << "nickname: " << this->_nickname << std::endl;
}
