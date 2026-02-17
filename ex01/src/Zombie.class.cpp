#include "Zombie.class.hpp"
#include <iostream>

Zombie::Zombie( void ): _name("ndefault")
{
}

Zombie::~Zombie( void )
{
	std::cout << "Destructor called for: " << this->_name << std::endl;
}

void Zombie::setName( std::string name)
{
	this->_name = name;
}

void Zombie::announce( void ) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}