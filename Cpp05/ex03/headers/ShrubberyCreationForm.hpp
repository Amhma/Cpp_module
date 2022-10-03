/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:25:22 by amahla            #+#    #+#             */
/*   Updated: 2022/10/03 15:28:03 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM_HPP__
# define __SHRUBBERYCREATIONFORM_HPP__

# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <string>

using std::string;

class ShrubberyCreationForm : public AForm
{

	public:

		ShrubberyCreationForm( void );
		ShrubberyCreationForm( const string target );
		ShrubberyCreationForm( const ShrubberyCreationForm & rhs );

		virtual ~ShrubberyCreationForm( void );

		ShrubberyCreationForm &	operator=( const ShrubberyCreationForm & rhs );

		const string &	getTarget( void ) const;

		virtual void	execute( Bureaucrat const & executor ) const;

	private:

		const string	_target;

};

#endif
