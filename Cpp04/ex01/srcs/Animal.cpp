/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:33:03 by amahla            #+#    #+#             */
/*   Updated: 2022/09/29 14:56:46 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal( void ) : _type( "" )
{
	std::cout << "Animal Default Constructor" << std::endl;
}

Animal::Animal( const Animal & rhs )
{
	std::cout << "Animal Copy Constructor" << std::endl;
	*this = rhs;
}

Animal::~Animal( void )
{
	std::cout << "Animal Destructor" << std::endl;
}

Animal &	Animal::operator=( const Animal & rhs )
{
	if ( this != &rhs )
		this->_type = rhs.getType();
	return ( *this );
}

string	Animal::getType( void ) const
{
	return ( this->_type );
}

void	Animal::setType( const string type )
{
	this->_type = type;
}

void	Animal::makeSound( void ) const
{
	std::cout << "Animal sound : \"...\" ( imagine that !! )" << std::endl;
}
