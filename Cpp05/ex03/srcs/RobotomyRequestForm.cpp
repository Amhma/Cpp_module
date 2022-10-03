/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:06:36 by amahla            #+#    #+#             */
/*   Updated: 2022/10/03 18:52:44 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) :
	AForm( "Robotomy Request Form", 72, 45 ), _target( "" )
{
	if ( DEBUG )
		std::cout << "RobotomyRequestForm Default Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const string target ) :
	AForm( "Robotomy Request Form", 72, 45 ), _target( target )
{
	if ( DEBUG )
		std::cout << "RobotomyRequestForm Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & rhs ) :
	AForm( "Robotomy Request Form", 72, 45 )
{
	if ( DEBUG )
		std::cout << "RobotomyRequestForm copy Constructor" << std::endl;
	*this = rhs;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	if ( DEBUG )
		std::cout << "RobotomyRequestForm Default Destructor" << std::endl;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=( const RobotomyRequestForm & rhs )
{
	if ( this != &rhs )
		this->setSign( rhs.getSign() );
	return ( *this );
}

const string &	RobotomyRequestForm::getTarget( void ) const
{
	return ( this->_target );
}

void			RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
	srand ( time(NULL) );
	if ( !this->getSign() )
		throw ( AForm::NotSignException() );
	else if ( executor.getGrade() <= this->getExecGrade() )
	{
		std::cout << "* FffffzzzzzzzzzZZZZZZzzZZzzZZZzZZzrrrRRRRRrrrRR * ( bruit de perceuse malade )" << std::endl;
		if ( rand() % 2 )
			std::cout << this->getTarget() << " has been robotomized." << std::endl;
		else
			std::cout << this->getTarget() << "'s robotomy failed." << std::endl;
	}
	else
		throw ( AForm::ExecGradeTooLowException() );
}
