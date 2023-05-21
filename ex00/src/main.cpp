#include "../inc/main.hpp"

static void	testRegularStackZombies(void)
{
	std::cout << "\033[0;93m";

	Zombie zombie0;
	Zombie zombie1("Iker");

	std::cout << "...from inside the function..." << std::endl;
	zombie0.announce();
	zombie1.announce();
	std::cout << "\033[0;39m";
}

static Zombie	*testReferencedHeapZombies(void)
{
	Zombie	*heapZombie;

	std::cout << "\033[0;93m";
	std::cout << "...from inside the function..." << std::endl;
	heapZombie = Zombie::newZombie("Iker in Heap");
	heapZombie->announce();
	std::cout << "\033[0;39m";
	return (heapZombie);
}

static void	testRandomChumpStackZombies(void)
{
	std::cout << "\033[0;93m";
	std::cout << "...from inside the function..." << std::endl;
	Zombie::randomChump("Mr. Random");
	std::cout << "\033[0;39m";
}

int	 main(void)
{
	Zombie	*heapZombie;

	std::cout << "testing regular stack zombies..." << std::endl;
	testRegularStackZombies();
	std::cout << "...from main..." << std::endl;
	std::cout << "    ----> N/A" << std::endl;
	std::cout << std::endl << std::endl;

	std::cout << "testing referenced heap zombies..." << std::endl;
	heapZombie = testReferencedHeapZombies();
	std::cout << "...from main..." << std::endl;
	heapZombie->announce();
	delete heapZombie;
	std::cout << std::endl << std::endl;

	std::cout << "testing randomChump stack zombies..." << std::endl;
	testRandomChumpStackZombies();
	std::cout << "...from main..." << std::endl;
	std::cout << "    ----> N/A" << std::endl;
	std::cout << std::endl << std::endl;

	return (0);
}
