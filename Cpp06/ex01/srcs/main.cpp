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

#include "Data.hpp"
#include <exception>
#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;

int main( void )
{
	Data	*data = new Data;
	Data	*data_res;

	data_res = deserialize( serialize( data ) );
	if ( data_res != data )
		std::cout << "Error: cast 'Data' to 'uintptr_t' and reverse failed" << std::endl;
	else
		std::cout << "Cast 'Data' to 'uintptr_t'and reverse successed" << std::endl;
	delete data;
	return ( EXIT_SUCCESS );
}
