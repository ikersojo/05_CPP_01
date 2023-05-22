/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 23:06:08 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/23 00:11:16 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

Weapon::Weapon(void)
{
	this->setType("non-defined");
	if (DEBUG == 1)
		std::cout << "\033[0;93m" << "Non Defined Weapon object created."
					<< "\033[0;39m" << std::endl;

}

Weapon::Weapon(std::string name)
{
	this->setType(name);
	if (DEBUG == 1)
		std::cout << "\033[0;93m" << this->_type <<" Weapon object created."
					<< "\033[0;39m" << std::endl;
}

Weapon::~Weapon(void)
{
	if (DEBUG == 1)
		std::cout << "\033[0;93m" << "Weapon (" << this->_type << ") object destroyed."
					<< "\033[0;39m" << std::endl;
}

const std::string&	Weapon::getType(void)
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
	if (DEBUG == 1)
		std::cout << "\033[0;93m" << "Weapon set to " << this->_type << "."
					<< "\033[0;39m" << std::endl;
}
