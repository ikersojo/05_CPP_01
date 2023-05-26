/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:13:22 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/26 13:43:10 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	this->_currentWeapon = NULL;
	if (DEBUG == 1)
		std::cout << "\033[0;93m" << this->_name <<" HumanB object created."
					<< "\033[0;39m" << std::endl;
}

HumanB::~HumanB(void)
{
	if (DEBUG == 1)
		std::cout << "\033[0;93m" << this->_name <<" HumanB object destroyed."
					<< "\033[0;39m" << std::endl;
}

void	HumanB::attack(void)
{
	if (this->_currentWeapon)
		std::cout	<< this->_name << " attacks with their "
					<< this->_currentWeapon->getType() <<std::endl;
	else
		std::cout	<< this->_name << " attacks without weapons" <<std::endl;
}

void	HumanB::setWeapon(Weapon& newWeapon)
{
	this->_currentWeapon = &newWeapon;
	if (DEBUG == 1)
		std::cout << "\033[0;93m" << "Weapon in " << this->_name << " set to "
				<< _currentWeapon->getType() << "." << "\033[0;39m" << std::endl;
}
