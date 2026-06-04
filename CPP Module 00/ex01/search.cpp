/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 20:56:50 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/04 22:53:59 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string Contact::getFirstName() const {
    return this->firstName;
}

std::string Contact::getLastName() const {
    return this->lastName;
}

std::string Contact::getNickname() const {
    return this->nickname;
}

std::string Contact::getPhoneNumber() const {
    return this->phoneNumber;
}

std::string Contact::getDarkestSecret() const {
    return this->darkestSecret;
}

void    PhoneBook::displayContactInformation() {
    std::string     idx = "";
    int             num;
    
    while (idx.empty()) {
        std::cout << "Type a number to view the contact of that index: ";
        if (!std::getline(std::cin, idx))
            return ;
        if (idx.length() != 1 || idx[0] < '0' || idx[0] > '7') {
            std::cout << "Invalid index. Please enter a digit between 0 and 7." << std::endl;
            idx = "";
            continue ;    
        }
        num = idx[0] - '0';
        if (num >= this->totalContacts) {
            std::cout << "No contact exits at index " << num << "." << std::endl;
            idx = "";
        }
    }
    std::cout << "Contact Information:" << std::endl;
    std::cout << "First Name: " << this->contactList[num].getFirstName() << std::endl;
    std::cout << "Last Name: " << this->contactList[num].getLastName() << std::endl;
    std::cout << "Nickname: " << this->contactList[num].getNickname() << std::endl;
    std::cout << "Phone Number: " << this->contactList[num].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << this->contactList[num].getDarkestSecret() << std::endl;
}


std::string    PhoneBook::formatColumn(const std::string &str) const {
    if (str.length() > 10) {
        return str.substr(0, 9) + ".";
    }
    return str;
}

void    PhoneBook::SearchPhoneBook() {
    int     i;
    
    if (this->totalContacts == 0) {
        std::cout << "You have no friends :/" << std::endl;
        return ;
    }

    std::cout << "*********************************************" << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "*********************************************" << std::endl;

    i = 0;
    while (i < this->totalContacts) {
        std::cout << "|";
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << this->formatColumn(this->contactList[i].getFirstName()) << "|";
        std::cout << std::setw(10) << this->formatColumn(this->contactList[i].getLastName()) << "|";
        std::cout << std::setw(10) << this->formatColumn(this->contactList[i].getNickname()) << "|";
        std::cout << std::endl;
        i++;
    }
    std::cout << "*********************************************" << std::endl;
    this->displayContactInformation();
}