/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksansom <ksansom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 10:15:27 by ksansom           #+#    #+#             */
/*   Updated: 2024/03/19 12:45:03 by ksansom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
    std::cout << "Welcome to the 80s and their unbelievable technology!" << std::endl;
    std::cout << "This is your crappy awesome phonebook." << std::endl;
    std::cout << "ADD\\n		-->will add a contact." << std::endl;
    std::cout << "SEARCH\\n	-->will search for a contact." << std::endl;
    std::cout << "EXIT\\n		-->will quit the PhoneBook." << std::endl;
}

PhoneBook::~PhoneBook() {}

void    PhoneBook::add(void) {
	static int	i;

	this->_contacts_arr[i % 8].add();
	this->_contacts_arr[i % 8].index = i + 1 % 9;
	i++;
}

void    PhoneBook::search(void) const {
	int     index = -1;
    bool    valid = false;

    for (int i = 0; i < 8; i++)
		this->_contacts_arr[i].print(i + 1);
    while (!valid)
    {
		std::cout << "Index: " <<std::flush;
		std::cin >> index;
		if (std::cin.good() && (index >= 1 && index <= 8))
			valid = true;
		else if (std::cin.eof())
			exit (1);
        else {
			std::cin.clear();
			std::cin.ignore(2000,'\n');
			std::cout << "Invalid index, try again" << std::endl;
		}
    }
	this->_contacts_arr[index - 1].print_contact();
}


