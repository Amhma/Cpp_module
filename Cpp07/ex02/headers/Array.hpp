/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 02:09:42 by amahla            #+#    #+#             */
/*   Updated: 2022/10/10 17:42:25 by amahla           ###   ########.fr       */
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

		Array<T>( void );
		Array<T>( const unsigned int n );
		Array<T>( const Array<T> & rhs );

		~Array<T>( void );

		Array<T>	& operator=( const Array<T> & rhs );
		T			& operator[]( const unsigned int n ) const;

		T*				getArray( void ) const;
		unsigned int	size( void ) const;

		class InvalidIndice : public std::exception
		{
			virtual const char*	what( void ) const throw();
		};

	private:

		T*				_array;
		unsigned int	_size;

		void			setArray( const T *array );

};

# include "Array.tpp"

#endif
