#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <limits>
#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
	int			_index;
	std::string	_print_len(std::string str) const;
	std::string	_get_input(std::string str) const;
public:
	Contact();
	~Contact();
	void	add(void);
	void	print(int index) const;
	void	display(int index) const;
	void	set_index(int i);
};
#endif