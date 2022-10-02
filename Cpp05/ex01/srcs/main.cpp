/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 21:55:01 by amahla            #+#    #+#             */
/*   Updated: 2022/10/02 17:15:14 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main( void )
{
	try
	{
		
		Bureaucrat	b( "Fred", 130 );
		Form	f( "B28", 130, 10 );
		std::cout << f;
		b.signForm( f );
		f.beSigned( b );
		std::cout << b << std::endl;
		std::cout << f;
		b.signForm( f );
		f.beSigned( b-- );
	}
	catch ( std::exception & e )
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
