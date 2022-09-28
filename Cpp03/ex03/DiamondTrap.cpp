/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:23:07 by amahla            #+#    #+#             */
/*   Updated: 2022/09/28 19:07:21 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <string>
#include <iostream>

using	std::cout;
using	std::endl;

DiamondTrap::DiamondTrap( const string name ) : ClapTrap( name ), ScavTrap( name ), FragTrap( name ), _name( name )
{
	this->ScavTrap::_energy = 50;
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
		this->_name = rhs.getName();
		this->ClapTrap::_name = rhs.getName();
		this->ClapTrap::_name += "_clap_name";
		this->_hit = rhs.getHit();
		this->_energy = rhs.getEnergy();
		this->_damage = rhs.getDamage();
		return ( *this );
}

void	DiamondTrap::whoAmI( void )
{
	cout << "name Clap : " << this->ClapTrap::getName() << endl;
	cout << "name Diamond : " << this->getName() << endl;
}

string	DiamondTrap::getName( void ) const
{
	return ( this->_name );
}

void	DiamondTrap::setName( const string name )
{
	this->_name = name;
}
