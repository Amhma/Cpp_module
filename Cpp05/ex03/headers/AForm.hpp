/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 13:05:57 by amahla            #+#    #+#             */
/*   Updated: 2022/10/03 01:11:12 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AFORM_HPP__
# define __AFORM_HPP__

# include <string>
# include <stdexcept>
# include <ostream>
# include "const.h"

using std::string;

class Bureaucrat;

class AForm
{

	public:

		AForm( void );
		AForm( const string name, const int signGrade, const int execGrade );
		AForm( const AForm & rhs );

		virtual ~AForm( void );

		AForm &	operator=( const AForm & rhs );

		const string &	getName( void ) const;
		bool			getSign( void ) const;
		const int &		getSignGrade( void ) const;
		const int &		getExecGrade( void ) const;
		void			setSign( const bool sign );

		void			beSigned( const Bureaucrat & bur );
		virtual void	execute( Bureaucrat const & executor ) const = 0;
		void			throw_exceptions( void );

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};

		class ExecGradeTooLowException : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};

		class NotSignException : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};

	private:

		const string	_name;
		bool			_sign;
		const int		_signGrade;
		const int		_execGrade;

};

std::ostream &	operator<<( std::ostream & o, const AForm & rhs );

#endif
