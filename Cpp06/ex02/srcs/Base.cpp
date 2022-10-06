/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:07:48 by amahla            #+#    #+#             */
/*   Updated: 2022/10/06 23:43:01 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <ctime>
#include <cstdlib>
#include <exception>
#include <iostream>

Base	*generate( void )
{
	srand( time(NULL) );

	int	nb = rand() % 3;
	switch ( nb )
	{
		case 0:
			return ( new A );
		case 1:
			return ( new B );
		default:
			return ( new C );
	}
	return ( NULL );
}

void	identify( Base* p )
{
	A	*a = NULL;
	B	*b = NULL;
	C	*c = NULL;

	a = dynamic_cast<A *>(p);
	if ( a )
		std::cout << "Base is From 'A' class ( pointer function )" << std::endl;
	b = dynamic_cast<B *>(p);
	if ( b )
		std::cout << "Base is From 'B' class ( pointer function )" << std::endl;
	c = dynamic_cast<C *>(p);
	if ( c )
		std::cout << "Base is From 'C' class ( pointer function )" << std::endl;
}

void	identify( Base& p )
{
	A	a;
	B	b;
	C	c;

	try
	{
		a = dynamic_cast<A &>(p);
		std::cout << "Base is From 'A' class ( reference function )" << std::endl;
	}
	catch ( std::exception & e )
	{
		try
		{
			b = dynamic_cast<B &>(p);
			std::cout << "Base is From 'B' class ( reference function )" << std::endl;
		}
		catch ( std::exception & e )
		{
			c = dynamic_cast<C &>(p);
			std::cout << "Base is From 'C' class ( reference function )" << std::endl;
		}
	}
}
