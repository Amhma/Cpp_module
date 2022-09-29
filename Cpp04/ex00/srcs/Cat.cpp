/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:36:06 by amahla            #+#    #+#             */
/*   Updated: 2022/09/29 22:46:13 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat( void ) : Animal()
{
	this->_type = "Cat";
	std::cout << "Cat Default Constructor" << std::endl;
}

Cat::Cat( const Cat & rhs ) : Animal()
{
	std::cout << "Cat copy Constructor" << std::endl;
	*this = rhs;
}

Cat::~Cat( void )
{
	std::cout << "Cat Default Destructor" << std::endl;
}

Cat &	Cat::operator=( const Cat & rhs )
{
	if ( this != &rhs )
		this->_type = rhs.getType();
	return ( *this );
}

void	Cat::makeSound( void ) const
{
	std::cout << "Miaaaaaaaaaou" << std::endl;
}
