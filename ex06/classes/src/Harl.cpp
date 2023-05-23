/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:13:18 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/23 19:59:12 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

Harl::Harl(void)
{
	if (DEBUG == 1)
		std::cout << "\033[0;93m" << "Harl object created." << "\033[0;39m" << std::endl;
}

Harl::~Harl(void)
{
	if (DEBUG == 1)
		std::cout << "\033[0;93m" << "Harl object destroyed." << "\033[0;39m" << std::endl;
}

void	Harl::complain(std::string level)
{
	int	i;
	std::string	options[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	i = 0;
	while (i < 4 && level != options[i])
		i++;
	switch(i)
	{
		case(0):
			(this->*ptr[0])();
		case(1):
			(this->*ptr[1])();
		case(2):
			(this->*ptr[2])();
		case(3):
			(this->*ptr[3])();
			break;

		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-"
				<< "pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. "
				<< "You didn't put enough bacon in my burger! If you did, "
				<< "I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. "
				<< "I've been coming for years whereas you started working "
				<< "here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
