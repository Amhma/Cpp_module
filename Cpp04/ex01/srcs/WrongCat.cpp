/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:37:19 by amahla            #+#    #+#             */
/*   Updated: 2022/09/29 22:48:09 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat( void ) : WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat Default Constructor" << std::endl;
}

WrongCat::WrongCat( const WrongCat & rhs ) : WrongAnimal()
{
	std::cout << "WrongCat copy Constructor" << std::endl;
	*this = rhs;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat Default Destructor" << std::endl;
}

WrongCat &	WrongCat::operator=( const WrongCat & rhs )
{
	if ( this != &rhs )
		this->_type = rhs.getType();
	return ( *this );
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Miaaaaaaaaaou" << std::endl;
}
