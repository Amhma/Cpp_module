/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 01:45:02 by amahla            #+#    #+#             */
/*   Updated: 2022/09/26 03:47:08 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	vector_routine( Point const u, Point const v, Point const w, Point const point )
{
	Point const	vec_1( v - u );
	Point const	vec_2( point - u );
	Point const	vec_3( w - u );

	return ( ( vec_1 ^ vec_2 ) * ( vec_2 ^ vec_3 ) );
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed const	zero;

	if ( vector_routine( a, b, c, point ) > zero
		&& vector_routine( b, c, a, point ) > zero
		&& vector_routine( c, a, b, point ) > zero )
		return ( true );
	return ( false );
}
