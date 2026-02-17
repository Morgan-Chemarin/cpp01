/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:23:04 by dev               #+#    #+#             */
/*   Updated: 2026/02/17 13:23:05 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
public:
	Zombie( std::string name );
	~Zombie( void );

	void announce( void ) const;

private:
	std::string _name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name);

#endif