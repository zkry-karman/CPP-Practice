/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 17:08:59 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/04 22:26:16 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook() {
    this->index = 0;
    this->totalContacts = 0;
}

int     main(void)
{
    PhoneBook       book;
    std::string     input;
    
    
    std::cout << "Welcome to the phonebook" << std::endl;
    while (1) {
        std::cout << "To add a new contact, type 'ADD'. ";
        std::cout << "To search for an existing contact, type 'SEARCH'. ";
        std::cout << "To close the phonebook, type 'EXIT'." << std::endl;

        if (!std::getline(std::cin, input))
            break ;
        if (input == "ADD")
            book.AddContact();
        else if (input == "SEARCH")
            book.SearchPhoneBook();
        else if (input == "EXIT")
            break ;
    }
    return (0);
}