/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:13:18 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/23 19:38:00 by isojo-go         ###   ########.fr       */
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

	i = -1;
	while (++i < 4)
	{
		if (level == options[i])
		{
			(this->*ptr[i])();
			break;
		}
	}
	if (i == 4)
		std::cout << "\033[0;93m" << "Error: Not a valid level (DEBUG, INFO, WARNING, ERROR)."
					<< "\033[0;39m" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-"
				<< "pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
				<< "You didn't put enough bacon in my burger! If you did, "
				<< "I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. "
				<< "I've been coming for years whereas you started working "
				<< "here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


/*
void	Harl::complain(std::string level)
{
	void    (Harl::*functionPTRS[])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string complains[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (complains[i] == level)
			(this->*functionPTRS[i])();
	}
}



	int	i = 0;
	std::string command[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4) {
		if (level.compare(command[i]) == 0)
			break;
		i++;
	}
	if (i < 4) {
		typedef void (Harl::*fptr)( void );
		fptr funciones[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
		(this->*funciones[i])();
	}


void Harl::complain(std::string level) {
  void (Harl::*functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning,
                                   &Harl::error};
  std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

  int i;
  for (i = 0; i < 4; i++) {
    if (level == levels[i]) {
      (this->*functions[i])();
      break;
    }
  }
  if (i == 4) std::cout << "No matching level!" << std::endl;
}

*/