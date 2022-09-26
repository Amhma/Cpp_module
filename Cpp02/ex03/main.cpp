/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:59:59 by amahla            #+#    #+#             */
/*   Updated: 2022/09/26 14:02:56 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main( void )
{
	Point const a( 1, 1);
	Point const b( 1, 3 );
	Point const c( 3, 1 );
	Point const point( 1.2, 1.2 );

	if ( bsp(a, b, c, point ) )
		std::cout << "The point is in the triangle." << std::endl;
	else
		std::cout << "The point isn't in the triangle." << std::endl;

}

