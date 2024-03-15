#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	// std::cout << "Constructor called" << std::endl;
	// return ;
}

PhoneBook::~PhoneBook(){
	// std::cout << "Destructor called" << std::endl;
	// return ;
}

int     PhoneBook::_read_input() const {
    int     input = -1;
    bool    valid = false;
    while (!valid)
    {
        std::cout << "Index: ";
        std::cin >> input;
        if (std::cin.good() && (input > 0 && input < 9))
            valid = true;
        else {
            std::cin.clear();
            input = -1;
            std::cout << "Invalid index, try again" << std::endl;
        }
    }
    return (input);
}

void    PhoneBook::add(void) {
	static int	i;
	this->_contacts_arr[i % 8].add();
	this->_contacts_arr[i % 8].set_index(i + 1 % 9);
	i++;
}

void    PhoneBook::print_phonebook(void) const {
	for (int i = 0; i < 8; i++)
		this->_contacts_arr[i].print(i + 1);
}

void    PhoneBook::search(void) const {
	int	index;

	index = this->_read_input();
	this->_contacts_arr[index - 1].display(index);
}

void    PhoneBook::welcome(void) const{
    std::cout << "Welcome to the 80s and their unbelievable technology!" << std::endl;
    std::cout << "This is your crappy awesome phonebook." << std::endl;
    std::cout << "ADD\\n		-->will add a contact." << std::endl;
    std::cout << "SEARCH\\n	-->will search for a contact." << std::endl;
    std::cout << "EXIT\\n		-->will quit the PhoneBook." << std::endl;
}
