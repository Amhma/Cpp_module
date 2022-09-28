/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:23:07 by amahla            #+#    #+#             */
/*   Updated: 2022/09/28 18:42:57 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <string>
#include <iostream>

using	std::cout;
using	std::endl;

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
		this->_name = rhs.getName();
		this->_hit = rhs.getHit();
		this->_energy = rhs.getEnergy();
		this->_damage = rhs.getDamage();
		return ( *this );
}

void	FragTrap::highFivesGuys( void )
{
	cout << "FragTrap R3PO " << this->_name << " said : \"Hey bro ! let's have a High Five !?\"" << endl;
}
