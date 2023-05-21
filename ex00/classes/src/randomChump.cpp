#include "../inc/Zombie.hpp"

void	Zombie::randomChump(std::string name)
{
	Zombie	zombieX(name);

	zombieX.announce();
}