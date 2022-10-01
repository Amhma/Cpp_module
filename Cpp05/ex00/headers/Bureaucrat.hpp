/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:39:00 by amahla            #+#    #+#             */
/*   Updated: 2022/10/01 18:38:50 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__

# define DEBUG 0

# include <string>
# include <stdexcept>

using std::string;

class Bureaucrat
{
	public:
		
		Bureaucrat( void );
		Bureaucrat( const string name );
		Bureaucrat( const Bureaucrat & rhs );

		~Bureaucrat( void );

		Bureaucrat &	operator=( const Bureaucrat & rhs );

		const string	getName( void ) const;
		unsigned int	getGrade( void ) const;
		void			setGrade( const unsigned int nb );

		class GradeTooHighException : public std::exception
		{
			virtual const char*	what() const throw()
			{
				return ( "Attempt to instantiate \"Bureaucrat\" class at too high an echelon" );
			}
		}

		class GradeTooLowException : public std::exception
		{
			virtual const char*	what() const throw()
			{
				return ( "Attempt to instantiate \"Bureaucrat\" class at too low an echelon" );
			}
		}

	private:

		const string	_name;
		unsigned int	_grade;

};

#endif
