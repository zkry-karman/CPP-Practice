/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 19:51:05 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/02 20:36:27 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    capitalize(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
        i++;
    }
}

int     main(int ac, char **av)
{
    int     i;
    
    if (ac == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    i = 1;
    while (i < ac) {
        capitalize(av[i]);
        std::cout << av[i] << std::ends;
        i++;
    }
    std::cout << "\n" << std::ends; 
    return (0);
}