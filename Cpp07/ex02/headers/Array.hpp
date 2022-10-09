/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 02:09:42 by amahla            #+#    #+#             */
/*   Updated: 2022/10/09 12:43:15 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_HPP_
# define __ARRAY_HPP_

# include <exception>
# include <cstdlib>

template< typename T >
class Array
{

	public:

		Array( void );
		Array( unsigned int n );
		Array( const Array & rhs );

		~Array( void );

		Array &	operator=( const Array & rhs );
		T	& operator[]( unsigned int n );

		T*				getArray( void ) const;
		unsigned int	size( void ) const;

		void			setSize( const unsigned int size ) const;

		class InvalidIndice : public std::exception
		{
			virtual const char*	what( void ) const throw();
		};

	private:

		T*				_array;
		unsigned int	_size;

		void			setArray( const T *array ) const;

};

# include "Array.tpp"

#endif
