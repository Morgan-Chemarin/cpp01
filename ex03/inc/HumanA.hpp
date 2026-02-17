/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:28:49 by dev               #+#    #+#             */
/*   Updated: 2026/02/17 13:28:50 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "../inc/Weapon.hpp"
#include <iostream>

class HumanA {
private:
	std::string _name;
	Weapon& _weapon;
public:
	HumanA(const std::string& name, Weapon& weapon);
	~HumanA();

	void	attack() const;
};

#endif