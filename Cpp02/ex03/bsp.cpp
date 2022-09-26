/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 01:45:02 by amahla            #+#    #+#             */
/*   Updated: 2022/09/26 12:00:01 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	vector_routine( Point const u, Point const v, Point const w, Point const point )
{
	Point const	vec_1( u - v );
	Point const	vec_2( u - point );
	Point const	vec_3( u - w );

	std::cout << "vector vec_2 : " << vec_2.getPointX() << " ";
	std::cout << "vector vec_2 : " << vec_2.getPointY() << " ";
	std::cout << "vector vec_2 : " << vec_2.getPointZ() << " " << std::endl;
	std::cout << "vector vec_1 : " << vec_1.getPointX() << " ";
	std::cout << "vector vec_1 : " << vec_1.getPointY() << " ";
	std::cout << "vector vec_1 : " << vec_1.getPointZ() << " " << std::endl;
	return ( ( vec_1 ^ vec_2 ) * ( vec_2 ^ vec_3 ) );
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed const	zero( 0.f );

	if ( vector_routine( a, b, c, point ) > zero
		&& vector_routine( b, c, a, point ) > zero
		&& vector_routine( c, a, b, point ) > zero )
		return ( true );
	return ( false );
}
