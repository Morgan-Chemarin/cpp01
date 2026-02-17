/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:21:48 by dev               #+#    #+#             */
/*   Updated: 2026/02/17 13:21:49 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

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