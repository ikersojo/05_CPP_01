/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:13:18 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/23 00:07:24 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& newWeapon) : _name(name), _refWeapon(newWeapon)
{
	if (DEBUG == 1)
		std::cout << "\033[0;93m" << this->_name <<" HumanA object created."
					<< "\033[0;39m" << std::endl;
}

HumanA::~HumanA(void)
{
	if (DEBUG == 1)
		std::cout << "\033[0;93m" << this->_name <<" HumanA object destroyed."
					<< "\033[0;39m" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout	<< this->_name << " attacks with their "
				<< _refWeapon.getType() <<std::endl;
}
