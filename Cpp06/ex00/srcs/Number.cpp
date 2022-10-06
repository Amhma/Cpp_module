/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Number.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:10:13 by amahla            #+#    #+#             */
/*   Updated: 2022/10/06 12:04:42 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Number.hpp"
#include <ostream>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <climits>

Number::Number( void ) : _numberDouble( 0.0 )
{
	if ( DEBUG )
		std::cout << "Number Default Constructor" << std::endl;
}

Number::Number( const double numberDouble ) : _numberDouble( numberDouble )
{
	if ( DEBUG )
		std::cout << "Number Default Constructor" << std::endl;
}

Number::Number( const Number & rhs ) : _numberDouble( rhs.getDouble() )
{
	if ( DEBUG )
		std::cout << "Number copy Constructor" << std::endl;
}

Number::~Number( void )
{
	if ( DEBUG )
		std::cout << "Number Default Destructor" << std::endl;
}

Number &	Number::operator=( const Number & rhs )
{
	if ( this != &rhs )
		this->_numberDouble = rhs.getDouble();
	return ( *this );
}

double		Number::getDouble( void ) const
{
	return ( this->_numberDouble );
}

void		Number::setDouble( const double numberDouble )
{
	this->_numberDouble = numberDouble;
}

Number::operator char( void )
{
	return ( static_cast<char>( this->_numberDouble ));
}

Number::operator int( void )
{
	return ( static_cast<int>( this->_numberDouble ));
}

Number::operator float( void )
{
	return ( static_cast<float>( this->_numberDouble ));
}

std::ostream &	operator<<( std::ostream & o, const Number & rhs )
{
	Number a( rhs );

	o << "char: ";
	if ( rhs.getDouble() <= 126 && rhs.getDouble() >= 32 )
		o << '\'' <<  static_cast<char>( a ) << '\''  << std::endl;
	else if ( rhs.getDouble() <= CHAR_MAX && rhs.getDouble() >= CHAR_MIN )
		std::cout << "Non displayable" << std::endl;
	else
		o << "impossible" << std::endl;
	o << "int: ";
	if ( rhs.getDouble() <= INT_MAX && rhs.getDouble() >= INT_MIN )
		o << static_cast<int>( a )  << std::endl;
	else
		o << "impossible" << std::endl;
	if ( rhs.getDouble() - floor( rhs.getDouble() ) == 0 )
		o << std::fixed << std::setprecision(1);
	o << "float: " << static_cast<float>( a ) << "f" << std::endl;
	o << "double: " << a.getDouble() << std::endl;

	return ( o );
}
