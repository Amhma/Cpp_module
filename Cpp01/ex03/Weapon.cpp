/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:40:06 by ammah             #+#    #+#             */
/*   Updated: 2022/08/05 20:37:03 by ammah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

Weapon::Weapon( std::string type ) : _type(type)
{
}

Weapon::~Weapon( void )
{
	cout << "Weapon destructor" << endl;
}

const string	Weapon::getType( void ) const
{
	return (this->_type);
}

void	Weapon::setType( string type )
{
	this->_type = type;
}
