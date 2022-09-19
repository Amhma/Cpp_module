/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 10:29:17 by ammah             #+#    #+#             */
/*   Updated: 2022/09/19 20:29:06 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie	*horde;

	try {
		horde = new Zombie[N];
	}
	catch (const std::bad_alloc& e) {
		std::cerr << "Standard exception: " << e.what() << std::endl;
		return (NULL);
	}
	for (int i(0); i < N; i++)
		horde[i].setname(name);
	return (horde);
}
