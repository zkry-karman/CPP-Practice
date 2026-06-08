/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <zkarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 18:19:38 by zkarman           #+#    #+#             */
/*   Updated: 2026/06/08 18:38:59 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon {
    private:
        std::string     type;

    public:
        std::string&    getType(std::string type);
        void            setType(std::string newValue, std::string* type);
};