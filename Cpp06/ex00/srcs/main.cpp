/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:58:59 by amahla            #+#    #+#             */

/*   Updated: 2022/10/05 21:07:38 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "Number.hpp"

using std::cout;
using std::endl;

int main(int argc, const char *argv[])
{
	if ( argc != 2 )
	{
		std::cout << "Error: one argument needed" << std::endl;
		return ( EXIT_FAILURE );
	}

	Number	nb( std::strtod( argv[1], NULL ) );
	std::cout << nb << std::endl ;

	return ( EXIT_SUCCESS );
}
