/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:03:08 by amahla            #+#    #+#             */
/*   Updated: 2022/10/10 22:06:56 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_HPP__
# define __MUTANTSTACK_HPP__

# include <deque>
# include <stack>
#include <iostream>

template< typename T >
class MutantStack : public std::stack<T>
{

	public:

		typedef typename std::deque<T>::reverse_iterator		iterator;
		typedef typename std::deque<T>::iterator				reverse_iterator;
		typedef typename std::deque<T>::const_reverse_iterator	const_iterator;
		typedef typename std::deque<T>::const_iterator			const_reverse_iterator;

		MutantStack<T>( void ) : std::stack<T>()
		{}

		MutantStack<T>( const MutantStack<T> & rhs ) : std::stack<T>( rhs )
		{}

		
		virtual ~MutantStack<T>( void )
		{}

		MutantStack<T> &	operator=( const MutantStack<T> & rhs )
		{
			if ( this != &rhs )
				static_cast< std::stack<T> &>( *this ) = static_cast< const std::stack<T> &>( rhs );
			return ( *this );
		}

		iterator				begin( void )
		{
			return ( std::stack<T>::c.rbegin() );
		}

		iterator				end( void )
		{
			return ( std::stack<T>::c.rend() );
		}

		reverse_iterator		rbegin( void )
		{
			return ( std::stack<T>::c.begin() );
		}

		reverse_iterator		rend( void )
		{
			return ( std::stack<T>::c.end() );
		}

		const_iterator			cbegin( void )
		{
			return ( std::stack<T>::c.rbegin() );
		}

		const_iterator			cend( void )
		{
			return ( std::stack<T>::c.rend() );
		}

		const_reverse_iterator	crbegin( void )
		{
			return ( std::stack<T>::c.begin() );
		}

		const_reverse_iterator	crend( void )
		{
			return ( std::stack<T>::c.end() );
		}

};

#endif
