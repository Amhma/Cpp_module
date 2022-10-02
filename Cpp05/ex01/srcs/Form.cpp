/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 13:34:39 by amahla            #+#    #+#             */
/*   Updated: 2022/10/02 17:10:30 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

Form::Form( void ) : _name(""), _sign(false), _signGrade(150), _execGrade(150)
{
	if ( DEBUG )
		std::cout << "Form Default Constructor" << std::endl;
}

Form::Form( const string name, const int signGrade, const int execGrade ) : _name(name), _sign(false), _signGrade(signGrade), _execGrade(execGrade)
{
	this->throw_exceptions();
	if ( DEBUG )
		std::cout << "Form Default Constructor" << std::endl;
}

Form::Form( const Form & rhs ) : _name( rhs.getName() ), _sign( rhs.getSign() ), _signGrade( rhs.getSignGrade() ), _execGrade( rhs.getExecGrade() )
{
	this->throw_exceptions();
	if ( DEBUG )
		std::cout << "Form copy Constructor" << std::endl;
	*this = rhs;
}

Form::~Form( void )
{
	if ( DEBUG )
		std::cout << "Form Default Destructor" << std::endl;
}

Form &	Form::operator=( const Form & rhs )
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

const string &	Form::getName( void ) const
{
	return ( this->_name );
}

bool			Form::getSign( void ) const
{
	return ( this->_sign );
}

const int & 	Form::getSignGrade( void ) const
{
	return ( this->_signGrade );
}

const int &		Form::getExecGrade( void ) const
{
	return ( this->_execGrade );
}

void			Form::setSign( const bool sign )
{
	this->_sign = sign;
}

void			Form::beSigned( const Bureaucrat & bur )
{
	if ( bur.getGrade() <= this->getSignGrade() )
		this->setSign( true );
	else
		throw ( Form::GradeTooLowException() );
}

void	Form::throw_exceptions( void )
{
	if ( this->_signGrade <= 0 || this->_execGrade <= 0 )
		throw ( Form::GradeTooHighException() );
	else if ( this->_signGrade > 150 || this->_execGrade > 150 )
		throw ( Form::GradeTooLowException() );
}

const char*	Form::GradeTooHighException::what( void ) const throw()
{
	return ( "Exception: Attempt to instantiate grades from \"Form\" class at too high an echelon" );
}

const char*	Form::GradeTooLowException::what( void ) const throw()
{
	return ( "Exception: Attempt to instantiate grades from \"Form\" class at too low an echelon or signed by a bureaucrat of too low a rank." );
}

std::ostream &	operator<<( std::ostream & o, const Form & rhs )
{
	o << std::endl << "Formulaire : " << rhs.getName() << std::endl;
	o << "Signed : ";
	if ( rhs.getSign() )
		o << " Yes" << std::endl; 
	else
		o << " No" << std::endl;
	o << "Grade required to be signed : " << rhs.getSignGrade() << std::endl;
	o << "Grade required to be executed : " << rhs.getSignGrade() << std::endl << std::endl;
	return ( o );
}
