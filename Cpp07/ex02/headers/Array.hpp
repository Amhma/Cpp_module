/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 02:09:42 by amahla            #+#    #+#             */
/*   Updated: 2022/10/09 03:14:04 by amahla           ###   ########.fr       */
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

		Array( void ) : _array( NULL ), _size( 0 ) {}

		Array( unsigned int n ) : _array( new T[n] ), _size( n ) {}

		Array( const Array & rhs ) : _array( NULL ), _size( 0 )
		{
			*this = rhs;
		}

		~Array( void )
		{
			if ( this->_array )
				delete [] this->_array;
		}

		Array &	operator=( const Array & rhs )
		{
			if ( this != &rhs )
			{
				if ( this->_size != rhs.size() )
				{
					this->_size = rhs.size();
					if ( this->_array )
						delete [] this->_array;
					this->_array = new T[this->_size];
				}
				setArray( rhs.getArray() );
			}
			return ( *this );
		}

		T	& operator[]( unsigned int n )
		{
			if ( n < this->_size )
				return ( this->_array[n] );
			throw ( InvalidIndice() );
			return ( this->_array[0] );
		}

		T*				getArray( void ) const
		{
			return ( this->_array );
		}

		unsigned int	size( void ) const
		{
			return ( this->_size );
		}

		void			setSize( const unsigned int size ) const
		{
			this->_size = size;
		}

		class InvalidIndice : public std::exception
		{
			virtual const char	*what( void ) const throw()
			{
				return ( "Exception: Invalid index." );
			}
		};

	private:

		T*				_array;
		unsigned int	_size;

		void			setArray( const T *array ) const
		{
			for ( unsigned int i(0); i < this->_size; i++ )
				this->_array[i] = array[i];
		}

};

#endif
