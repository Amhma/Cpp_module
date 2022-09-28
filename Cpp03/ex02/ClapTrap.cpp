/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 20:45:16 by amahla            #+#    #+#             */
/*   Updated: 2022/09/28 18:39:00 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

using std::cout;
using std::endl;

//====================== Constructors =====================

ClapTrap::ClapTrap( const string name ) : _name(name), _hit(10), _energy(10), _damage(0)
{
	cout << "ClapTrap R3PO " << this->_name << " Constructor" << endl;
}

ClapTrap::ClapTrap( const ClapTrap & rhs )
{
	*this = rhs;
	cout << "ClapTrap R3PO " << this->_name << " Copy Constructor" << endl;
}

//====================== Destructors =====================

ClapTrap::~ClapTrap( void )
{
	cout << "ClapTrap R3PO " << this->_name << " Destructor" << endl;
}

//====================== Arithmetic Overload =============

ClapTrap &	ClapTrap::operator=( const ClapTrap & rhs )
{
		this->_name = rhs.getName();
		this->_hit = rhs.getHit();
		this->_energy = rhs.getEnergy();
		this->_damage = rhs.getDamage();
		return ( *this );
}

//====================== Accessors ========================

string	ClapTrap::getName( void ) const
{
	return ( this->_name );
}

int		ClapTrap::getHit( void ) const
{
	return ( this->_hit );
}

int		ClapTrap::getEnergy( void ) const
{
	return ( this->_energy );
}

int		ClapTrap::getDamage( void ) const
{
	return ( this->_damage );
}

void	ClapTrap::setName( const string name )
{
	this->_name = name;
}

void	ClapTrap::setHit( const int nb )
{
	if ( nb < 0 )
		this->_hit = 0;
	else
		this->_hit = nb;
}

void	ClapTrap::setEnergy( const int nb )
{
	if ( nb < 0 )
		this->_energy = 0;
	else
		this->_energy = nb;
}

void	ClapTrap::setDamage( const int nb )
{
	if ( nb < 0 )
		this->_damage = 0;
	else
		this->_damage = nb;
}

//=================== Members Functions ==================

void	ClapTrap::attack(const string & target)
{
	if ( this->_hit <= 0 )
		cout << endl << "R3PO " << this->_name << " can't attack... he's dead !" << endl;
	else if ( this->_energy <= 0 )
		cout << "R3PO " << this->_name << " have no more energy point ... he can't attack" << endl;
	else
	{
		cout << "R3PO " << this->_name;
		cout << " attacks " << target;
		cout << ", causing " << this->_damage;
		cout << " points of damage!" << endl;
		this->_energy--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if ( this->_hit <= 0 )
		cout << endl << "... but R3PO " << this->_name << " can't take damages... he's dead !" << endl;
	else
	{
		cout << "R3PO " << this->_name;
		cout << " took " << amount;
		cout << " points of damage!" << endl;
		this->_hit -= amount;
		if ( this->_hit <= 0 )
			cout << "R3PO " << this->_name << " is dead !" << endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if ( this->_hit <= 0 )
		cout << endl << "R3PO " << this->_name << " can't fix himself... he's dead !" << endl;
	else if ( this->_energy > 0 )
	{
		cout << "R3PO " << this->_name;
		cout << " recovered " << amount;
		cout << " points of hit !" << endl;
		this->_hit += amount;
		this->_energy--;
	}
	else
		cout << "R3PO " << this->_name << " have no more energy points ... he can't fix himself" << endl;
}

