#include "Zombie.class.hpp"

int main( void )
{
	randomChump("Bob");

	Zombie* zombie = newZombie( "Sarah" );
	zombie->announce();
	delete zombie;

	return 0;
}