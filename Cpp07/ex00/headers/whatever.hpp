/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 00:18:08 by amahla            #+#    #+#             */
/*   Updated: 2022/10/08 00:37:16 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER_HPP__
# define __WHATEVER_HPP__

template< typename T >
T&	min( T& a, T& b )
{
	return ( a < b ? a : b );
}

template< typename T >
T&	max( T& a, T& b )
{
	return ( a > b ? a : b );
}

template< typename T>
void	swap( T *a, T *b )
{
	T	temp = *a;
	*a = *b;
	*b = temp;
}

#endif
