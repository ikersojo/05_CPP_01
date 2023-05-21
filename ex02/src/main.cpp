/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:29:18 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/21 16:56:40 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "MEMORY ADDRESSES:" << std::endl;
	std::cout << "    Memory address of string:           " << &string << std::endl;
	std::cout << "    Memory address stored in pointer:   " << stringPTR << std::endl;
	std::cout << "    Memory address stored in reference: " << &stringREF << std::endl;
	std::cout << std::endl << "VALUES:" << std::endl;
	std::cout << "    Value of string:               " << string << std::endl;
	std::cout << "    Value pointed to by pointer:   " << *stringPTR << std::endl;
	std::cout << "    Value pointed to by reference: " << stringREF << std::endl;
	return (0);
}
