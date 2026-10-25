/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 13:27:32 by karmanz           #+#    #+#             */
/*   Updated: 2026/10/25 14:22:08 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

int main() {
    
    try {
        Bureaucrat a("zack", 1);
        Bureaucrat b("filipe", 150);
        std::cout << a << std::endl;
        std::cout << b << std::endl;
    } catch (std::exception &e) {
        std::cout << "Unexpected exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat c("goose", 200);
    } catch (std::exception &e) {
        std::cout << "Caught expected exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat d("CJ", -200);
    } catch (std::exception &e) {
        std::cout << "Caught expected exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat top("Steve", 1);
        top.increment();
    } catch (std::exception &e) {
        std::cout << "Caught expected exception: " << e.what() << std::endl;
    }
    return 0;
}