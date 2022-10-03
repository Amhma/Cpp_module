/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 23:07:17 by amahla            #+#    #+#             */
/*   Updated: 2022/10/03 01:04:01 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM_HPP__
# define __PRESIDENTIALPARDONFORM_HPP__

# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <string>

using std::string;

class PresidentialPardonForm : public AForm
{

	public:

		PresidentialPardonForm( void );
		PresidentialPardonForm( const string target );
		PresidentialPardonForm( const PresidentialPardonForm & rhs );

		virtual ~PresidentialPardonForm( void );

		PresidentialPardonForm &	operator=( const PresidentialPardonForm & rhs );

		const string &	getTarget( void ) const;

		virtual void	execute( Bureaucrat const & executor ) const;

	private:

		const string	_target;

};

#endif
