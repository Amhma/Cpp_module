/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 20:45:16 by amahla            #+#    #+#             */
/*   Updated: 2022/09/27 17:54:34 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//====================== Constructors =====================

ClapTrap::ClapTrap( const string name ) : _name(name), _hit(10), _energy(10), _damage (0)
{
}

ClapTrap::ClapTrap( const ClapTrap & rhs )
{
	*this = rhs;
}

//====================== Destructors =====================

ClapTrap::~ClapTrap( void )
{
}

//====================== Arithmetic Overload =============

ClapTrap &	ClapTrap::operator=( const ClapTrap & rhs )
{
	(ClapTrap &)this->_name = 
}

//====================== Accessors ========================

		const string	getName( void ) const;
		int				getHit( void ) const;
		int				getEnergy( void ) const;
		int				getDamage( void ) const;
		void			setHit( const int nb );
		void			setEnergy( const int nb );
		void			setDamage( const int nb );


