/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:54:57 by ammah             #+#    #+#             */
/*   Updated: 2022/09/23 20:27:47 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

using std::string;
using std::cout;
using std::endl;

HumanB::HumanB( string name )
{
	this->_weapon = NULL;
	this->_name = name;
}

HumanB::~HumanB( void )
{
	cout << "HumanB destructor" << endl;
}

void	HumanB::setName( std::string name )
{
	this->_name = name;
}

std::string	HumanB::getName( void ) const
{
	return (this->_name);
}

void	HumanB::attack( void ) const
{
	if (!this->_weapon)
	{
		cout << this->_name << " attacks with their " << this->_weapon->getType();
		return;
	}
	cout << this->_name << " attacks with their " << this->_weapon->getType();
	cout << endl;
}

void	HumanB::setWeapon( Weapon &weapon )
{
	this->_weapon = &weapon;
}
