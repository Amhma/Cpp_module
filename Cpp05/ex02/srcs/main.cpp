/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 21:55:01 by amahla            #+#    #+#             */
/*   Updated: 2022/10/03 01:33:16 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main( void )
{
	try
	{
		
		Bureaucrat	b( "Fred", 26 );
		AForm	*f = new PresidentialPardonForm( "Tony" );
		std::cout << *f;
		(*f).beSigned( b );
		b.signForm( *f );
		b.executeForm( *f );
/*		std::cout << b << std::endl;
		std::cout << f;
		b.signForm( f );
		f.beSigned( b-- );*/
	}
	catch ( std::exception & e )
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
