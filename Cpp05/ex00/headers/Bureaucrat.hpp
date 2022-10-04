/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:39:00 by amahla            #+#    #+#             */
/*   Updated: 2022/10/04 18:32:07 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__

# define DEBUG 0

# include <string>
# include <stdexcept>
# include <ostream>

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

		void			throw_exceptions( void );

		class GradeTooHighException : public std::exception
		{

			public:

				virtual const char*	what( void ) const throw();

		};

		class GradeTooLowException : public std::exception
		{

			public:

				virtual const char*	what( void ) const throw();

		};

	private:

		const string	_name;
		int				_grade;

};

std::ostream &	operator<<( std::ostream & o, const Bureaucrat & rhs );

#endif
