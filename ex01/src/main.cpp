/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:22:18 by dev               #+#    #+#             */
/*   Updated: 2026/02/17 13:27:52 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main( void )
{
	int N = 10;

	Zombie* zombies = zombieHorde(N, "Sarah");
	for (int i = 0; i < N; i++)
		zombies[i].announce();

	delete [] zombies;
	return 0;
}