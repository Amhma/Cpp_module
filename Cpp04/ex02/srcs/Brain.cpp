/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 22:03:23 by amahla            #+#    #+#             */
/*   Updated: 2022/09/29 23:49:41 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain( void )
{
	std::cout << "Brain Default Constructor" << std::endl;
}

Brain::Brain( const string type )
{
	for ( int i(0); i < 100; i++ )
		this->_ideas[i] = type;
	std::cout << "Brain Constructor" << std::endl;
}

Brain::Brain( const Brain & rhs )
{
	std::cout << "Brain copy Constructor" << std::endl;
	*this = rhs;
}

Brain::~Brain( void )
{
	std::cout << "Brain Default Destructor" << std::endl;
}

Brain &	Brain::operator=( const Brain & rhs )
{
	if ( this != &rhs )
		setIdeas( rhs.getIdeas() );
	return ( *this );
}

const string	*Brain::getIdeas( void ) const
{
	return ( this->_ideas );
}

void		Brain::setIdeas( const string *ideas )
{
	for ( int i(0); i < 100; i++ )
		this->_ideas[i] = ideas[i];
}
