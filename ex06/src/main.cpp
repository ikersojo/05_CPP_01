/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 00:35:47 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/23 19:58:22 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

int	printError(std::string str)
{
	std::cout << "\033[0;31m" << str << "\033[0;39m" << std:: endl;
	return (1);
}

int main(int argc, char **argv)
{
	Harl	harl1;

	if (argc == 2)
		harl1.complain(argv[1]);
	else
		return (printError("Error: Syntax: ./bin/harlFilter LEVEL"));
	return (0);
}
