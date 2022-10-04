/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:26:51 by amahla            #+#    #+#             */
/*   Updated: 2022/10/04 17:02:27 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

class Intern
{
	public:

		Intern( void );
		Intern( const Intern & rhs );

		~Intern( void );

		Intern &	operator=( const Intern & rhs );

		class CantFindForm : public std::exception
		{
			virtual const char* what( void ) const throw();
		};

		AForm		*makeForm( const string form, const string target );

};
