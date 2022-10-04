/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 13:05:57 by amahla            #+#    #+#             */
/*   Updated: 2022/10/04 18:43:21 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_HPP__
# define __FORM_HPP__

# include <string>
# include <stdexcept>
# include <ostream>

using std::string;

class Bureaucrat;

class Form
{

	public:

		Form( void );
		Form( const string name, const int signGrade, const int execGrade );
		Form( const Form & rhs );

		~Form( void );

		Form &	operator=( const Form & rhs );

		const string &	getName( void ) const;
		bool			getSign( void ) const;
		const int &		getSignGrade( void ) const;
		const int &		getExecGrade( void ) const;
		void			setSign( const bool sign );

		void			beSigned( const Bureaucrat & bur );
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
		bool			_sign;
		const int		_signGrade;
		const int		_execGrade;

};

std::ostream &	operator<<( std::ostream & o, const Form & rhs );

#endif
