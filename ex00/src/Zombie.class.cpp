#include "Zombie.class.hpp"
#include <iostream>

Zombie::Zombie( std::string name )
{
	this->_name = name;
}

Zombie::~Zombie( void )
{
	std::cout << "Destructor called for: " << this->_name << std::endl;
}

void Zombie::announce( void ) const
{
	std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}