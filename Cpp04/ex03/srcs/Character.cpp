/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:10:18 by amahla            #+#    #+#             */
/*   Updated: 2022/10/03 14:05:31 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character( void ) : _name( "" )
{
	for ( int i(0); i < 4; i++ )
	{
		this->_m[i] = NULL;
		this->_mOnFloor[i] = NULL;
	}
	std::cout << "Character Default Constructor" << std::endl;
}

Character::Character( const string name ) : _name( name )
{
	for ( int i(0); i < 4; i++ )
	{
		this->_m[i] = NULL;
		this->_mOnFloor[i] = NULL;
	}
	std::cout << "Character Constructor" << std::endl;
}

Character::Character( const Character & rhs )
{
	for ( int i(0); i < 4; i++ )
	{
		this->_m[i] = NULL;
		this->_mOnFloor[i] = NULL;
	}
	*this = rhs;
	std::cout << "Character copy Constructor" << std::endl;
}

Character::~Character( void )
{
	for ( int i(0); i < 4; i++ )
	{
		if ( this->_m[i] )
			delete this->_m[i];
		if ( this->_mOnFloor[i] )
			delete this->_mOnFloor[i];
	}
	std::cout << "Character Default Destructor" << std::endl;
}

Character &	Character::operator=( const Character & rhs )
{
	if ( this != &rhs )
	{
		this->setMateria( (const AMateria**)(rhs.getMateria()) );
		(string &)(this->_name) = rhs.getName();
	}
	return ( *this );
}

string const &	Character::getName( void ) const
{
	return ( this->_name );
}

AMateria	**Character::getMateria( void ) const
{
	return ( (AMateria **)(this->_m) );
}

void			Character::setMateria( const AMateria **m )
{
	for ( int i(0); i < 4; i++ )
	{
		if ( this->_mOnFloor[i] )
		{
			delete this->_mOnFloor[i];
			_mOnFloor[i] = NULL;
		}
		if ( this->_m[i] )
			delete this->_m[i];
		this->_m[i] = (*m)->clone();
	}
}

void			Character::equip( AMateria *m )
{
	int	i;

	for ( i = 0; i < 4 && this->_m[i]; i++ )
		;
	if ( i < 3 && m)
		this->_m[i] = m;
	for ( i = 0; i < 4; i++ )
	{
		if ( this->_mOnFloor[i] )
		{
			std::cout << "Materias " << i << " on floor deleted ..." << std::endl;
			delete this->_mOnFloor[i];
			std::cout << std::endl;
		}
		_mOnFloor[i] = NULL;
	}
}

void			Character::unequip( int idx )
{
	if ( idx >= 0 && idx <= 3 && this->_m[idx] )
	{
		this->_mOnFloor[idx] = this->_m[idx];
		this->_m[idx] = NULL;
	}
}

void			Character::use( int idx, ICharacter& target )
{
	if ( idx >= 0 && idx <= 3 && this->_m[idx] )
		this->_m[idx]->use( target );
}
