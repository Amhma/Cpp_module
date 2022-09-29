/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:54:52 by amahla            #+#    #+#             */
/*   Updated: 2022/09/30 00:32:13 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP__
# define __BRAIN_HPP__

# include <string>

using std::string;

class Brain
{
	public:

		Brain( void );
		Brain( const string type );
		Brain( const Brain & rhs );

		~Brain( void );

		Brain &	operator=( const Brain & rhs );

		const string	*getIdeas( void ) const;
		void			setIdeas( const string *ideas );

	private:

		string	_ideas[100];
};

#endif
