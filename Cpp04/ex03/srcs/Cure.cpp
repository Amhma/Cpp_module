/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:34:31 by amahla            #+#    #+#             */
/*   Updated: 2022/09/30 14:47:50 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"

Cure::Cure( void ) : AMateria( "cure" )
{
	std::cout << "Cure Default Constructor" << std::endl;
}

Cure::Cure( const Cure & rhs ) : AMateria( rhs.getType() )
{
	std::cout << "Cure copy Constructor" << std::endl;
}

Cure::~Cure( void )
{
	std::cout << "Cure Default Destructor" << std::endl;
}

Cure &	Cure::operator=( const Cure & rhs )
{
	(void)rhs;
	return ( *this );
}

Cure	*Cure::clone( void ) const
{
	Cure *cure = new Cure();
	return ( cure );
}

void	Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
