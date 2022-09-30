/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:33:03 by amahla            #+#    #+#             */
/*   Updated: 2022/09/30 11:02:44 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal( void ) : _type( "" )
{
	std::cout << "AAnimal Default Constructor" << std::endl;
}

AAnimal::~AAnimal( void )
{
	std::cout << "AAnimal Destructor" << std::endl;
}

AAnimal &	AAnimal::operator=( const AAnimal & rhs )
{
	if ( this != &rhs )
		this->_type = rhs.getType();
	return ( *this );
}

string	AAnimal::getType( void ) const
{
	return ( this->_type );
}

void	AAnimal::setType( const string type )
{
	this->_type = type;
}
