/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:10:36 by amahla            #+#    #+#             */
/*   Updated: 2022/09/22 21:38:19 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main( int argc, const char *argv[] )
{
	Harl	Harl;

	if ( argc == 1 )
		std::cout << "Statement needed ..." << std::endl;
	for ( int i(1); i < argc; i++ )
		Harl.complain( argv[i] );
	return 0;
}
