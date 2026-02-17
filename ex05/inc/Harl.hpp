/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 15:18:27 by dev               #+#    #+#             */
/*   Updated: 2026/02/17 16:07:02 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl {
public:
	Harl();
	~Harl();

	void complain( std::string level);

private:
	void debug( void);
	void info( void);
	void warning( void);
	void error( void);
};

#endif