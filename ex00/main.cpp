#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "*MESSAGE FOR DEBUGGING PURPOSSES*" << std::endl;
	randomChump("Bill");
	std::cout << "This random zombie doesn't exist anymore" << std::endl;
	Zombie *James = newZombie("James");
	std::cout << "The zombie " << James->getName() << " is still alive" << std::endl;
	delete James;
	return (0);
}
