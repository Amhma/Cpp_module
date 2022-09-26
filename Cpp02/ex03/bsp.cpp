/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 01:45:02 by amahla            #+#    #+#             */
/*   Updated: 2022/09/26 17:59:36 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	crossProductCheck( Point const u, Point const v, Point const w, Point const point )
{
	Point const	vec_1( u - v );
	Point const	vec_2( u - point );
	Point const	vec_3( u - w );
	
	if ( (( vec_1 * vec_2 ) > Fixed( 0 ) && ( vec_2 * vec_3 ) > Fixed( 0 ))
		|| (( vec_1 * vec_2 ) < Fixed( 0 ) && ( vec_2 * vec_3 ) < Fixed( 0 ) ))
		return ( true );
	return (false );
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	if ( crossProductCheck( a, b, c, point )
		&& crossProductCheck( b, c, a, point )
		&& crossProductCheck( c, a, b, point ) )
		return ( true );
	return ( false );
}
