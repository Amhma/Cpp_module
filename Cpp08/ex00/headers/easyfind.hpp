/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:40:59 by amahla            #+#    #+#             */
/*   Updated: 2022/10/10 01:56:06 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_HPP__
# define __EASYFIND_HPP__

# include <stdexcept>
# include <algorithm>

template< typename T >
typename T::const_reference easyfind( const T & data , const int nb )
{
	typename T::const_iterator	it = data.begin();
	typename T::const_iterator	ite = data.end();

	it = find( it, ite, nb );
	if ( it == ite )
		throw ( std::out_of_range( "Exception: no target in this container" ) );
	return ( *it );
}

#endif
