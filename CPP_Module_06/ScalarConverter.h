/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <zkarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 16:25:37 by zkarman           #+#    #+#             */
/*   Updated: 2026/11/18 16:59:57 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

#include <iostream>

class ScalarConverter {
    public:
        
        static void        convert(const std::string string);

    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter & copy);
        ~ScalarConverter();
        ScalarConverter& operator = (const ScalarConverter & src);
};

#endif