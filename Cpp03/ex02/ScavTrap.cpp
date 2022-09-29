/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:23:07 by amahla            #+#    #+#             */
/*   Updated: 2022/09/29 10:56:24 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <string>
#include <iostream>

using	std::cout;
using	std::endl;

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	this->_damage = 20;
	this->_hit = 100;
	this->_energy = 50;
	cout << "ScavTrap R3PO " << this->_name << " Default Constructor" << endl;
}

ScavTrap::ScavTrap( const string name ) : ClapTrap( name )
{
	this->_damage = 20;
	this->_hit = 100;
	this->_energy = 50;
	cout << "ScavTrap R3PO " << this->_name << " Constructor" << endl;
}

ScavTrap::ScavTrap( const ScavTrap & rhs ) : ClapTrap( rhs.getName() )
{
	*this = rhs;
	cout << "SlavTrap R3PO " << this->_name << " Copy Constructor" << endl;
}

ScavTrap::~ScavTrap( void )
{
	cout << "ScavTrap R3PO " << this->_name << " Destructor" << endl;
}

ScavTrap &	ScavTrap::operator=( const ScavTrap & rhs )
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

void	ScavTrap::attack(const string & target)
{
	if ( this->_hit == 0 )
		cout << endl << "The wonderfull ScavTrap R3PO " << this->_name << " can't attack... he's dead !" << endl;
	else if ( this->_energy == 0 )
		cout << "The wonderfull ScavTrap R3PO " << this->_name << " have no more energy point ... he can't attack" << endl;
	else
	{
		cout << "The wonderfull ScavTrap R3PO " << this->_name;
		cout << " attacks " << target;
		cout << ", causing " << this->_damage;
		cout << " points of damage!" << endl;
		this->_energy--;
	}
}

void	ScavTrap::guardGate( void )
{
	if ( this->_hit == 0 )
		cout << endl << "ScavTrap R3PO " << this->_name << " can't say something... he's dead !" << endl;
	else if ( this->_energy == 0 )
		cout << "ScavTrap R3PO " << this->_name << " have no more energy point ... he can't say something" << endl;
	else
	{
		cout << "ScavTrap R3PO " << this->_name << " said : \"GATEKEEPER MODE !!!!\"" << endl;
		this->_energy--;
	}
}
