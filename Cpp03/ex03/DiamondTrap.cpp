/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:23:07 by amahla            #+#    #+#             */
/*   Updated: 2022/09/28 21:42:09 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <string>
#include <iostream>

using	std::cout;
using	std::endl;

DiamondTrap::DiamondTrap( void ) : ClapTrap(), ScavTrap(), FragTrap(), _name( "" )
{
	this->ScavTrap::_energy = 50;
	this->_energy = this->ScavTrap::_energy;
	this->ClapTrap::_name = "_clap_name";
	cout << "DiamondTrap R3PO " << this->_name << " Constructor" << endl;
}

DiamondTrap::DiamondTrap( const string name ) : ClapTrap( name ), ScavTrap( name ), FragTrap( name ), _name( name )
{
	this->ScavTrap::_energy = 50;
	this->_energy = this->ScavTrap::_energy;
	this->ClapTrap::_name = name;
	this->ClapTrap::_name += "_clap_name";
	cout << "DiamondTrap R3PO " << this->_name << " Constructor" << endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap & rhs ) : ClapTrap( rhs.getName() ), ScavTrap( rhs.getName() ), FragTrap( rhs.getName() )
{
	*this = rhs;
	cout << "DiamondTrap R3PO " << this->_name << " Copy Constructor" << endl;
}

DiamondTrap::~DiamondTrap( void )
{
	cout << "DiamondTrap R3PO " << this->_name << " Destructor" << endl;
}

DiamondTrap &	DiamondTrap::operator=( const DiamondTrap & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->ClapTrap::_name = rhs.getName();
		this->ClapTrap::_name += "_clap_name";
		this->_hit = rhs.getHit();
		this->_energy = rhs.getEnergy();
		this->_damage = rhs.getDamage();
	}
	return ( *this );
}

void	DiamondTrap::whoAmI( void )
{
	if ( this->_hit <= 0 )
		cout << "DiamondTrap R3PO" << this->_name << " can't introduce himself... He's dead !" << endl;
	else if ( this->_energy <= 0 )
		cout << "DiamondTrap R3PO" << this->_name << " can't introduce himself... He hasn't energy !" << endl;
	else
	{
		cout << "My Clap's name is " << this->ClapTrap::getName() << endl;
		cout << "My Diamond's name is " << this->getName() << endl;
		this->_energy--;
	}
}

string	DiamondTrap::getName( void ) const
{
	return ( this->_name );
}

void	DiamondTrap::setName( const string name )
{
	this->_name = name;
}
