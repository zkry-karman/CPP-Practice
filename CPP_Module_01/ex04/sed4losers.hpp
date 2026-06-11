/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed4losers.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <zkarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 15:29:17 by zkarman           #+#    #+#             */
/*   Updated: 2026/06/11 16:32:52 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED4LOSERS_HPP
# define SED4LOSERS_HPP

#include <iostream>
#include <string>
#include <fstream>

void    parseFile(std::ifstream &inputFile, std::ofstream &outputFile, const std::string &s1, const std::string &s2);

#endif
