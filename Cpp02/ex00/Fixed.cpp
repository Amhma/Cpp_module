/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:16:51 by amahla            #+#    #+#             */
/*   Updated: 2022/09/27 16:14:25 by amahla           ###   ########.fr       */
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

Fixed::Fixed( const Fixed & fpn )
{
	cout << "Copy constructor called" << endl;
	*this = fpn;
}

Fixed::~Fixed( void )
{
	cout << "Destructor called" << endl;
}

Fixed&	Fixed::operator=( const Fixed & fpn )
{
	cout << "Copy assignment operator called" << endl;
	this->_nb = fpn.getRawBits();
	return ( *this );
}

int	Fixed::getRawBits( void ) const
{
	cout << "getRawBits member function called" << endl;
	return ( this->_nb );
}

void	Fixed::setRawBits( int const nb )
{
	this->_nb = nb;
}
