/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 01:18:32 by amahla            #+#    #+#             */
/*   Updated: 2022/09/26 13:57:11 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_HPP__
# define __POINT_HPP__

# include "Fixed.hpp"

class Point
{
	public:

		Point();
		Point( const float x, const float y );
		Point( const Fixed x, const Fixed y , const Fixed z);
		Point( const Point & rhs );

		~Point();

		Point &	operator=( const Point & rhs );
		Point	operator-( const Point & rhs ) const;
		Point	operator*( const Point & rhs ) const;


		bool	operator>( const Fixed & fpn ) const;
		bool	operator<( const Fixed & fpn ) const;

		const Fixed	getPointX( void ) const;
		const Fixed	getPointY( void ) const;
		const Fixed	getPointZ( void ) const;

	private:

		const Fixed	_x;
		const Fixed	_y;
		const Fixed	_z;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif
