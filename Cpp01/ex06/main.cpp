/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:10:36 by amahla            #+#    #+#             */
/*   Updated: 2022/09/22 21:36:29 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main( int argc, const char *argv[] )
{
	Harl	Harl;

	switch ( argc )
	{
		case 1:
			std::cout << "Statement needed ..." << std::endl;
			break;
		case 2:
			Harl.complain( argv[1] );
			break;
		default:
			std::cout << "Too many statements" << std::endl;
	}
	return 0;
}
