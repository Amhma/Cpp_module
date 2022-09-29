/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:36:17 by amahla            #+#    #+#             */
/*   Updated: 2022/09/29 14:55:30 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog( void ) : Animal()
{
	this->_type = "Dog";
	std::cout << "Dog Default Constructor" << std::endl;
}

Dog::Dog( const Dog & rhs )
{
	std::cout << "Dog copy Constructor" << std::endl;
	*this = rhs;
}

Dog::~Dog( void )
{
	std::cout << "Dog Default Constructor" << std::endl;
}

Dog &	Dog::operator=( const Dog & rhs )
{
	if ( this != &rhs )
		this->_type = rhs.getType();
	return ( *this );
}

void	Dog::makeSound( void ) const
{
	std::cout << "Whaaaaaaaaaf" << std::endl;
}
