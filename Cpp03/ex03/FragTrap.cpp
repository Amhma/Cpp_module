/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:23:07 by amahla            #+#    #+#             */
/*   Updated: 2022/09/28 21:49:15 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <string>
#include <iostream>

using	std::cout;
using	std::endl;

FragTrap::FragTrap( void ) : ClapTrap()
{
	this->_damage = 30;
	this->_hit = 100;
	this->_energy = 100;
	cout << "FragTrap R3PO " << this->_name << " Constructor" << endl;
}

FragTrap::FragTrap( const string name ) : ClapTrap( name )
{
	this->_damage = 30;
	this->_hit = 100;
	this->_energy = 100;
	cout << "FragTrap R3PO " << this->_name << " Constructor" << endl;
}

FragTrap::FragTrap( const FragTrap & rhs ) : ClapTrap( rhs.getName() )
{
	*this = rhs;
	cout << "FragTrap R3PO " << this->_name << " Copy Constructor" << endl;
}

FragTrap::~FragTrap( void )
{
	cout << "FragTrap R3PO " << this->_name << " Destructor" << endl;
}

FragTrap &	FragTrap::operator=( const FragTrap & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_hit = rhs.getHit();
		this->_energy = rhs.getEnergy();
		this->_damage = rhs.getDamage();
	}
	return ( *this );
}

void	FragTrap::highFivesGuys( void )
{
	if ( this->_hit <= 0 )
		cout << "FragTrap R3PO" << this->_name << " can't ask something... He's dead !" << endl;
	else if ( this->_energy <= 0 )
		cout << "FragTrap R3PO" << this->_name << " can't ask something... He hasn't energy !" << endl;
	else
	{
		cout << "FragTrap R3PO " << this->_name << " asked : \"Hey bro ! let's have a High Five !?\"" << endl;
		this->_energy--;
	}
}
