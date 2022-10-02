/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 21:55:01 by amahla            #+#    #+#             */
/*   Updated: 2022/10/02 16:53:27 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main( void )
{
	try
	{
		Bureaucrat	b( "Fred", 1 );
		b++;
		std::cout << b << std::endl;
	}
	catch ( std::exception & e )
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
