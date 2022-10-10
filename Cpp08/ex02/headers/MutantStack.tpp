/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:03:08 by amahla            #+#    #+#             */
/*   Updated: 2022/10/11 01:35:11 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_TPP__
# define __MUTANTSTACK_TPP__

template< typename T >
MutantStack<T>::MutantStack( void ) : std::stack<T>() {}

template< typename T >
MutantStack<T>::MutantStack( const MutantStack<T> & rhs ) : std::stack<T>( rhs ) {}

template< typename T >
MutantStack<T>::~MutantStack( void ) {}

template< typename T >
MutantStack<T> &	MutantStack<T>::operator=( const MutantStack<T> & rhs )
{
	if ( this != &rhs )
		static_cast< std::stack<T> &>( *this ) = static_cast< const std::stack<T> &>( rhs );
	return ( *this );
}

template< typename T >
typename MutantStack<T>::iterator				MutantStack<T>::begin( void )
{
	return ( std::stack<T>::c.begin() );
}

template< typename T >
typename MutantStack<T>::iterator				MutantStack<T>::end( void )
{
	return ( std::stack<T>::c.end() );
}

template< typename T >
typename MutantStack<T>::reverse_iterator		MutantStack<T>::rbegin( void )
{
	return ( std::stack<T>::c.rbegin() );
}

template< typename T >
typename MutantStack<T>::reverse_iterator		MutantStack<T>::rend( void )
{
	return ( std::stack<T>::c.rend() );
}

template< typename T >
typename MutantStack<T>::const_iterator			MutantStack<T>::cbegin( void )
{
	return ( std::stack<T>::c.begin() );
}

template< typename T >
typename MutantStack<T>::const_iterator			MutantStack<T>::cend( void )
{
	return ( std::stack<T>::c.end() );
}

template< typename T >
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::crbegin( void )
{
	return ( std::stack<T>::c.rbegin() );
}

template< typename T >
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::crend( void )
{
	return ( std::stack<T>::c.rend() );
}

#endif
