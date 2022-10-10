/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:03:08 by amahla            #+#    #+#             */
/*   Updated: 2022/10/10 02:19:14 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_HPP__
# define __SPAN_HPP__

# include <list>
# define DEBUG 0

class Span
{
	public:

		Span( void );
		Span( const unsigned int nb );
		Span( const Span & rhs );

		~Span( void );

		Span &	operator=( const Span & rhs );

		std::list<int>	getList( void ) const;
		void			addNumber( const int nb);
		unsigned int	getSize( void ) const;

		unsigned int	shortestSpan( void );
		unsigned int	longestSpan( void );

		class NoSizeToFind : public std::exception
		{
			virtual const char*	what( void ) const throw();
		};

	private:

		std::list<int>	_lints;
		unsigned int	_size;

};

#endif
