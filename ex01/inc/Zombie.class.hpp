#ifndef ZOMBIE_CLASS_HPP
#define ZOMBIE_CLASS_HPP

#include <string>

class Zombie {
public:
	Zombie( void );
	~Zombie( void );

	void	setName(std::string name);
	void	announce( void ) const;
private:
	std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif