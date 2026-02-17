/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:30:27 by dev               #+#    #+#             */
/*   Updated: 2026/02/17 13:30:28 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

Weapon::Weapon(const std::string& type ): _type(type)
{
}

Weapon::~Weapon( void )
{
}


const std::string& Weapon::getType() const
{
	return this->_type;
}

void	Weapon::setType(const std::string& type)
{
	this->_type = type;
}