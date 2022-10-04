/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:28:17 by amahla            #+#    #+#             */
/*   Updated: 2022/10/04 19:09:12 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) :
	AForm( "Shrubbery Creation Form", 145, 137 ), _target( "" )
{
	if ( DEBUG )
		std::cout << "ShrubberyCreationForm Default Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const string target ) :
	AForm( "Shrubbery Creation Form", 145, 137 ), _target( target )
{
	if ( DEBUG )
		std::cout << "ShrubberyCreationForm Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & rhs ) :
	AForm( "Shrubbery Creation Form", 145, 137 )
{
	if ( DEBUG )
		std::cout << "ShrubberyCreationForm copy Constructor" << std::endl;
	*this = rhs;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	if ( DEBUG )
		std::cout << "ShrubberyCreationForm Default Destructor" << std::endl;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=( const ShrubberyCreationForm & rhs )
{
	if ( this != &rhs )
		this->setSign( rhs.getSign() );
	return ( *this );
}

const string &	ShrubberyCreationForm::getTarget( void ) const
{
	return ( this->_target );
}

void			ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
	string			nameFile;
	std::ofstream	ofs;

	if ( !this->getSign() )
		throw ( AForm::NotSignException() );
	else if ( executor.getGrade() <= this->getExecGrade() )
	{
		nameFile = this->_target;
		nameFile += "_shrubbery";
		ofs.open( nameFile.c_str(), std::ofstream::out | std::ofstream::app );
		if ( ofs.is_open() && ofs.good() )
		{
			for ( int i(0); i < 10 && ofs.good(); i++ )
			{
				ofs << std::endl;
				ofs << "        __ _.--..--._ _			" << std::endl;
				ofs << "     .-' _/   _/\\_   \\_'-.		" << std::endl;
				ofs	<< "    |__ /   _/\\__/\\_   \\__|		" << std::endl;
				ofs << "       |___/\\_\\__/  \\___|		" << std::endl;
				ofs << "              \\__/		        " << std::endl;
				ofs << "              \\__/				" << std::endl;
				ofs << "               \\__/				" << std::endl;
				ofs << "                \\__/			" << std::endl;
				ofs << "             ____\\__/___		" << std::endl;
				ofs << "       . - '             ' -.	" << std::endl;
				ofs << "      /                      \\	" << std::endl;
				ofs << "~~~~~~~  ~~~~~ ~~~~~  ~~~ ~~~  ~~~~~" << std::endl;
				ofs << "~~~   ~~~~~   ~~~~   ~~ ~  ~ ~ ~~~~" << std::endl;
				ofs << std::endl;
			}
			std::cout << "File " << this->_target << " created !"<< std::endl;
		}
		else
			throw ( ShrubberyCreationForm::FileNotGood() );
	}
	else
		throw ( AForm::ExecGradeTooLowException() );
}

const char*	ShrubberyCreationForm::FileNotGood::what( void ) const throw()
{
	return ( "Exception: Attempt to execute a form by a bureaucrat of too low a rank." );
}
