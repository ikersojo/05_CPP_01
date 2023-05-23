/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:29:18 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/23 18:52:51 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int	printError(std::string str)
{
	std::cout << "\033[0;31m" << str << "\033[0;39m" << std:: endl;
	return (1);
}

int	main(int argc, char **argv)
{
	std::ifstream	inFile;
	std::ofstream	outFile;
	std::string		filename;
	std::string		line;
	std::string		temp;
	std::string		s1;
	std::string		s2;

	if (argc == 4)
	{
		filename = argv[1];
		s1 = argv[2];
		s2 = argv[3];
		inFile.open(filename);
		if (!inFile.is_open())
			return (printError("Error: inFile could not be openned."));
		outFile.open(filename + ".replace");
		if (!outFile.is_open())
			return (printError("Error: outFile could not be openned."));
		while (getline(inFile, line))
		{
			if (line.find(s1) != std::string::npos)
			{
				temp = line.substr(0, line.find(s1)) + s2 + line.substr(line.find(s1) + s1.length(), line.length());
				outFile << temp << std::endl;
			}
			else
				outFile << line << std::endl;
		}
		inFile.close();
		outFile.close();
	}
	else
		return (printError("Error: Syntax: ./bin/main filename.txt stringToBeFound stringToBeReplacedWith"));
	return (0);
}
