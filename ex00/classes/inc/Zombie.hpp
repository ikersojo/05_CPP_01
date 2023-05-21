/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:27:50 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/21 16:29:26 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>

class	Zombie
{
	public:
		~Zombie(void);
		Zombie(void);
		Zombie(std::string name);

		void			announce(void);
		static Zombie*	newZombie(std::string name);
		static void		randomChump(std::string name);

	private:
		std::string	_name;
};

#endif // ZOMBIE_HPP