#include "Zombie.class.hpp"

int main( void )
{
	int N = 10;

	Zombie* zombies = zombieHorde(N, "Sarah");
	for (int i = 0; i < N; i++)
		zombies[i].announce();

	delete [] zombies;
	return 0;
}