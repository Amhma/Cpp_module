/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:36:47 by amahla            #+#    #+#             */
/*   Updated: 2022/09/29 22:47:57 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal( void ) : _type( "" )
{
	std::cout << "WrongAnimal Default Constructor" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & rhs )
{
	std::cout << "WrongAnimal copy Constructor" << std::endl;
	*this = rhs;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal Default Destructor" << std::endl;
}

WrongAnimal &	WrongAnimal::operator=( const WrongAnimal & rhs )
{
	if ( this != &rhs )
		this->_type = rhs.getType();
	return ( *this );
}

string	WrongAnimal::getType( void ) const
{
	return ( this->_type );
}

void	WrongAnimal::setType( const string type )
{
	this->_type = type;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimal sound \"...\" ( imagine that !! )" << std::endl;
}
