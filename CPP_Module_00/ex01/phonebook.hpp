/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 17:09:17 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/04 22:21:59 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;

    public:
        void    setFirstName(const std::string &str);
        void    setLastName(const std::string &str);
        void    setNickname(const std::string &str);
        void    setPhonenumber(const std::string &str);
        void    setDarkestSecret(const std::string &str);
        
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickname() const;
        std::string getPhoneNumber() const;
        std::string getDarkestSecret() const;
};

class PhoneBook {
    private:
        Contact contactList[8];
        int     index;
        int     totalContacts;
        std::string    formatColumn(const std::string &str) const;

    public:
        PhoneBook();
        void    AddContact();
        void    SearchPhoneBook();
        void    displayContactInformation();

};

#endif