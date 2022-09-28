/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:54:02 by amahla            #+#    #+#             */
/*   Updated: 2022/09/28 19:09:48 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <cstdlib>
#include <iostream>

using std::cout;
using std::endl;

int main( void )
{
	DiamondTrap	a( "Ralph" );
	DiamondTrap b( DiamondTrap( "Tony" ) );
	a = b;

	cout << endl;
	a.whoAmI();
	cout << endl;
	cout << "Hit points : " << a.getHit() << endl;
	cout << "Energy points : " << a.getEnergy() << endl;
	cout << "Damage points : " << a.getDamage() << endl;
	cout << endl;
	a.attack( "Ralph" );
	cout << endl;
	a.takeDamage( 0 );
	a.beRepaired( 0 );
	cout << endl;
	a.guardGate();
	cout << endl;
	a.highFivesGuys();
	cout << endl;

	return (EXIT_SUCCESS);
}
