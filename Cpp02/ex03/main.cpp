/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:59:59 by amahla            #+#    #+#             */
/*   Updated: 2022/09/26 11:59:19 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main( void )
{
	Point const a( 1, 1);
	Point const b( 3, 2 );
	Point const c( 1, 3 );
	Point const point( 1.04, 1.04 );

	std::cout << point.getPointX() << std::endl;

	if ( bsp(a, b, c, point ) )
		std::cout << "The point is in the triangle." << std::endl;
	else
		std::cout << "The point isn't in the triangle." << std::endl;

}

