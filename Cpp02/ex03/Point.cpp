/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 01:29:00 by amahla            #+#    #+#             */
/*   Updated: 2022/09/26 13:57:27 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Point::Point( void ) : _x( 0 ), _y( 0 ), _z( 0 ) 
{
}

Point::Point( const float x, const float y ) : _x( x ), _y( y ), _z( 0 )
{
}

Point::Point( const Fixed x, const Fixed y, const Fixed z ) : _x( x ), _y( y ), _z( z )
{
}

Point::~Point( void )
{
}

Point::Point( const Point & rhs ) : _x( rhs.getPointX() ), _y( rhs.getPointY() ), _z( rhs.getPointZ() )
{
}

Point &	Point::operator=( const Point & rhs )
{
	Point	res( rhs.getPointX(), rhs.getPointY(), rhs.getPointZ() );

	*this = res;
	return ( *this );
}

Point	Point::operator-( const Point & rhs ) const
{
	Point	vec( rhs.getPointX() - this->_x,
					rhs.getPointY() - this->_y,
					rhs.getPointZ() - this->_z );

	return ( vec );
}

Point	Point::operator*( const Point & rhs ) const
{
	Point	vec( ( this->_y * rhs.getPointZ() ) - ( this->_z * rhs.getPointY() ),
					( this->_z * rhs.getPointX() ) - ( this->_x * rhs.getPointZ() ),
					( this->_x * rhs.getPointY() ) - ( this->_y * rhs.getPointX() ) );

	return ( vec );
}

bool	Point::operator>( const Fixed & fpn ) const
{
	if ( this->_z > fpn )
		return ( true );
	return ( false );
}

bool	Point::operator<( const Fixed & fpn ) const
{
	if ( this->_z < fpn )
		return ( true );
	return ( false );
}

const Fixed	Point::getPointX( void ) const
{
	return ( this->_x );
}

const Fixed	Point::getPointY( void ) const
{
	return ( this->_y );
}

const Fixed	Point::getPointZ( void ) const
{
	return ( this->_z );
}
