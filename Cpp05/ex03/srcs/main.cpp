/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 21:55:01 by amahla            #+#    #+#             */
/*   Updated: 2022/10/04 19:41:44 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main( void )
{
	AForm		*form[4];

	for ( int i(0); i < 4; i++ )
		form[i] = NULL;
	try
	{
		Bureaucrat	b( "Fred", 150 );
		Intern		someRandomIntern;

		form[0] = someRandomIntern.makeForm( "presidential pardon", "Tony" );
		form[1] = someRandomIntern.makeForm( "robotomy request", "Bender" );
		form[2] = someRandomIntern.makeForm( "shrubbery creation", "Jardin" );
		form[3] = someRandomIntern.makeForm( "shrubbery creatin", "Jardin" );

		std::cout << *form[0];
		std::cout << *form[1];
		std::cout << *form[2];


		b.signForm( *form[2] );
		(*form[2]).beSigned( b );
		std::cout << std::endl;
		b.executeForm( (*form[2]) );
		std::cout << std::endl;

		b.signForm( *form[1] );
		(*form[1]).beSigned( b );
		std::cout << std::endl;
		b.executeForm( (*form[1]) );
		std::cout << std::endl;

		b.signForm( *form[0] );
		(*form[0]).beSigned( b );
		std::cout << std::endl;
		b.executeForm( (*form[0]) );
		std::cout << std::endl;
		
		std::cout << *form[0];
		std::cout << *form[1];
		std::cout << *form[2];

		for ( int i(0); i < 4; i++ )
		{
			if ( form[i] )
				delete form[i];
		}

	}
	catch ( std::exception & e )
	{
		std::cerr << e.what() << std::endl;
		for ( int i(0); i < 4; i++ )
		{
			if ( form[i] )
				delete form[i];
		}
	}

	return 0;
}
