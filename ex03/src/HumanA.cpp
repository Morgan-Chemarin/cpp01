/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:29:29 by dev               #+#    #+#             */
/*   Updated: 2026/02/17 13:29:30 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon)
	: _name(name), _weapon(weapon)
{}

HumanA::~HumanA() {}

void	HumanA::attack() const
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}