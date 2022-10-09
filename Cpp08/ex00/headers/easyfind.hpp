/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:40:59 by amahla            #+#    #+#             */
/*   Updated: 2022/10/09 16:31:26 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_HPP__
# define __EASYFIND_HPP__

#include <stdexcept>

template< typename T, typename U >
const U	& easyfind( const T & data , const int nb )
{
	typename T::const_iterator	it;
	typename T::const_iterator	ite = data.end();

	for ( it = data.begin(); it != ite && *it != nb; ++it )
		;
	if ( it != ite )
		return ( data[*it] );
	throw ( std::out_of_range( "Exception: no target in this container" ) );
	return ( data.front() );
}

#endif
