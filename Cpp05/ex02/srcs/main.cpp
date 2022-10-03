/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 21:55:01 by amahla            #+#    #+#             */
/*   Updated: 2022/10/03 18:47:38 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main( void )
{
	try
	{
		
		Bureaucrat	b( "Fred", 150 );
		AForm		*form[3];

		form[0] = new PresidentialPardonForm( "Tony" );
		form[1] = new RobotomyRequestForm( "Hulk" );
		form[2] = new ShrubberyCreationForm( "Jardin" );

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
	}
	catch ( std::exception & e )
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
