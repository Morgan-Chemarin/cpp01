/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:22:32 by dev               #+#    #+#             */
/*   Updated: 2026/02/17 13:27:12 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"
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