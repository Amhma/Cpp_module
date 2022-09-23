/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:16:51 by amahla            #+#    #+#             */
/*   Updated: 2022/09/23 19:08:31 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

using std::cout;
using std::endl;

Fixed::Fixed( void ) : _nb(0)
{
	cout << "Default constructor called" << endl;
}

Fixed::Fixed( const& Fixed )
{
	this->_nb = Fixed.getnb();
	cout << "Copy constructor called" << endl;
}

Fixed::~Fixed( void )
{
	cout << "Destructor called" << endl;
}

Fixed&	Fixed::operator=( const& Fixed )
{
	this->_nb = Fixed.getnb();
	cout << "Copy assignment operator called" << endl;
}

int	Fixed::getRawBits( void ) const
{
	return ( this->_nb );
}

void	Fixed::setRawBits( int nb )
{
	this->_nb = nb;
}
