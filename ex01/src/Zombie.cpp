/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:22:03 by dev               #+#    #+#             */
/*   Updated: 2026/02/17 13:27:59 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"
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