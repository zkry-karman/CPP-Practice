#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>

class PhoneBook;

class Contact {
    public:
        char    *firstName;
        char    *lastName;
        char    *nickname;
        int     number;
        char    *darkestSecret;
}

#endif