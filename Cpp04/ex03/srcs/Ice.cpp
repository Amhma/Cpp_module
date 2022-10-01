/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:24:40 by amahla            #+#    #+#             */
/*   Updated: 2022/09/30 17:49:41 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice( void ) : AMateria( "ice" )
{
	std::cout << "Ice Default Constructor" << std::endl;
}

Ice::Ice( const Ice & rhs ) : AMateria( rhs.getType() )
{
	std::cout << "Ice copy Constructor" << std::endl;
}

Ice::~Ice( void )
{
	std::cout << "Ice Default Destructor" << std::endl;
}

Ice &	Ice::operator=( const Ice & rhs )
{
	(void)rhs;
	return ( *this );
}

Ice	*Ice::clone( void ) const
{
	Ice *ice = new Ice();
	return ( ice );
}

void	Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
