/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:34:25 by amahla            #+#    #+#             */
/*   Updated: 2022/10/02 23:56:06 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat( void ) : _name( "" ), _grade( 150 )
{
	if ( DEBUG )
		std::cout << "Bureaucrat Default Constructor" << std::endl;
}

Bureaucrat::Bureaucrat( const string name, int grade ) : _name( name ), _grade( grade )
{
	this->throw_exceptions();
	if ( DEBUG )
		std::cout << "Bureaucrat Constructor" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat & rhs ) : _name( rhs.getName() ), _grade( rhs.getGrade() )
{
	this->throw_exceptions();
	if ( DEBUG )
		std::cout << "Bureaucrat copy Constructor" << std::endl;
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
		(string &)(this->_name) = rhs.getName();
		this->_grade = rhs.getGrade();
		this->throw_exceptions();
	}
	return ( *this );
}

const string &	Bureaucrat::getName( void ) const
{
	return ( this->_name );
}

int			Bureaucrat::getGrade( void ) const
{
	return ( this->_grade );
}

void		Bureaucrat::setGrade( const int nb )
{
	this->_grade = nb;
}

Bureaucrat &	Bureaucrat::operator--( void )
{
	(this->_grade)++;
	this->throw_exceptions();
	return ( *this );
}

Bureaucrat		Bureaucrat::operator--( int )
{
	Bureaucrat temp( *this );
	(this->_grade)++;
	this->throw_exceptions();
	return ( temp );
}

Bureaucrat &	Bureaucrat::operator++( void )
{
	(this->_grade)--;
	this->throw_exceptions();
	return ( *this );
}

Bureaucrat		Bureaucrat::operator++( int )
{
	Bureaucrat temp( *this );
	(this->_grade)--;
	this->throw_exceptions();
	return ( temp );
}

void	Bureaucrat::throw_exceptions( void )
{
	if ( this->_grade <= 0 )
		throw ( Bureaucrat::GradeTooHighException() );
	else if ( this->_grade > 150 )
		throw ( Bureaucrat::GradeTooLowException() );
}

void	Bureaucrat::signForm( const Form & f )
{
	if ( f.getSign() )
		std::cout << this->getName() << " couldn't sign " << f.getName() << " because it's already signed." << std::endl;
	else if ( this->getGrade() <= f.getSignGrade() )
		std::cout << this->getName() << " signed " << f.getName() << std::endl;
	else
		std::cout << this->getName() << " couldn't sign " << f.getName() << " because he hasn't the required grade." << std::endl;
}

const char*	Bureaucrat::GradeTooHighException::what( void ) const throw()
{
	return ( "Exception: Attempt to instantiate \"Bureaucrat\" class at too high an echelon" );
}

const char*	Bureaucrat::GradeTooLowException::what( void ) const throw()
{
	return ( "Exception: Attempt to instantiate \"Bureaucrat\" class at too low an echelon" );
}

std::ostream &	operator<<( std::ostream & o, const Bureaucrat & rhs )
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "."; 
	return ( o );
}
