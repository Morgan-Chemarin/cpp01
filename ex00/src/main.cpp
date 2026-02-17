/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:22:52 by dev               #+#    #+#             */
/*   Updated: 2026/02/17 13:27:30 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main( void )
{
	randomChump("Bob");

	Zombie* zombie = newZombie( "Sarah" );
	zombie->announce();
	delete zombie;

	return 0;
}