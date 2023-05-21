#include "../inc/main.hpp"

int	 main(void)
{
	Zombie	*horde;
	int		n;
	int		i;

	n = 5;
	horde = Zombie::zombieHorde(n, "Iker");
	i = 0;
	while (i < n)
		horde[i++].announce();
	delete[] horde;
	return (0);
}
