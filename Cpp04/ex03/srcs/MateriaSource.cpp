/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:28:34 by amahla            #+#    #+#             */
/*   Updated: 2022/10/01 13:38:01 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	for ( int i(0); i < 4; i++ )
		this->_mSource[i] = NULL;
	std::cout << "MateriaSource Default Constructor" << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource & rhs )
{
	for ( int i(0); i < 4; i++ )
		this->_mSource[i] = NULL;
	std::cout << "MateriaSource copy Constructor" << std::endl;
	*this = rhs;
}

MateriaSource::~MateriaSource( void )
{
	for ( int i(0); i < 4; i++ )
	{
		if ( this->_mSource[i] )
			delete this->_mSource[i];
	}
	std::cout << "MateriaSource Default Destructor" << std::endl;
}

MateriaSource &	MateriaSource::operator=( const MateriaSource & rhs )
{
	if ( this != &rhs )
		this->setMateria( (const AMateria**)(rhs.getMateria()) );
	return ( *this );
}

AMateria**	MateriaSource::getMateria( void ) const
{
	return ( (AMateria **)(this->_mSource) );
}

void		MateriaSource::setMateria( const AMateria **m )
{
	for ( int i(0); i < 4; i++ )
	{
		if ( this->_mSource[i] )
			delete this->_mSource[i];
		this->_mSource[i] = (*m)->clone();
		
	}
}

void		MateriaSource::learnMateria( AMateria* m )
{
	int	i;

	for ( i = 0; i < 4 && this->_mSource[i]; i++ )
		;
	if ( i < 3 && m)
		this->_mSource[i] = m;
}

AMateria*	MateriaSource::createMateria( std::string const & type )
{
	int	i;

	for ( i = 0; i < 4 && this->_mSource[i]->getType() != type; i++ )
		;
	if ( i < 3 )
		return ( this->_mSource[i]->clone() );
	return ( NULL );
}
