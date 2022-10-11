/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:03:08 by amahla            #+#    #+#             */
/*   Updated: 2022/10/11 15:16:54 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_HPP__
# define __MUTANTSTACK_HPP__

# include <stack>
# include <iostream>

template< typename T >
class MutantStack : public std::stack<T>
{

	public:

		typedef typename std::stack<T>::container_type::iterator				iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
		typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

		MutantStack<T>( void );
		MutantStack<T>( const MutantStack<T> & rhs );
		
		virtual ~MutantStack<T>( void );

		MutantStack<T> &	operator=( const MutantStack<T> & rhs );

		iterator				begin( void );
		iterator				end( void );
		reverse_iterator		rbegin( void );
		reverse_iterator		rend( void );
		const_iterator			cbegin( void ) const;
		const_iterator			cend( void ) const;
		const_reverse_iterator	crbegin( void ) const;
		const_reverse_iterator	crend( void ) const;

};

# include "MutantStack.tpp"

#endif
