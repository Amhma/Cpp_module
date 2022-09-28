/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:54:02 by amahla            #+#    #+#             */
/*   Updated: 2022/09/28 19:14:22 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <cstdlib>
#include <iostream>

using std::cout;
using std::endl;

int main( void )
{
	ScavTrap	a( "Ralph" );
	ScavTrap b( ScavTrap( "Tony" ) );
	a = b;

	cout << endl;
	cout << "Name : " << a.getName() << endl;
	cout << "Hit points : " << a.getHit() << endl;
	cout << "Energy points : " << a.getEnergy() << endl;
	cout << "Damage points : " << a.getDamage() << endl;
	cout << endl;
	a.attack( "Ralph" );
	cout << endl;
	a.ClapTrap::attack( "Ralph" );
	cout << endl;
	a.takeDamage( 0 );
	a.beRepaired( 0 );
	cout << endl;
	a.guardGate();
	cout << endl;

	return (EXIT_SUCCESS);
}
