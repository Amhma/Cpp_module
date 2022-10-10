/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 00:18:08 by amahla            #+#    #+#             */
/*   Updated: 2022/10/10 17:31:49 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER_HPP__
# define __WHATEVER_HPP__

template< typename T >
const T&	min( const T& a, const T& b )
{
	if ( a < b)
		return ( a );
	return ( b );
}

template< typename T >
const T&	max( const T& a, const T& b )
{
	if ( a > b)
		return ( a );
	return ( b );
}

template< typename T>
void	swap( T& a, T& b )
{
	T	temp = a;
	a = b;
	b = temp;
}

#endif
