/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 02:09:42 by amahla            #+#    #+#             */
/*   Updated: 2022/10/09 12:46:28 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template< typename T >
Array<T>::Array( void ) : _array( NULL ), _size( 0 )
{}

template< typename T >
Array<T>::Array( unsigned int n ) : _array( new T[n] ), _size( n )
{}

template< typename T >
Array<T>::Array( const Array<T> & rhs ) : _array( NULL ), _size( 0 )
{
	*this = rhs;
}

template< typename T >
Array<T>::~Array( void )
{
	if ( this->_array )
		delete [] this->_array;
}

template< typename T >
Array<T> &	Array<T>::operator=( const Array<T> & rhs )
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

template< typename T >
T			& Array<T>::operator[]( const unsigned int n )
{
	if ( n >= this->_size )
		throw ( InvalidIndice() );
	return ( this->_array[n] );
}

template< typename T >
const T		&  Array<T>::operator[]( const unsigned int n ) const
{
	if ( n >= this->_size )
		throw ( InvalidIndice() );
	return ( this->_array[n] );
}

template< typename T >
T*				Array<T>::getArray( void ) const
{
	return ( this->_array );
}

template< typename T >
unsigned int	Array<T>::size( void ) const
{
	return ( this->_size );
}

template< typename T >
const char*	Array<T>::InvalidIndice::what( void ) const throw()
{
	return ( "Exception: Invalid index." );
}

template< typename T >
void			Array<T>::setArray( const T *array )
{
	for ( unsigned int i(0); i < this->_size; i++ )
		this->_array[i] = array[i];
}
