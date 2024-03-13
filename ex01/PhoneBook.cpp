#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
    std::cout << "Constructor called" << std::endl;
    return ;
}

PhoneBook::~PhoneBook(){
    std::cout << "Destructor called" << std::endl;
    return ;
}

void    PhoneBook::welcome(void) const{
    std::cout << "Welcome to the 80s and their unbelievable technology!" << std::endl;
    std::cout << "This is your crappy awesome phonebook." << std::endl;
    std::cout << std::endl;
    std::cout << "--------------USAGE---------------" << std::endl;
    std::cout << "ADD\t: To add a contact." << std::endl;
    std::cout << "SEARCH\t: To search for a contact." << std::endl;
    std::cout << "EXIT\t: to quite the PhoneBook." << std::endl;
    std::cout << "----------------------------------" << std::endl;
    std::cout << std::endl;
}