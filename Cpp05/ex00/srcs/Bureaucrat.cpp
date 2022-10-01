/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:34:25 by amahla            #+#    #+#             */
/*   Updated: 2022/10/01 19:01:16 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name( "" ), _grade( 150 )
{
	if ( DEBUG )
		std::cout << "Bureaucrat Default Constructor" << std::endl;
}

Bureaucrat::Bureaucrat( const string name, unsigned int grade ) : _name( name )
{
	this->_grade = grade;
	if ( DEBUG )
		std::cout << "Bureaucrat Default Constructor" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat & rhs )
{
	if ( DEBUG )
		std::cout << "Bureaucrat copy Constructor" << std::endl;
	*this = rhs;
}

Bureaucrat::~Bureaucrat( void )
{
	if ( DEBUG )
		std::cout << "Bureaucrat Default Destructor" << std::endl;
}

Bureaucrat &	Bureaucrat::operator=( const Bureaucrat & rhs )
{
	if ( this != &rhs )
	{
	}
	return ( *this );
}

/*type*/	Bureaucrat::get( /*data*/ ) const
{
	return ( this->/*attribut*/ );
}

void		Bureaucrat::set( /*data*/ )
{
	return ( this->/*attribut*/ );
}
