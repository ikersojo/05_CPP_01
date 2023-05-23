/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 00:35:47 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/23 19:38:25 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

int main(void)
{
	Harl	harl1;

	std::cout << std::endl << "DEBUG:" << std::endl;
	harl1.complain("DEBUG");
	std::cout << std::endl << "INFO:" << std::endl;
	harl1.complain("INFO");
	std::cout << std::endl << "WARNING:" << std::endl;
	harl1.complain("WARNING");
	std::cout << std::endl << "ERROR:" << std::endl;
	harl1.complain("ERROR");
	std::cout << std::endl << "UNKNOWN:" << std::endl;
	harl1.complain("UNKNOWN");
	return 0;
}
