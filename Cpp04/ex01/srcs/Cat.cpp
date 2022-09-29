/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:36:06 by amahla            #+#    #+#             */
/*   Updated: 2022/09/30 01:26:19 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat( void ) : Animal()
{
	std::cout << "Cat Default Constructor" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain( "Cat" );
}

Cat::Cat( const Cat & rhs ) : Animal()
{
	std::cout << "Cat copy Constructor" << std::endl;
	this->_brain = NULL;
	*this = rhs;
}

Cat::~Cat( void )
{
	delete this->_brain;
	std::cout << "Cat Default Destructor" << std::endl;
}

Cat &	Cat::operator=( const Cat & rhs )
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

Brain	*Cat::getBrain( void ) const
{
	return ( this->_brain );
}

void	Cat::setBrain( const Brain *brain )
{
	*(this->_brain) = *brain;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Miaaaaaaaaaou" << std::endl;
}
