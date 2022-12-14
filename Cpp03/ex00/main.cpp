/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:54:02 by amahla            #+#    #+#             */
/*   Updated: 2022/09/28 19:16:50 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <cstdlib>
#include <iostream>

using std::cout;
using std::endl;

int main( void )
{
	ClapTrap	a( "Ralph" );
	ClapTrap	b( "Fred" );
	b = ClapTrap( "Tony" );

	cout << endl;
	cout << "a -> Name : " << a.getName() << endl;
	cout << "a -> Hit points : " << a.getHit() << endl;
	cout << "a -> Energy points : " << a.getEnergy() << endl;
	cout << "a -> Damage points : " << a.getDamage() << endl;
	cout << endl;

	b.setDamage( 5 );

	cout << endl;
	for ( int i(0); i < 8; i++ )
	{
		b.attack( "Ralph" );
		a.takeDamage( b.getDamage() );
		a.beRepaired( 5 );
		cout << endl;
	}
	cout << endl;
	b.attack( "Ralph" );
	a.takeDamage( b.getDamage() );
	a.beRepaired( 0 );
	a.beRepaired( 0 );
	a.beRepaired( 0 );
	cout << endl;
	b.attack( "Ralph" );
	a.takeDamage( b.getDamage() );
	cout << endl;
	b.attack( "Ralph" );
	a.beRepaired( 0 );
	a.attack( "Tony" );
	cout << endl;

	return (EXIT_SUCCESS);
}
