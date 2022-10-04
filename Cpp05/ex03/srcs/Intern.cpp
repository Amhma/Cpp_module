/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:34:06 by amahla            #+#    #+#             */
/*   Updated: 2022/10/04 19:37:00 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>

Intern::Intern( void )
{
	if ( DEBUG )
		std::cout << "Intern Default Constructor" << std::endl;
}

Intern::Intern( const Intern & rhs )
{
	if ( DEBUG )
		std::cout << "Intern copy Constructor" << std::endl;
	*this = rhs;
}

Intern::~Intern( void )
{
	if ( DEBUG )
		std::cout << "Intern Default Destructor" << std::endl;
}

Intern &	Intern::operator=( const Intern & rhs )
{
	( void )rhs;
	return ( *this );
}

AForm	*Intern::makeForm( const string form, const string target )
{
	const string	strs[3] = { "shrubbery creation", "robotomy request", "presidential pardon" };
	int		i;

	for ( i = 0; i < 3 && strs[i] != form; i++ )
		;
	switch ( i )
	{
		case 0 :
			std::cout << "Intern creates \"" << strs[0] << "\"." << std::endl;
			return ( new ShrubberyCreationForm( target ) );
			break ;
		case 1 :
			std::cout << "Intern creates \"" << strs[1] << "\"." << std::endl;
			return ( new RobotomyRequestForm( target ) );
			break ;
		case 2 :
			std::cout << "Intern creates \"" << strs[2] << "\"." << std::endl;
			return ( new PresidentialPardonForm( target ) );
			break ;
		default :
			std::cout << "Intern said : \"Sorry, I haven't find the form \"" << form << "\" ... but do you want some coffee ?\""  << std::endl; 
			throw ( Intern::CantFindForm() );
			return ( NULL );
	}
}

const char*	Intern::CantFindForm::what( void ) const throw()
{
	return ( "Exception: Try to create an inexistant Form." );
}
