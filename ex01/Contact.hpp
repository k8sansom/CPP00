#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
private:
	/* data */
public:
	Contact(/* args */);
	~Contact();
};

Contact::Contact(void)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
