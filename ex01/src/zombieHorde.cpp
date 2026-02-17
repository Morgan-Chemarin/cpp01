/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:22:09 by dev               #+#    #+#             */
/*   Updated: 2026/02/17 13:28:08 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
		return NULL;

	Zombie* zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombies[i].setName(name);
	
	return zombies;
}