/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 22:20:50 by karmanz           #+#    #+#             */
/*   Updated: 2026/11/04 22:21:09 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.h"
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
    : AForm("ShrubberyCreationForm", 145, 137), target(target) {
};



ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
    : AForm(copy), target(copy.target) {
};



ShrubberyCreationForm&  ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src) {
    if (this != &src) {
        AForm::operator=(src);
        this->target = src.target;
    }
    return *this;
};

ShrubberyCreationForm::~ShrubberyCreationForm() {
};

void    ShrubberyCreationForm::action() const {
    std::string filename = this->target + "_shrubbery";
    std::ofstream outfile(filename.c_str());
    if (!outfile.is_open()) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return ;
    }
    outfile << "    ccee88oo" << std::endl;
    outfile << "   C8O8O8Q8PoOb o8oo" << std::endl;
    outfile << "  dOB69QO8PdUOpugoO9bD" << std::endl;
    outfile << "  dOB69QO8PdUOpugoO9bD" << std::endl;
    outfile << "  dOB69QO8PdUOpugoO9bD" << std::endl;
    outfile << "   C8O8O8Q8PoOb o8oo" << std::endl;
    outfile << "      eeeeccee88oo" << std::endl;
    outfile << "           |||" << std::endl;
    outfile << "           |||" << std::endl;
    outfile << "           |||" << std::endl;
    outfile << "           |||" << std::endl;
    outfile << "           |||" << std::endl;
    outfile << "           |||" << std::endl;
    outfile << "WwUwwwWWwwu|||wWWuUUwWwWWW" << std::endl;
    outfile.close();
}