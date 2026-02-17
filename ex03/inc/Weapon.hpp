/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:29:15 by dev               #+#    #+#             */
/*   Updated: 2026/02/17 13:29:16 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
private:
	std::string _type;

public:
	Weapon(const std::string& type);
	~Weapon();

	const std::string&	getType() const;
	void	setType(const std::string& type);
};

#endif