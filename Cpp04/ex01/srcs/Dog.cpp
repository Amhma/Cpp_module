/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:36:17 by amahla            #+#    #+#             */
/*   Updated: 2022/09/30 01:26:30 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog( void ) : Animal()
{
	std::cout << "Dog Default Constructor" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain( "Dog" );
}

Dog::Dog( const Dog & rhs ) : Animal()
{
	std::cout << "Dog copy Constructor" << std::endl;
	this->_brain = NULL;
	*this = rhs;
}

Dog::~Dog( void )
{
	delete this->_brain;
	std::cout << "Dog Default Destructor" << std::endl;
}

Dog &	Dog::operator=( const Dog & rhs )
{
	if ( this != &rhs )
	{
		if ( this->_brain )
			delete this->_brain;
		this->_brain = new Brain( *(rhs.getBrain()) );
		this->_type = rhs.getType();
	}
	return ( *this );
}

Brain	*Dog::getBrain( void ) const
{
	return ( this->_brain );
}

void	Dog::setBrain( const Brain *brain )
{
	*(this->_brain) = *brain;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Whaaaaaaaaaf" << std::endl;
}
