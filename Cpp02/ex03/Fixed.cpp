/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:16:51 by amahla            #+#    #+#             */
/*   Updated: 2022/09/26 18:23:46 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>


using std::cout;
using std::endl;

//================= Constructors ======================

Fixed::Fixed( void ) : _nb(0)
{
}

Fixed::Fixed( const int nb_integer )
{
	this->_nb = nb_integer << this->_fraction;
}

Fixed::Fixed( const float nb_float )
{
	this->_nb = roundf( nb_float * ( 1 << this->_fraction ) );
}

Fixed::Fixed( const Fixed & fpn ) : _nb(fpn.getRawBits())
{
}

//================== Destructor =======================

Fixed::~Fixed( void )
{
}

//================== Arithmetic Operators =======================

Fixed &	Fixed::operator=( const Fixed & fpn )
{
	this->_nb = fpn.getRawBits();
	return ( *this );
}

Fixed	Fixed::operator+( const Fixed & fpn ) const
{
	Fixed	temp;

	temp.setRawBits( this->_nb + fpn.getRawBits() );
	return ( temp );
}

Fixed	Fixed::operator-( const Fixed & fpn ) const
{
	Fixed	temp;

	temp.setRawBits( this->_nb - fpn.getRawBits() );
	return ( temp );
}

Fixed	Fixed::operator*( const Fixed & fpn ) const
{
	Fixed			temp;
	long long int	nb_long;

	nb_long = ( this->_nb * fpn.getRawBits() ) >> this->_fraction;
	temp.setRawBits( ( int )nb_long );
	return ( temp );
}

Fixed	Fixed::operator/( const Fixed & fpn ) const
{
	Fixed	temp;

	temp.setRawBits( roundf( this->toFloat() / fpn.toFloat() * ( 1 << this->_fraction ) ) );
	return ( temp );
}

//================== Comparison Operators =======================

bool	Fixed::operator>( const Fixed & fpn ) const
{
	if ( this->_nb > fpn.getRawBits() )
		return ( true );
	return ( false );
}

bool	Fixed::operator<( const Fixed & fpn ) const
{
	if ( this->_nb < fpn.getRawBits() )
		return ( true );
	return ( false );
}

bool	Fixed::operator>=( const Fixed & fpn ) const
{
	if ( this->_nb >= fpn.getRawBits() )
		return ( true );
	return ( false );
}

bool	Fixed::operator<=( const Fixed & fpn ) const
{
	if ( this->_nb <= fpn.getRawBits() )
		return ( true );
	return ( false );
}

bool	Fixed::operator==( const Fixed & fpn ) const
{
	if ( this->_nb == fpn.getRawBits() )
		return ( true );
	return ( false );
}

bool	Fixed::operator!=( const Fixed & fpn ) const
{
	if ( this->_nb != fpn.getRawBits() )
		return ( true );
	return ( false );
}

//================== In(De)crementaion Operators =======================

Fixed &	Fixed::operator++( void )
{
	( this->_nb )++;
	return ( *this );
}

Fixed	Fixed::operator++( int )
{
	Fixed	temp = *this;

	( this->_nb )++;
	return ( temp );
}

Fixed &	Fixed::operator--( void )
{
	( this->_nb )--;
	return ( *this );
}

Fixed	Fixed::operator--( int )
{
	Fixed	temp = *this;

	( this->_nb )--;
	return ( temp );
}

//================== Member Fonctions =======================

int	Fixed::getRawBits( void ) const
{
	return ( this->_nb );
}

void	Fixed::setRawBits( int nb )
{
	this->_nb = nb;
}

float	Fixed::toFloat( void ) const
{
	return ( ( float )this->_nb / ( 1 << this->_fraction ) );
}

int		Fixed::toInt( void ) const
{
	return ( this->_nb >> this->_fraction );
}

//================== Non-members Fonctions=======================

Fixed &			Fixed::min( Fixed & fpn1, Fixed & fpn2 )
{
	if ( fpn1.getRawBits() < fpn2.getRawBits() )
		return ( fpn1 );
	return ( fpn2 );
}

const Fixed &	Fixed::min( const Fixed & fpn1, const Fixed & fpn2 )
{
	if ( fpn1.getRawBits() < fpn2.getRawBits() )
		return ( fpn1 );
	return ( fpn2 );
}

Fixed &			Fixed::max( Fixed & fpn1, Fixed & fpn2 )
{
	if ( fpn1.getRawBits() > fpn2.getRawBits() )
		return ( fpn1 );
	return ( fpn2 );
}

const Fixed &	Fixed::max( const Fixed & fpn1, const Fixed & fpn2 )
{
	if ( fpn1.getRawBits() > fpn2.getRawBits() )
		return ( fpn1 );
	return ( fpn2 );
}

//================== Other Functions =======================

std::ostream & operator<<( std::ostream & o, Fixed const & fpn )
{
	o << fpn.toFloat();
	return (o);
}
