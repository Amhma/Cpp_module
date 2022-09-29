/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:36:33 by amahla            #+#    #+#             */
/*   Updated: 2022/09/30 00:40:30 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
# define __DOG_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

using std::string;

class Dog : public Animal
{
	public:

		Dog( void );
		Dog( const Dog & rhs );

		virtual	~Dog( void );

		Dog &	operator=( const Dog & rhs );

		Brain	*getBrain( void ) const;
		void	setBrain( const Brain *brain );

		virtual void	makeSound( void ) const;

	private:

		Brain	*_brain;
};

#endif
