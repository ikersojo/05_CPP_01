/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:28:00 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/21 16:29:26 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie::Zombie(void)
{
	this->_name = "Unknown Name";
	std::cout << "Zombie Created: " << this->_name << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Zombie Created: " << this->_name << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie Destroyed: " << this->_name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
