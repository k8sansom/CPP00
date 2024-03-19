#include "Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

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
}

void	Contact::print(int index) const {
	std::cout << "|" << std::setw(10) << index;
	if (this->_first_name.length() > 10)
		std::cout << "|" << std::setw(10) << this->_first_name.substr(0, 9) + ".";
	else
		std::cout << "|" << std::setw(10) << this->_first_name;
    if (this->_last_name.length() > 10)
    	std::cout << "|" << std::setw(10) << this->_last_name.substr(0, 9) + ".";
	else
		std::cout << "|" << std::setw(10) << this->_last_name;
	if (this->_nickname.length() > 10)
    	std::cout << "|" << std::setw(10) << this->_nickname.substr(0, 9) + ".";
	else
		std::cout << "|" << std::setw(10) << this->_nickname;
    std::cout << "|" << std::endl;
}

void	Contact::print_contact() const {
    std::cout << "first name: " << this->_first_name << std::endl;
    std::cout << "last name: " << this->_last_name << std::endl;
    std::cout << "nickname: " << this->_nickname << std::endl;
}
