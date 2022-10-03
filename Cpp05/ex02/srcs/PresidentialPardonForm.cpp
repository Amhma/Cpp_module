/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 23:28:16 by amahla            #+#    #+#             */
/*   Updated: 2022/10/03 18:52:00 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) :
	AForm( "Presidential Pardon Form", 25, 5 ), _target( "" )
{
	if ( DEBUG )
		std::cout << "PresidentialPardonForm Default Constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const string target ) :
	AForm( "Presidential Pardon Form", 25, 5 ), _target( target )
{
	if ( DEBUG )
		std::cout << "PresidentialPardonForm Constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & rhs ) :
	AForm( "Presidential Pardon Form", 25, 5 )
{
	if ( DEBUG )
		std::cout << "PresidentialPardonForm copy Constructor" << std::endl;
	*this = rhs;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	if ( DEBUG )
		std::cout << "PresidentialPardonForm Default Destructor" << std::endl;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=( const PresidentialPardonForm & rhs )
{
	if ( this != &rhs )
		this->setSign( rhs.getSign() );
	return ( *this );
}

const string &	PresidentialPardonForm::getTarget( void ) const
{
	return ( this->_target );
}

void			PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	if ( !this->getSign() )
		throw ( AForm::NotSignException() );
	else if ( executor.getGrade() <= this->getExecGrade() )
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	else
		throw ( AForm::ExecGradeTooLowException() );
}
