#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact _contacts_arr[8];
        int     _read_input(void) const;
    public:
        PhoneBook();
        ~PhoneBook();
        void    add(void);
        void    print_phonebook(void) const;
        void    search(void) const;
        void    welcome(void) const;
};
#endif