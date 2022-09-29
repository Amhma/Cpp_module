/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:36:33 by amahla            #+#    #+#             */
/*   Updated: 2022/09/29 14:44:43 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
# define __DOG_HPP__

#include "Animal.hpp"

using std::string;

class Dog : public Animal
{
	public:

		Dog( void );
		Dog( const Dog & rhs );

		~Dog( void );

		Dog &	operator=( const Dog & rhs );

		virtual void	makeSound( void ) const;
};

#endif
