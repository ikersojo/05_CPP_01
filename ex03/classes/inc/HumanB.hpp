/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:09:31 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/23 00:06:27 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
	#define HUMANB_HPP
	#ifndef DEBUG
		#define DEBUG 0
	#endif
	#include <string>
	#include <iostream>
	#include "../inc/Weapon.hpp"

	class HumanB
	{
		public:
			HumanB(std::string name);
			~HumanB(void);

			void	attack(void);
			void	setWeapon(Weapon& newWeapon);

		private:
			std::string	_name;
			Weapon*		_currentWeapon;
	};

#endif // HUMANB_HPP
