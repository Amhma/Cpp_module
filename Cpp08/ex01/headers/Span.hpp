/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:03:08 by amahla            #+#    #+#             */
/*   Updated: 2022/10/10 18:21:33 by amahla           ###   ########.fr       */
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
		unsigned int	getSize( void ) const;
		void			addNumber( const int nb);
		void			insertNumbersRand( const int size );

		unsigned int	shortestSpan( void );
		unsigned int	longestSpan( void ) const;

		class NoSizeToFind : public std::exception
		{
			virtual const char*	what( void ) const throw();
		};

	private:

		std::list<int>	_lints;
		unsigned int	_size;

};

#endif
