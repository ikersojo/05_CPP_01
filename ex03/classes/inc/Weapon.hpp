/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 17:37:15 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/23 00:06:27 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
	#define WEAPON_HPP
	#ifndef DEBUG
		#define DEBUG 0
	#endif
	#include <string>
	#include <iostream>

	class Weapon
	{
		public:
			Weapon(void);
			Weapon(std::string name);
			~Weapon(void);

			const std::string&	getType(void);
			void				setType(std::string type);

		private:
			std::string _type;
	};

#endif // WEAPON_HPP
