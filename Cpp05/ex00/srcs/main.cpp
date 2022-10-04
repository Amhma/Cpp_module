/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 21:55:01 by amahla            #+#    #+#             */
/*   Updated: 2022/10/04 18:35:55 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main( void )
{

	try
	{
		Bureaucrat	b( "Fred", 151 );
		b++;
		std::cout << b << std::endl;
	}
	catch ( std::exception & e )
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
