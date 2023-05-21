#include "../inc/Zombie.hpp"

Zombie*	Zombie::newZombie(std::string name)
{
	Zombie	*zombieX;

	zombieX = new Zombie(name);
	return (zombieX);
}
