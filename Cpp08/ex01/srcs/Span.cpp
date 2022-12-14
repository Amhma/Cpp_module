/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:40:25 by amahla            #+#    #+#             */
/*   Updated: 2022/10/11 22:06:23 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <cstdlib>

Span::Span( void )
{
	if ( DEBUG )
		std::cout << "Span Default Constructor" << std::endl;
}

Span::Span( const unsigned int nb ) : _size( nb )
{
	if ( DEBUG )
		std::cout << "Span Default Constructor" << std::endl;
}

Span::Span( const Span & rhs )
{
	if ( DEBUG )
		std::cout << "Span copy Constructor" << std::endl;
	*this = rhs;
}

Span::~Span( void )
{
	if ( DEBUG )
		std::cout << "Span Default Destructor" << std::endl;
}

Span &	Span::operator=( const Span & rhs )
{
	if ( this != &rhs )
	{
		this->_lints = rhs.getList();
		this->_size = rhs.getSize();
	}
	return ( *this );
}

std::list<int>	Span::getList( void ) const
{
	return ( this->_lints );
}

unsigned int	Span::getSize( void ) const
{
	return ( this->_size );
}

void	Span::addNumber( const int nb )
{
	if ( this->_lints.size() == this->_size )
		throw ( std::out_of_range( "Exception: no more places for a new number" ) );
	this->_lints.push_back( nb );
}

unsigned int	Span::longestSpan( void ) const
{
	std::list<int>::const_iterator	it = this->_lints.begin();
	std::list<int>::const_iterator	ite = this->_lints.end();

	if ( this->_lints.empty() || this->_lints.size() == 1 )
		throw( Span::NoSizeToFind() );

	return ( *std::max_element( it, ite ) - *std::min_element( it, ite ) );
}

unsigned int	Span::shortestSpan( void )
{
	unsigned int	size = UINT_MAX;
	long int		temp;
	std::list<int>::iterator	it;

	if ( this->_lints.empty() || this->_lints.size() == 1 )
		throw( Span::NoSizeToFind() );
	
	this->_lints.sort();
	it = this->_lints.begin();
	do
	{
		temp = abs( *it - *(++it) );
		if ( temp < size )
			size = temp;
	} while ( it != this->_lints.end() );
	return ( size );
}

void			Span::insertNumbersRand( const int size )
{
	if ( this->_lints.size() + size > this->_size )
		throw ( std::out_of_range( "Exception: no more places for a new number" ) );
	std::vector<int>	nbr( size );

	srand(time(NULL));
	for ( int i(0); i < size; i++ )
		nbr[i] = rand() % INT_MAX;
	this->_lints.insert( this->_lints.begin(), nbr.begin(), nbr.end() );
}

const char*	Span::NoSizeToFind::what( void ) const throw()
{
	return ( "Exception: size of list is too small to find a distance." );
}
