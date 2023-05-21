#include "../inc/Zombie.hpp"

Zombie::Zombie(void)
{
	this->_name = "Unknown Name";
	std::cout << "Zombie Created: " << this->_name << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Zombie Created: " << this->_name << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie Destroyed: " << this->_name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
