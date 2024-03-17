#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact _contacts_arr[8];
    public:
        PhoneBook();
        ~PhoneBook();
        void    add(void);
        void    search(void) const;
};
#endif