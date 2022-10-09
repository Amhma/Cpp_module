/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:32:23 by amahla            #+#    #+#             */
/*   Updated: 2022/10/09 02:08:00 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_HPP__
# define __ITER_HPP__

# include <iostream>
# include <string>

template< typename T >
void	iter( T* array, std::size_t size, void (*f)( T & ) )
{
	for( std::size_t i(0); i < size; i++ )
		f( array[i] );
}

template< typename T >
void	print_array( T& elem )
{
	std::cout << elem << std::endl;
}

#endif
