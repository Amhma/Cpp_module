/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:10:36 by amahla            #+#    #+#             */
/*   Updated: 2022/09/22 12:06:06 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>

int main( int argc, const char *argv[] )
{
	Harl	Harl;

	for ( int i(1); i < argc; i++ )
		Harl.complain( argv[i] );
	return 0;
}
