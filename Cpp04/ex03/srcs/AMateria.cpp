/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:24:35 by amahla            #+#    #+#             */
/*   Updated: 2022/10/01 01:30:18 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria( void ) : _type ( "" )
{
	std::cout << "AMateria Default Constructor" << std::endl;
}

AMateria::AMateria( const string & type ) : _type( type )
{
	std::cout << "AMateria Default Constructor" << std::endl;
}

AMateria::AMateria( const AMateria & rhs ) : _type( rhs.getType() )
{
	std::cout << "AMateria copy Constructor" << std::endl;
}

AMateria::~AMateria( void )
{
	std::cout << "AMateria Default Destructor" << std::endl;
}

AMateria &	AMateria::operator=( const AMateria & rhs )
{
	(void)rhs;
	return ( *this );
}

const string &	AMateria::getType( void ) const
{
	return ( this->_type );
}

void	AMateria::use( ICharacter& target )
{
	(void)target;
	std::cout << "* use a AMateria *" << std::endl;
}
