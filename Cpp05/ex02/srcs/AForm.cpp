/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 13:34:39 by amahla            #+#    #+#             */
/*   Updated: 2022/10/03 01:13:14 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

AForm::AForm( void ) : _name(""), _sign(false), _signGrade(150), _execGrade(150)
{
	if ( DEBUG )
		std::cout << "AForm Default Constructor" << std::endl;
}

AForm::AForm( const string name, const int signGrade, const int execGrade ) : _name(name), _sign(false), _signGrade(signGrade), _execGrade(execGrade)
{
	this->throw_exceptions();
	if ( DEBUG )
		std::cout << "AForm Constructor" << std::endl;
}

AForm::AForm( const AForm & rhs ) : _name( rhs.getName() ), _sign( rhs.getSign() ), _signGrade( rhs.getSignGrade() ), _execGrade( rhs.getExecGrade() )
{
	this->throw_exceptions();
	if ( DEBUG )
		std::cout << "AForm copy Constructor" << std::endl;
	*this = rhs;
}

AForm::~AForm( void )
{
	if ( DEBUG )
		std::cout << "AForm Default Destructor" << std::endl;
}

AForm &	AForm::operator=( const AForm & rhs )
{
	if ( this != &rhs )
	{
		(string &)(this->_name) = rhs.getName();
		this->_sign = rhs.getSign();
		(int &)(this->_signGrade) = rhs.getSignGrade();
		(int &)(this->_execGrade) = rhs.getExecGrade();
		this->throw_exceptions();
	}
	return ( *this );
}

const string &	AForm::getName( void ) const
{
	return ( this->_name );
}

bool			AForm::getSign( void ) const
{
	return ( this->_sign );
}

const int & 	AForm::getSignGrade( void ) const
{
	return ( this->_signGrade );
}

const int &		AForm::getExecGrade( void ) const
{
	return ( this->_execGrade );
}

void			AForm::setSign( const bool sign )
{
	this->_sign = sign;
}

void			AForm::beSigned( const Bureaucrat & bur )
{
	if ( bur.getGrade() <= this->getSignGrade() )
		this->setSign( true );
	else
		throw ( AForm::GradeTooLowException() );
}

void	AForm::throw_exceptions( void )
{
	if ( this->_signGrade <= 0 || this->_execGrade <= 0 )
		throw ( AForm::GradeTooHighException() );
	else if ( this->_signGrade > 150 || this->_execGrade > 150 )
		throw ( AForm::GradeTooLowException() );
}

const char*	AForm::GradeTooHighException::what( void ) const throw()
{
	return ( "Exception: Attempt to instantiate grades from \"AForm\" class at too high an echelon" );
}

const char*	AForm::GradeTooLowException::what( void ) const throw()
{
	return ( "Exception: Attempt to instantiate grades from \"AForm\" class at too low an echelon or signed by a bureaucrat of too low a rank." );
}

const char*	AForm::ExecGradeTooLowException::what( void ) const throw()
{
	return ( "Exception: Attempt to execute a form by a bureaucrat of too low a rank." );
}

const char*	AForm::NotSignException::what( void ) const throw()
{
	return ( "Exception: Attempt to execute a not signed form." );
}


std::ostream &	operator<<( std::ostream & o, const AForm & rhs )
{
	o << std::endl << "AFormulaire : " << rhs.getName() << std::endl;
	o << "Signed : ";
	if ( rhs.getSign() )
		o << " Yes" << std::endl; 
	else
		o << " No" << std::endl;
	o << "Grade required to be signed : " << rhs.getSignGrade() << std::endl;
	o << "Grade required to be executed : " << rhs.getSignGrade() << std::endl << std::endl;
	return ( o );
}
