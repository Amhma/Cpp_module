/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:54:57 by ammah             #+#    #+#             */
/*   Updated: 2022/08/05 20:43:29 by ammah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

using std::string;
using std::cout;
using std::endl;

HumanA::HumanA( string name, Weapon &weapon ) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA( void )
{
	cout << "HumanA destructor" << endl;
}

void	HumanA::setName( std::string name )
{
	this->_name = name;
}

std::string	HumanA::getName( void ) const
{
	return (this->_name);
}

void	HumanA::attack( void ) const
{
	cout << this->_name << " attacks with their " << this->_weapon.getType();
	cout << endl;
}
