/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:28:28 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/21 16:29:26 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie*	Zombie::zombieHorde(int N, std::string name)
{
	int		i;
	Zombie	*horde;
	
	horde = new Zombie[N];
	i = 0;
	while (i < N)
		horde[i++].setName(name);
	return (horde);
}
