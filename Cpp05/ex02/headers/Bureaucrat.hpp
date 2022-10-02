/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:39:00 by amahla            #+#    #+#             */
/*   Updated: 2022/10/03 01:22:17 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__

# include <string>
# include <stdexcept>
# include <ostream>
# include "const.h"

class AForm;

using std::string;

class Bureaucrat
{

	public:

		Bureaucrat( void );
		Bureaucrat( const string name, int grade );
		Bureaucrat( const Bureaucrat & rhs );

		~Bureaucrat( void );

		Bureaucrat &	operator=( const Bureaucrat & rhs );
		Bureaucrat &	operator++( void );
		Bureaucrat		operator++( int );
		Bureaucrat &	operator--( void );
		Bureaucrat		operator--( int );

		const string &	getName( void ) const;
		int				getGrade( void ) const;
		void			setGrade( const int nb );

		void			signForm( const AForm & f );
		void			executeForm( const AForm & form );
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

	private:

		const string	_name;
		int	_grade;

};

std::ostream &	operator<<( std::ostream & o, const Bureaucrat & rhs );

#endif
