/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:09:38 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/23 00:32:47 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
	#define HUMANA_HPP
	#ifndef DEBUG
		#define DEBUG 0
	#endif
	#include <string>
	#include <iostream>
	#include "../inc/Weapon.hpp"

	class HumanA
	{
		public:
			HumanA(std::string name, Weapon& newWeapon);
			~HumanA(void);

			void	attack(void);

		private:
			std::string	_name;
			Weapon&		_refWeapon;
	};

#endif // HUMANA_HPP
