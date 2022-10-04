/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:57:50 by amahla            #+#    #+#             */
/*   Updated: 2022/10/04 19:11:33 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM_HPP__
# define __ROBOTOMYREQUESTFORM_HPP__

# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <string>

using std::string;

class RobotomyRequestForm : public AForm
{

	public:

		RobotomyRequestForm( void );
		RobotomyRequestForm( const string target );
		RobotomyRequestForm( const RobotomyRequestForm & rhs );

		virtual ~RobotomyRequestForm( void );

		RobotomyRequestForm &	operator=( const RobotomyRequestForm & rhs );

		const string &	getTarget( void ) const;

		virtual void	execute( Bureaucrat const & executor ) const;

	private:

		const string	_target;

};

#endif
